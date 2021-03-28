#pragma once
#include "opPoint.h"
class incDecPoint: public opPoint
{
public:
	incDecPoint();
	incDecPoint(double a, double b);
	incDecPoint(const incDecPoint& A);
	incDecPoint& operator --();
	incDecPoint& operator ++();
	incDecPoint operator --(int);
	incDecPoint operator ++(int);
};