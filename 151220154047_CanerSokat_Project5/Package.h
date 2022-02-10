#ifndef PACKAGE_H
#define PACKAGE_H
#include<iostream>
#include<string>

using namespace std;
/// Package Class Definition
class Package
{
	public:
		///Constructor for Package Class	
		Package(string ,string ,string ,string ,
		string ,string ,string ,string ,
		string ,string ,double ,double);
		///Get Function for Sender Name
		string getSenderName(void);
		///Get Function for Sender Address
		string getSenderAddress(void);
		///Get Function for Sender City
		string getSenderCity(void);
		///Get Function for Sender State
		string getSenderState(void);
		///Get Function for Sender ZIP Code
		string getSenderZIPCode(void);
		///Get Function for Recipient Name
		string getRecipientName(void);
		///Get Function for Recipient Address
		string getRecipientAddress(void);
		///Get Function for Recipient City
		string getRecipientCity(void);
		///Get Function for Recipient State
		string getRecipientState(void);
		///Get Function for Recipient ZIP Code
		string getRecipientZIPCode(void);
		///Set Function for Package Weight
		void setWeight(double);
		///Set Function for Cost per Ounce
		void setCostPerOunce(double);
		///Get Function for Package Weight
		double getWeight(void);
		///Get Function for Cost per Ounce
		double getCostPerOunce(void);
		///Shipment Calcylation Function
		double calculateCost(void);
		///Print the Package Properties
		void print(void);
	protected:
		///Store Name of Sender
		string senderName;
		///Store Address of Sender 
		string senderAddress;
		///Store City of Sender
		string senderCity;
		///Store State of Sender
		string senderState;
		///Store ZIP Code of Sender
		string senderZIPCode;
		///Store Name of Recipient
		string recipientName;
		///Store Address of Sender
		string recipientAddress;
		///Store City of Sender
		string recipientCity;
		///Store State of Sender
		string recipientState;
		///Store ZIP Code of Sender
		string recipientZIPCode;
		///Store Weight of Package
		double weight;
		///Store Cost per Ounce
		double costPerOunce;
};

#endif
