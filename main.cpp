#include "Header.h";

int main()
{
	Property *mas[7];
	mas[0] = new Apartment(1000.55);
	mas[1] = new Apartment(300000.0);
	mas[2] = new Apartment(500000.0);
	mas[3] = new Car(200000.0);
	mas[4] = new Car(400000.0);
	mas[5] = new CountryHouse(700000.0);
	mas[6] = new CountryHouse(800000.0);

	for (int i = 0; i < 7; i++)
	{
		cout << mas[i]->nalog() << endl;
		delete mas[i];
	}

	return 0;
}