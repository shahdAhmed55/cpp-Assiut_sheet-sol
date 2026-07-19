#pragma once
#include <iostream>
using namespace std;
#include "clsRegister.h"
class clsProfileCard
{
public:
    static void getProfileInfo(clsRegister r1) {

        cout << "\n_______________________________________________________\n"<< endl;
        cout << "First Name : " << r1.get_firstName() << endl;
        cout << "Last Name : " << r1.get_lastName() << endl;
        cout << "Email : " << r1.get_email() << endl;
        cout << "Phone : " << r1.get_phone() << endl;
        cout << "Password : " << r1.get_password() << endl << endl;
        cout << "_______________________________________________________\n" << endl;
    }

};

