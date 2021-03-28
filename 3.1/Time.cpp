#include "Time.h"
Time::Time()
{
	SetHours(0);
	SetMinutes(0);
	SetSeconds(0);
}

Time::Time(const Triad& a)
{
	SetHours(a.GetHours());
	SetMinutes(a.GetMinutes());
	SetSeconds(a.GetSeconds());
	Stabilizer();
}

Time::Time(const Time& a)
{
	SetHours(a.GetHours());
	SetMinutes(a.GetMinutes());
	SetSeconds(a.GetSeconds());
}

Time::~Time(void)
{}

void Time::Stabilizer()
{
	SecondsConverter();
	MinutesConverter();
	HoursConverter();
}

void Time::HoursConverter()
{
	if (GetHours() >= 24)
		SetHours(GetHours() % 24);
}

void Time::MinutesConverter()
{
	while (GetMinutes() >= 60)
	{
		SetMinutes(GetMinutes() - 60);
		incHours();
	}
}

void Time::SecondsConverter()
{
	while (GetSeconds() >= 60)
	{
		SetSeconds(GetSeconds() - 60);
		incMinutes();
	}
}

void Time::incHours()
{
	SetHours(GetHours() + 1);
	HoursConverter();
}

void Time::incMinutes()
{
	SetMinutes(GetMinutes() + 1);
	MinutesConverter();
}

void Time::incSeconds()
{
	SetSeconds(GetSeconds() + 1);
	SecondsConverter();
}

void Time::addSeconds()
{
	int value;
	cout << "Enter seconds to add: "; cin >> value;
	SetSeconds(GetSeconds() + value);
	Stabilizer();
}

void Time::addMinutes()
{
	int value;
	cout << "Enter minutes to add: "; cin >> value;
	SetMinutes(GetMinutes() + value);
	Stabilizer();
}

ostream& operator<<(ostream& out, const Time& a)
{
	out << "Hours: " << a.GetHours() << " minutes: " << a.GetMinutes() << " seconds: " << a.GetSeconds() << endl;
	return out;
}

istream& operator>>(istream& in, Time& a)
{
	int b, c, d;
	cout << "Hours: "; in >> b; a.SetHours(abs(b));
	cout << "Minutes: "; in >> c; a.SetMinutes(abs(c));
	cout << "Seconds: "; in >> d; a.SetSeconds(abs(d));
	a.Stabilizer();
	return in;
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
	if (GetSeconds() != 0)
		SetSeconds(GetSeconds() - 1);
	else
		if (GetMinutes() != 0)
			SetMinutes(GetMinutes() - 1);
		else
			if (GetHours() != 0)
				SetHours(GetHours() - 1);
			else
				cout << "Hours: 0, minutes: 0, seconds: 0" << endl;
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
	if (GetSeconds() != 0)
		SetSeconds(GetSeconds() - 1);
	else
		if (GetMinutes() != 0)
			SetMinutes(GetMinutes() - 1);
		else
			if (GetHours() != 0)
				SetHours(GetHours() - 1);
			else
				cout << "Hours: 0, minutes: 0, seconds: 0" << endl;
	return tmp;
}