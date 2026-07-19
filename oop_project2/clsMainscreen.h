#pragma once
#include "clsPerson.h"
#include "clsRegister.h"
#include "clsHeader.h"
#include "clsProfile.h"
#include <iomanip>
using namespace std;
class clsMainscreen
{
public:
    static void screen() {
        string firstname, lastname, email, password;
        int phone = 0;
        cout << setw(60) << "Welcome" << endl;
        cout << "enter your firstname : " << firstname << endl;
        cin >> firstname;
        cout << "enter your lastname : " << lastname << endl;
        cin >> lastname;
        cout << "enter your email : " << email << endl;
        cin >> email;
        cout << "enter your phone : " << phone << endl;
        cin >> phone;
        cout << "enter your password : " << password << endl;
        cin >> password;
        clsRegister r1(firstname, lastname, email, phone, password);
        clsProfile::displayProfile(r1);
    }
};

