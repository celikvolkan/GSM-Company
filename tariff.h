//tariff.h
#ifndef TARIFF_H_
#define TARIFF_H_

#include <string>
#include "types.h"

using std::string;
/*
string astTariffNames[] = {
"Our Employee", "Normal", "Public Company", "Talkative", "Student", "InternetMan"
};
*/

class Tariff
{
private:
	string name;
	//static int totalNumber;
	//int no;
	double dVoiceMinPrice;
	double dInternetMBPrice;
	double dSMSPrice;
public:
	Tariff(string TrfName, double newVoiceMinPrice, double newIntMBPrice, double newSMSPrice);
	~Tariff();	
	void SetVoiceMinPrice(double NewPrice);
	void SetInternetMBPrice(double NewPrice);
	void SetSMSPrice(double NewPrice);
	void UpdateAllPrices(double NewVoicePrice, double NewInternetPrice, double NewSMSPrice);
	string GiveName() const {return name;}
	//int GiveNo() const {return no;}
	double GiveVoiceMinPrice() const {return dVoiceMinPrice;}
	double GiveInternetMBPrice() const {return dInternetMBPrice;}
	double GiveSMSPrice() const {return dSMSPrice;}
	void Show() const;
};

#endif
