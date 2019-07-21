//customer.cpp
#include <iostream>
#include "customer.h"
#include "tariff.h"

Customer::Customer(string NewTelNo, string CusFName, string CusLName, Tariff * pTrf) 
{
	std::cout << "Creating customer...\n";	
	TelNo = NewTelNo;
	fname = CusFName;
	lname = CusLName;
	pTariff = pTrf;
	u32MonthlyVoiceMinutes = 0;
	u32MonthlyInternetMBs = 0;
	u32MonthlySMSCount = 0;
	dBill = 0;
	Show(); 	
}

Customer::~Customer()
{
	std::cout << "Customer deleted!\n";
}

void Customer::Show() const
{
	using std::cout;
	using std::endl;
	
	cout << "Customer Tel No: " << TelNo << endl;
	cout << "First Name: " << fname << endl;
	cout << "Last Name: " << lname << endl;
	cout << "Tariff: " << pTariff->GiveName() << endl;
	//cout << "Tariff No: " << pTariff->GiveNo() << endl;
	cout << "Monthly Voice Service Usage: " << u32MonthlyVoiceMinutes << " Minutes" << endl;
	cout << "Monthly Internet Usage: " << u32MonthlyInternetMBs << " MBs" << endl;
	cout << "Monthly SMS Service Usage: " << u32MonthlySMSCount << " SMSs" << endl;
	cout << "Current Bill: " << dBill << " TL"<< endl << endl;
}

void Customer::IncreaseVoiceMin(u32 Min)
{
	u32MonthlyVoiceMinutes += Min;
	CalculateBill();
}

void Customer::IncreaseInternetMBs(u32 DataMB)
{
	u32MonthlyInternetMBs += DataMB;
	CalculateBill();
}

void Customer::IncreaseSMSCount(u32 SMSs)
{
	u32MonthlySMSCount += SMSs;
	CalculateBill();
}

void Customer::ChangeTariff(Tariff * pTrf)
{
	pTariff = pTrf;
}

double Customer::GiveBill(void)
{	
	return dBill;
}

double Customer::CalculateBill(void)
{
	dBill = u32MonthlyVoiceMinutes * pTariff->GiveVoiceMinPrice() + u32MonthlyInternetMBs * pTariff->GiveInternetMBPrice() + u32MonthlySMSCount * pTariff->GiveSMSPrice();
}



