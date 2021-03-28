#pragma once
#include "Triad.h"

class Time: public Triad
{
public:
	Time();
	Time(const Triad& a);
	Time(const Time& a);
	~Time(void);
	void incHours();
	void incMinutes();
	void incSeconds();
	void HoursConverter();
	void MinutesConverter();
	void SecondsConverter();
	void addSeconds();
	void addMinutes();
	void Stabilizer();
	friend ostream& operator<<(ostream& out, const Time& a);
	friend istream& operator>>(istream& in, Time& a);
	operator string() const;
	Time& operator ++();
	Time& operator --();
	Time operator ++(int);
	Time operator --(int);
};