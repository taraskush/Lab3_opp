#include "Time.h"

Time::Time()
{
	Triad();
}

Time::Time(int a, int b, int c)
{
	hours = abs(a);
	minutes = abs(b);
	seconds = abs(c);
	Stabilizer();
}

Time::Time(const Time& a)
{
	hours = a.hours;
	minutes = a.minutes;
	seconds = a.seconds;
}

void Time::Stabilizer()
{
	SecondsConverter();
	MinutesConverter();
	HoursConverter();
}

void Time::HoursConverter()
{
	if (hours >= 24)
		hours%=24;
}

void Time::MinutesConverter()
{
	while (minutes >= 60)
	{
		minutes-=60;
		incHours();
	}
}

void Time::SecondsConverter()
{
	while (seconds >= 60)
	{
		seconds-=60;
		incMinutes();
	}
}

void Time::incHours()
{
	hours+=1;
	HoursConverter();
}

void Time::incMinutes()
{
	minutes+= 1;
	MinutesConverter();
}

void Time::incSeconds()
{
	seconds += 1;
	SecondsConverter();
}

void Time::addSeconds(int a)
{
	seconds += abs(a);
	Stabilizer();
}

void Time::addMinutes(int a)
{
	minutes += abs(a);
	Stabilizer();
}

void Time::SetHours(int value)
{
	Triad::SetHours(value);
	HoursConverter();
}

void Time::SetMinutes(int value)
{
	Triad::SetMinutes(value);
	MinutesConverter();
}

void Time::SetSeconds(int value)
{
	Triad::SetSeconds(value);
	SecondsConverter();
}

istream& operator>>(istream& in, Time& a)
{
	do {
		cout << "Enter positive numbers" << endl;
		cout << "Enter the first number: "; in >> a.hours;
		cout << "Enter the second number: "; in >> a.minutes;
		cout << "Enter the third: "; in >> a.seconds;
	} while (a.hours < 0 || a.minutes < 0 || a.seconds < 0);
	a.Stabilizer();
	return in;
}

ostream& operator <<(ostream& out, const Time& a)
{
	out << " The hours: " << a.hours << " minutes: " << a.minutes << " seconds: " << a.seconds << endl;
	return out;
}

Time::operator string() const
{
	stringstream ss;
	ss << *this;
	return ss.str();
}

Time& Time::operator ++()
{
	incSeconds();
	return *this;
}

Time& Time::operator --()
{
	if (seconds != 0)
		seconds -= 1;
	else
		if (minutes != 0)
			minutes -= 1;
		else
			if (hours != 0)
				hours -= 1;
			else
				cout << " Hours: 0, minutes: 0, seconds: 0" << endl;
	return *this;
}

Time Time::operator ++(int)
{
	Time tmp(*this);
	incSeconds();
	return tmp;
}

Time Time::operator --(int)
{
	Time tmp(*this);
	if (seconds != 0)
		seconds -= 1;
	else
		if (minutes != 0)
			minutes -= 1;
		else
			if (hours != 0)
				hours -= 1;
			else
				cout << " Hours: 0, minutes: 0, seconds: 0" << endl;
	return tmp;
}
