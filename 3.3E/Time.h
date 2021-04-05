#pragma once
#include "Triad.h"

class Time: public Triad
{
public:
	Time();
	Time(int a, int b, int c);
	Time(const Time& a);
	void incHours();
	void incMinutes();
	void incSeconds();
	void HoursConverter();
	void MinutesConverter();
	void SecondsConverter();
	void addSeconds(int);
	void addMinutes(int);
	void SetHours(int value);
	void SetMinutes(int value);
	void SetSeconds(int value);
	int GetHours() const { Triad::GetHours(); }
	int GetMinutes() const { Triad::GetMinutes(); }
	int GetSeconds() const { Triad::GetSeconds(); }
	void Stabilizer();
	friend istream& operator>>(istream& in, Time& a);
	friend ostream& operator <<(ostream& out, const Time& a);
	operator string() const;
	Time& operator ++();
	Time& operator --();
	Time operator ++(int);
	Time operator --(int);
};