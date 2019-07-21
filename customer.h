//customer.h
#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <string>
#include "tariff.h"
#include "types.h"

using std::string;

class Customer
{
private:
	string TelNo;	
	string fname;
	string lname;
	//static int TotalQuantity;
	Tariff * pTariff;
	u32 u32MonthlyVoiceMinutes;
	u32 u32MonthlyInternetMBs;
	u32 u32MonthlySMSCount;
	double dBill;	
	double CalculateBill(void);
public:	
	Customer(string NewTelNo, string CusFName, string CusLName, Tariff * pTrf);	
	~Customer();//destructor
	void Show()const;
	void IncreaseVoiceMin(u32 Min=1);
	void IncreaseInternetMBs(u32 DataMB=1);
	void IncreaseSMSCount(u32 SMSs=1);
	void ChangeTariff(Tariff * pTrf);
	double GiveBill(void);	
};

#endif


