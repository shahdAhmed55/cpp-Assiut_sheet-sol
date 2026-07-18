#pragma once
#include<iostream>
#include "employee.h"

class clsDeveloper : public clsEmployee{
    private:
    string _mainProgrammingLanguage;

    public:
    clsDeveloper(int id ,string firstName, string lastName, 
        string email, int phone, string title, 
        int salary, string department, string mainProgrammingLanguage):
        clsEmployee(id, firstName, lastName, email,phone
        ,title, salary, department)
        {
            _mainProgrammingLanguage =mainProgrammingLanguage;
        }

    void set_mainProgrammingLanguage(string mainProgrammingLanguage){
        _mainProgrammingLanguage = mainProgrammingLanguage;
    }

    string get_mainProgrammingLanguage(){
        return _mainProgrammingLanguage;
    }
    friend void print(clsDeveloper d1);
};

void print(clsDeveloper d1){
        cout << "_________________________________\n";
        cout << "Id : " << d1.get_Id() << "\n";
        cout << "First Name : " << d1.get_firstName() <<"\n";
        cout << "Last Name : " << d1.get_lastName() <<"\n";
        cout << "Phone : " << d1.get_phone() <<"\n";
        cout << "Email : " <<  d1.get_email() <<"\n";
        cout << "Title : " <<  d1.get_title() <<"\n";
        cout << "Salary : " <<  d1.get_salary() <<"\n";
        cout << "Department : " <<  d1.get_department() <<"\n";
        cout << "Programming Language : " <<  d1._mainProgrammingLanguage <<"\n";
        cout << "_________________________________\n\n"; 
}
