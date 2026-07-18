#pragma once
#include <iostream>
using namespace std;
class sendData{
    public:
    virtual void sendEmail(string subject ,  string body) = 0;
    virtual void sendSMS(string msg) = 0;
};
