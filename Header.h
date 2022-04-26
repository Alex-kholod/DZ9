#ifndef PANEL_H
#define PANEL_H

#include <iostream>;
using namespace std;

class Property
{
	int worth = 0;

public:
	Property(double worth)
	{
		SetWorth(worth);
	}
	void SetWorth(double a)
	{
		Property::worth = a;
	}
	double GetWorth()
	{
		return worth;
	}
	virtual double nalog() = 0;
	virtual ~Property() {}
};

class Apartment : public Property
{
public:
	Apartment(double worth) : Property(worth) {}

	double nalog() override
	{
		return 0.001 * GetWorth();
	}
};

class Car : public Property
{
public:
	Car(double worth) : Property(worth) {}

	double nalog() override
	{
		return 0.005 * GetWorth();
	}
};

class CountryHouse : public Property
{
public:
	CountryHouse(double worth) : Property(worth) {}

	double nalog() override
	{
		return 0.002 * GetWorth();
	}
};

#endif