// PointerDemonstration.cpp : Defines the entry point for the console application.
// We are going to pretend we are making a simple bank deposit via an ATM! It should be fun.

//Headers
#include "stdafx.h"
#include <iostream>
#include <string>

//Namespace
using namespace std;

//Function declarations
void badDeposit(int pocket, int bank, string text);
void goodDeposit(int* const pPocket, int* const pBank, string* text);

//main function
void main()
{
	int depositAmount = 1650; // This is how much money we are trying to deposit
	int bankBalance = 17500; // This is how much money is in our bank
	string story = "Error! Please Try Again!"; // This is the default message

	// Display original values
	cout << "Original values:\n";
	cout << "In Pocket: $" << depositAmount << endl;
	cout << "In Bank: $" << bankBalance << endl << endl;

	// Give a little story to the user
	cout << "Hello \n Welcome to Koon Bank! Insert money into the slot to make a deposit!\n";
	cout << "Thank you, please wait while we process.\n";

	cout << "Testing badDeposit:\n";
	badDeposit(depositAmount, bankBalance, story); // send depositAmount, bankBalance and story into the badDeposit function
	cout << "In Pocket: $" << depositAmount << endl; // print depositAmount, so we can see if we successfully deposited our money
	cout << "In Bank: $" << bankBalance << endl; // print bankBalance, so we can see if we successfully deposited our money
	cout << story << endl << endl; // print story variable, so we can see if we successfully deposited our money

	cout << "Testing goodDeposit:\n";
	goodDeposit(&depositAmount, &bankBalance, &story);// send memory locations of depositAmount, bankBalance and story into the badDeposit function
	cout << "In Pocket: $" << depositAmount << endl;// print depositAmount, so we can see if we successfully deposited our money
	cout << "In Bank: $" << bankBalance << endl;// print bankBalance, so we can see if we successfully deposited our money
	cout << story << endl << endl;// print story variable, so we can see if we successfully deposited our money

	system("pause");
}

// Function definitions
void badDeposit(int pocket, int bank, string text) // takes variables
{
	bank += pocket; // This won't change anything after this function ends
	pocket -= pocket; // This won't change anything after this function ends
	text = "Everything went well! Thank you for your deposit!"; // This won't change anything after this function ends
}

void goodDeposit(int* const pPocket, int* const pBank, string* text) // takes the memory locations of the passed variables as arguments
{
	*pBank += *pPocket; // adds the value stored in pPockets memory address to the value stored in pBanks memory address
	*pPocket -= *pPocket; // subtracts the values stored in pPockets memory address from the value stored in pPockets memory address
	*text = "Everything went well! Thank you for your deposit!"; // set the string stored in text's memory address to say Everything went well! Thank you for your deposit!
}
