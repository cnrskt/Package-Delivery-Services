#include "Package.h"
#include<iostream>
#include<stdexcept>
#include<string>

using namespace std;
///Constructor of Package Class
Package::Package(string sn,string sa,string sc,string ss,
		string sz,string rn,string ra,string rc,
		string rs,string rz,double w,double cpo)
		:senderName(sn),
		senderAddress(sa),
		senderCity(sc),
		senderState(ss),
		senderZIPCode(sz),
		recipientName(rn),
		recipientAddress(ra),
		recipientCity(rc),
		recipientState(rs),
		recipientZIPCode(rz)
		{
			setWeight(w);
			setCostPerOunce(cpo);
}
///Return Name of Sender
string Package::getSenderName(void){
	return senderName;
}
///Return Address of Sender
string Package::getSenderAddress(void){
	return senderAddress;
}
///Return City of Sender
string Package::getSenderCity(void){
	return senderCity;
}
///Return State of Sender
string Package::getSenderState(void){
	return senderState;
}
///Return ZIP Code of Sender
string Package::getSenderZIPCode(void){
	return senderZIPCode;
}
///Return Name of Recipient
string Package::getRecipientName(void){
	return recipientName;
}
///Return Address of Recipient
string Package::getRecipientAddress(void){
	return recipientAddress;
}
///Return City of Recipient
string Package::getRecipientCity(void){
	return recipientCity;
}
///Return State of Recipient
string Package::getRecipientState(void){
	return recipientState;
}
///Return ZIP Code of Recipient
string Package::getRecipientZIPCode(void){
	return recipientZIPCode;
}
///Set Weight of the Package
///This function guarantee that the weight is greather than zero
void Package::setWeight(double w){
	if(w > 0.0)
	weight=w;
	else
	throw invalid_argument("Weight must be greather than 0.0");
}
///Set Cost per Ounce 
///This function guarantee that the Cost per Ounce is greather than zero
void Package::setCostPerOunce(double cpo){
	if(cpo > 0.0)
	costPerOunce=cpo;
	else
	throw invalid_argument("Cost per Ounce must be greather than 0.0");
}
///Return Weight of the Package
double Package::getWeight(void){
	return weight;
}
///Rrturn Cost per Ounce
double Package::getCostPerOunce(void){
	return costPerOunce;
}
///Function that Calculates Cost of the Shipment
double Package::calculateCost(void){
	return weight*costPerOunce;
}
///Print Function for Package Class Data Members
void Package::print(void){
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
	<<cout<<"\n\nShipment Total Cost: "<<calculateCost()
	<<cout<<"\n**********************************************"<<endl;
}

