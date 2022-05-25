#ifndef PANEL_H
#define PANEL_H

#include <iostream>;
using namespace std;

class Property
{
protected:
	int worth;
	double nal;
public:
	Property(double worth) : worth(worth) {}
	void SetWorth(double a)
	{
		worth = a;
	}
	double GetWorth()
	{
		return worth;
	}
	virtual double nalog() = 0;
	virtual ~Property() = default;
};

class Apartment : public Property
{
public:
	Apartment(double worth) : Property(worth) {}

	double nalog() override
	{
		double a = 0.001 * GetWorth();
		nal = a;
		return a;
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