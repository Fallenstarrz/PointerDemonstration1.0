// PointerDemonstration.cpp : Defines the entry point for the console application.
// We are going to pretend we are making a simple bank deposit via an ATM! It should be fun.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void badDeposit(int pocket, int bank, string text);
void goodDeposit(int* const pPocket, int* const pBank, string* text);

void main()
{
	int depositAmount = 1650;
	int bankBalance = 17500;
	string story = "Error! Please Try Again!";
	cout << "Original values:\n";
	cout << "In Pocket: $" << depositAmount << endl;
	cout << "In Bank: $" << bankBalance << endl << endl;

	cout << "Hello \n Welcome to Koon Bank! Insert money into the slot to make a deposit!";
	cout << "Thank you, please wait while we process.";

	cout << "Testing badDeposit:\n";
	badDeposit(depositAmount, bankBalance, story);
	cout << "In Pocket: $" << depositAmount << endl;
	cout << "In Bank: $" << bankBalance << endl;
	cout << story << endl << endl;

	cout << "Testing goodDeposit:\n";
	goodDeposit(&depositAmount, &bankBalance, &story);
	cout << "In Pocket: $" << depositAmount << endl;
	cout << "In Bank: $" << bankBalance << endl;
	cout << story << endl << endl;

	system("pause");
}

void badDeposit(int pocket, int bank, string text)
{
	bank += pocket;
	pocket -= pocket;
	text = "Everything went well! Thank you for your deposit!";
}

void goodDeposit(int* const pPocket, int* const pBank, string* text)
{
	*pBank += *pPocket;
	*pPocket -= *pPocket;
	*text = "Everything went well! Thank you for your deposit!";
}
