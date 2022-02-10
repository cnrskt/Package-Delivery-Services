#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include "Package.h"
#include<iostream>
#include<string>

using namespace std; 
///OvernightPackage Class Definition
///Derived Class OvernightPackage Inherits the Functionality of Base Class Package
class OvernightPackage : public Package
{
	public:
		///Constructor of OvernightPackage Class
		OvernightPackage(string ,string ,string ,string ,
		string ,string ,string ,string ,
		string ,string ,double ,double);
		///Shipment Cost Calculation Function for OvernightPackage
		double calculateOPCost(void);
		///Print the OvernightPackage Properties
		void printOP(void);
	protected:
		///Additional Fee per Ounce for  Overnight Package Services
		double additionalFeePerOunce = 3.7;
};

#endif
