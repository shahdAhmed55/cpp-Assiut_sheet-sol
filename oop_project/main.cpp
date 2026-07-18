#include <iostream>
#include "./libraries/employee.h"
#include "./libraries/person.h"
#include "./libraries/sendData.h"
#include "./libraries/developer.h"
using namespace std;
int main(){

    clsPerson p1(10, "shahd" , "ahmed" , "sh@gmail.com" , 1234);
    // p1.print();
    p1.sendEmail("hi" , "how are you");
    p1.sendSMS("how are you");
    
    clsEmployee e1(10, "shahd" , "ahmed" , "sh@gmail.com" , 1234, "eng" , 120 , "cs");
    e1.set_firstName("a");
    print(e1);
    
    // clsPerson *p2 = & e1;
    // p2->set_firstName("s");
    // p2->print();

    // clsDeveloper d1(10, "shahd" , "ahmed" , "sh@gmail.com" , 1234, "eng" , 120 , "cs" , "cpp");
    // print(d1);


    // clsEmployee *e2 = &d1;
    // e2->print();
    // d1.get_mainProgrammingLanguage();
    
}