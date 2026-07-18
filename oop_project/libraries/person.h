#pragma once
#include <iostream>
#include "sendData.h"
using namespace std;

class clsPerson : public sendData{
    private:

    struct stPerson{
        int _id;
        string _firstName;
        string _lastName;
        int _phone;
        string _email;
    };

    public:
    clsPerson(){}
    stPerson p1;
    clsPerson(int id ,string firstName, string lastName, string email, int phone){
        p1._id = id;
        p1._firstName = firstName;
        p1._lastName = lastName;
        p1._phone = phone;
        p1._email = email;
    }

    int  get_Id(){
        return p1._id;
    }
    
    void set_firstName(string firstName){
        p1._firstName = firstName;
    }

    string get_firstName(){
        return p1._firstName;
    }

    void set_lastName(string lastName){
        p1._lastName = lastName;
    }

    string get_lastName(){
        return p1._lastName;
    }
    void set_email(string email){
        p1._email = email ;
    }

    string get_email(){
        return p1._email;
    }
    void set_phone(int phone){
        p1._phone = phone ;
    }

    int get_phone(){
        return p1._phone;
    }
    // virtual void print(){
    //     cout << "_________________________________\n";
    //     cout << "Id : " << _id << "\n";
    //     cout << "First Name : " << _firstName <<"\n";
    //     cout <<"Last Name : " << _lastName <<"\n";
    //     cout << "Phone : " << _phone <<"\n";
    //     cout <<"Email : " <<  _email <<"\n";
    //     cout << "_________________________________\n\n";   
    // }
    void sendEmail(string subject ,  string body){
        cout << "The following massage successfully to email : " << p1._email << "\n";
        cout << "Subject: " << subject << "\n";
        cout << "Body: " << body << "\n\n";
    }


    void sendSMS(string msg){
        cout << "The following massage successfully to phone : " << p1._phone << "\n";
        cout << "Massage : " << msg << "\n\n";
    }

    friend class clsEmployee;
    friend class clsDevelopr;


    // friend void print(clsDevelopr d1); // error 
};
