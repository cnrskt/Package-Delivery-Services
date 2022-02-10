#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "Package.h"
#include<iostream>
#include<string>

using namespace std;
///TwoDayPackage Class Definition
///Derived Class TwoDayPackage Inherits the Functionality of Base Class Package
class TwoDayPackage : public Package
{
	public:
		///Constructor of TwoDayPackage Class
		TwoDayPackage(string ,string ,string ,string ,
		string ,string ,string ,string ,
		string ,string ,double ,double);
		///Shipment Cost Calculation Function for TwoDayPackage
		double calculateTDPCost(void);
		///Print the TwoDayPackage Properties
		void printTDP(void);
	protected:
		///Flat Fee for Two Day Package Services
		double flatFee = 16.9;
};

#endif
