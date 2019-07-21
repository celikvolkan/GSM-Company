//tariff.cpp
#include <iostream>
#include "tariff.h"

using std::cout;
using std::endl;

Tariff::Tariff(string TName, double newVoiceMinPrice, double newIntMBPrice, double newSMSPrice)
{
	name = TName;	
	//no = ++totalNumber;	
	dVoiceMinPrice = newVoiceMinPrice;
	dInternetMBPrice = newIntMBPrice;
	dSMSPrice = newSMSPrice;
	Show();
	std::cout << "Tariff created\n";
}

Tariff::~Tariff()
{
	//totalNumber--;
	std::cout << "Tariff deleted\n";
	//std::cout << totalNumber << "Tariff left\n";
}

void Tariff::SetVoiceMinPrice(double NewPrice)
{
	dVoiceMinPrice = NewPrice;
	Show();
}

void Tariff::SetInternetMBPrice(double NewPrice)
{
	dInternetMBPrice = NewPrice;
	Show();
}

void Tariff::SetSMSPrice(double NewPrice)
{
	dSMSPrice = NewPrice;
	Show();
}

void Tariff::UpdateAllPrices(double NewVoicePrice, double NewInternetPrice, double NewSMSPrice)
{
	dVoiceMinPrice = NewVoicePrice;
	dInternetMBPrice = NewInternetPrice;
	dSMSPrice = NewSMSPrice;
	Show();
}

void Tariff::Show() const
{
	using std::cout;
	using std::endl;

	cout << "Tariff Name: " << name << endl;
	//cout << "No " << no << " of " << totalNumber << " tariffs" <<  endl;
	cout << "Price of 1 Minute Voice Service: " << dVoiceMinPrice << " TL" << endl;
	cout << "Price of 1 MB Internet Service: " << dInternetMBPrice << " TL" << endl;
	cout << "Price of 1 SMS Service: " << dSMSPrice << " TL" << endl;
}




