#pragma once
#include <iostream>
#include "person.h"
using namespace std;
class clsEmployee : public clsPerson {
    private:
    string _title;
    int _salary;
    string _department;

    public:
    clsEmployee(int id ,string firstName, string lastName, 
        string email, int phone, string title, 
        int salary, string department ) : 
    clsPerson(id ,firstName, lastName, email, phone){
        _title = title;
        _salary = salary;
        _department = department;
    }
    void set_title(string title){
        _title = title;
    }
    string get_title(){
        return _title;
    }
    void set_salary(int salary){
        _salary = salary;
    }

    int get_salary(){
        return _salary;
    }

    void set_department(string department)
    {
        _department = department;
    }
    
    string get_department()
    {
        return _department;
    }
    friend void print(clsEmployee e1);
};

    void print(clsEmployee e1){
        cout << "_________________________________\n";
        cout << "Id : " << e1.get_Id() << "\n";
        cout << "First Name : " << e1.get_firstName() <<"\n";
        cout << "Last Name : " << e1.get_lastName() <<"\n";
        cout << "Phone : " << e1.get_phone() <<"\n";
        cout << "Email : " <<  e1.get_email() <<"\n";
        cout << "Title : " <<  e1._title <<"\n";
        cout << "Salary : " <<  e1._salary <<"\n";
        cout << "Department : " <<  e1._department<<"\n";
        cout << "_________________________________\n\n"; 
    }
