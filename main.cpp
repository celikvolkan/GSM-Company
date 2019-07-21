//main.cpp
#include <iostream>
#include "customer.h"
#include "tariff.h"

int main()
{
	using std::cout;
	using std::endl;
	using std::ios_base;
	
	cout.precision(2);// #.## format
	cout.setf(ios_base::fixed, ios_base::floatfield);// #.## format
	cout.setf(ios_base::showpoint);// #.## format
	
	Tariff Trf_OurEmployee = Tariff("Our Employee", 0.05, 0.02, 0.06);
	Tariff Trf_Student = Tariff("Student", 0.30, 0.08, 0.10);
	Tariff Trf_Normal = Tariff("Normal", 0.45, 0.10, 0.15);
	Tariff Trf_Talkative = Tariff("Talkative", 0.15, 0.50, 0.65);
	
	cout << endl;
	Customer Volkan = Customer("05834221523", "Volkan", "Celik", &Trf_Normal);
	Customer Arif = Customer("05103277296", "Arif", "Celebi", &Trf_Student);
	Customer Ayse = Customer("05103277296", "Ayse", "Yilmaz", &Trf_Talkative);
	
	Volkan.IncreaseVoiceMin(310);
	Volkan.IncreaseInternetMBs(1024);
	Volkan.IncreaseSMSCount(1);
	
	Arif.IncreaseVoiceMin(725);
	Arif.IncreaseInternetMBs(1545);
	Arif.IncreaseSMSCount(15);
	
	Ayse.IncreaseVoiceMin(1388);
	Ayse.IncreaseInternetMBs(25);
	Ayse.IncreaseSMSCount(8);
	
	cout << "------------------------------\n";
	cout << "Show last status of customers\n";
	cout << "------------------------------\n";
		
	Volkan.Show();
	Arif.Show();
	Ayse.Show();
	
	return 0;
}



