#pragma once
#include <iostream>
using namespace std;

class Contact
{
	friend class ListOfContacts;
private:
	string name;
	int number;

public:

	Contact();
	string getName();
	string NameMutator();
	int getNumber();
	int NumberMutator();

};