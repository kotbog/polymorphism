#include "LaserPrinter.h"
#include <iostream>

using namespace std;

LaserPrinter::LaserPrinter() {
	this->Duplex = false;
	this->Speed = 0;
}
LaserPrinter::~LaserPrinter() {}
LaserPrinter::LaserPrinter(bool duplex, int speed, bool fax, float weight, float price, string name) : Printer(fax, weight, price, name){
	if (speed > 0) {
		this->Duplex = duplex;
		this->Speed = speed;
	}
}
LaserPrinter::LaserPrinter(const LaserPrinter& item) : Speed(item.Speed), Duplex(item.Duplex), Printer(item)
{
}
bool LaserPrinter::getDublex() {
	return this->Duplex;
}
int LaserPrinter::getSpeed() {
	return this->Speed;
}
void LaserPrinter::Print() {
	cout << "Name: " << this->nameGood << "\nPrice: " << this->price << endl;
	cout << "Fax: " << this->Fax << "\nWeight: " << this->Weight << endl;
	cout << "Duplex: " << this->Duplex << "\nSpeed: " << this->Speed << " p/m\n" << endl;
}

bool LaserPrinter::operator == (LaserPrinter& item) {
	if (this->getName() == item.getName()) {
		return 1;
	}
	return 0;
}
LaserPrinter& LaserPrinter::operator= (const LaserPrinter& str)
{
	this->Duplex = str.Duplex;
	this->Speed = str.Speed;
	this->nameGood = str.nameGood;
	this->price = str.price;
	this->Fax = str.Fax;
	this->Weight = str.Weight;
	return *this;
}
istream& operator>> (istream& in, LaserPrinter& item)
{
	cout << "Name: ";
	in >> item.nameGood;
	cout << "Price: ";
	in >> item.price;
	cout << "Fax: ";
	in >> item.Fax;
	cout << "Speed: ";
	in >> item.Speed;
	cout << "Duplex(Bool): ";
	in >> item.Duplex;
	cout << "Weight: ";
	in >> item.Weight;

	return in;
}