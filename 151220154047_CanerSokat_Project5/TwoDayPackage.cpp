#include "TwoDayPackage.h"
#include "Package.h"
#include<iostream>
#include<stdexcept>
#include<string>

using namespace std;
///Constructor of TwoDayPackage Class
TwoDayPackage::TwoDayPackage(string sn,string sa,string sc,string ss,
		string sz,string rn,string ra,string rc,
		string rs,string rz,double w,double cpo)
		:Package(sn,sa,sc,ss,sz,rn,ra,rc,rs,rz,w,cpo)
		{
			setWeight(w);
			setCostPerOunce(cpo);
}
///Shipment Cost Calculation Function for TwoDayPackage
///This Function Adds Flat Fee to Standard Cost for Two Day Package Services  
double TwoDayPackage::calculateTDPCost(void){
	return flatFee+(weight*costPerOunce);
}
///Print Function for TwoDayPackage Properties
void TwoDayPackage::printTDP(void){
	cout<<"Sender Name: "<<getSenderName()
	<<cout<<"\nSender Address: "<<getSenderAddress()
	<<cout<<"\nSender City: "<<getSenderCity()
	<<cout<<"\nSender State: "<<getSenderState()
	<<cout<<"\nSender ZIP Code: "<<getSenderZIPCode()
	<<cout<<"\n\nRecipient Name: "<<getRecipientName()
	<<cout<<"\nRecipient Address: "<<getRecipientAddress()
	<<cout<<"\nRecipient City: "<<getRecipientCity()
	<<cout<<"\nRecipient State: "<<getRecipientState()
	<<cout<<"\nRecipient ZIP Code: "<<getRecipientZIPCode()
	<<cout<<"\n\nPackage weight: "<<getWeight()
	<<cout<<"\nPackage Cost per Ounce: "<<getCostPerOunce()
	<<cout<<"\n\nShipment Total Cost: "<<calculateTDPCost()
	<<cout<<"\n**********************************************"<<endl;
}

