#pragma once
#include <iostream>
#include "clsPerson.h"
#include "clsRegister.h"
#include <iomanip>
using namespace std;
class clsHeader
{
public:
	static void displayHeader(string name) {
		cout << "\n__________________________________________________________\n";
		cout << setw(28) << "welcome " << name << "    \n";
	}
};

