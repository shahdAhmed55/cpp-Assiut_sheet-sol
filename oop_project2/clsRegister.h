#pragma once
#include <iostream>
#include "clsPerson.h"
using namespace std;
class clsRegister : public clsPerson {
private:
    string _password;

public:
    clsRegister() {}
    clsRegister(string firstName, string lastName, string email, int phone, string password) :
        clsPerson(firstName, lastName, email, phone) {
        _password = password;
    }


    void set_password(string password) {
        _password = password;
    }
    string get_password() {
        return _password;
    }
};