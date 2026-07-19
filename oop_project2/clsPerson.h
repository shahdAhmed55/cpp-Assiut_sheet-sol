#pragma once
#include <iostream>
using namespace std;
class clsPerson {
private:
    
    struct stPerson {
        int _id;
        string _firstName;
        string _lastName;
        int _phone;
        string _email;
    };

public:
    clsPerson() {}
    stPerson p1;
    clsPerson(string firstName, string lastName, string email, int phone) {
        p1._firstName = firstName;
        p1._lastName = lastName;
        p1._phone = phone;
        p1._email = email;
    }

    int  get_Id() {
        return p1._id;
    }

    void set_firstName(string firstName) {
        p1._firstName = firstName;
    }

    string get_firstName() {
        return p1._firstName;
    }

    void set_lastName(string lastName) {
        p1._lastName = lastName;
    }

    string get_lastName() {
        return p1._lastName;
    }
    void set_email(string email) {
        p1._email = email;
    }

    string get_email() {
        return p1._email;
    }
    void set_phone(int phone) {
        p1._phone = phone;
    }

    int get_phone() {
        return p1._phone;
    }
};
