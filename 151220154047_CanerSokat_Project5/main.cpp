#include <iostream>
#include<string>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	///Creating a Package Class Object
	Package p("Caner Sokat","Nayman Street","Tepebasi","Eskisehir","26305","Selin Demir","Toros Street","Konak","Izmir","35130",16.38,3.75);
	p.print();
	///Creating a TwoDayPackage Class Object
	TwoDayPackage tdp("Burak Mavi","Gursel Street","Odunpazari","Eskisehir","26752","Arda Nur","Kiraz Street","Goztepe","Istanbul","34620",16.38,3.75);
	tdp.printTDP();
	///Creating a OvernightPackage Class Object
	OvernightPackage onp("Berkan Erdem","Uzak Street","Anamur","Mersin","33501","Murat Gezer","Kabak Street","Karabaglar","Izmir","35140",16.38,3.75);
	onp.printOP();
	return 0;
}
