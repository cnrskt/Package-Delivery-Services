#include "OvernightPackage.h"
#include "Package.h"
#include<iostream>
#include<stdexcept>
#include<string>

using namespace std;
///Constructor of OvernightPackage Class
OvernightPackage::OvernightPackage(string sn,string sa,string sc,string ss,
		string sz,string rn,string ra,string rc,
		string rs,string rz,double w,double cpo)
		:Package(sn,sa,sc,ss,sz,rn,ra,rc,rs,rz,w,cpo)
		{
			setWeight(w);
			setCostPerOunce(cpo);
}
///Shipment Cost Calculation Function for OvernightPackage
///This Function Adds Additional Fee per Ounce to Standard Fee per Ounce for Overnight Package Services  
double OvernightPackage::calculateOPCost(void){
	return (additionalFeePerOunce+costPerOunce)*weight;
}
///Print Function for OvernightPackage Properties
void OvernightPackage::printOP(void){
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
	<<cout<<"\n\nShipment Total Cost: "<<calculateOPCost()
	<<cout<<"\n**********************************************"<<endl;
}

