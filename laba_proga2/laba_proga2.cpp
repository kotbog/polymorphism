// laba_proga2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Shop.h"
#include "Laptop.h"
#include "Desktop.h"
#include "InkPrinter.h"
#include "LaserPrinter.h"
#include <iostream>

int main()
{
	Shop store("Rozetka");
	Laptop lptp1("HP Pavilion", "Intel Core-M", "AMD", 1000, 13, true);
	Desktop desk1("HyperPc", "Intel", "AMD", 1400, 2, 700);
	InkPrinter iprint(true, 4, true, 1.5, 500, "Canon");
	LaserPrinter lprint(false, 24, true, 1.2, 700, "Epson");
	store.addGood(&lptp1);
	store.addGood(&iprint);
	store.addGood(&lprint);
	store.addGood(&desk1);
	store.showGoods();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
