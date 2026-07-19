#pragma once
#include <iostream>
#include "clsPerson.h"
#include "clsRegister.h"
#include "clsHeader.h"
#include "clsEditProfile.h"
#include "clsProfileCard.h"
using namespace std;
class clsProfile
{
public:
    static void displayProfile(clsRegister r1) {
        string s1 = r1.get_firstName();
        clsHeader::displayHeader(s1);
        clsProfileCard::getProfileInfo(r1);
        bool f = true;
        while (f == true) {
        cout << "Do you want to edit profile : 1-yes | 2-no \n";
        int choice; cin >> choice;
            switch (choice)
            {
            case 1:
                clsEditProfile::editProfile(r1);
                break;
            default:
                f = false;
                break;
            }
        }
    }
};