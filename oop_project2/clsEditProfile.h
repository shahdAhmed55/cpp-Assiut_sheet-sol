#pragma once
#include <iostream>
#include "clsRegister.h"
#include "clsProfile.h"
#include "clsProfileCard.h"

using namespace std;
class clsEditProfile
{
public:
	static void editProfile(clsRegister& r1) {
		cout << "1 => edit password\n";
		cout << "2 => edit email\n";

		int n;
		cin >> n;
		if (n == 1) {
			cout << "enter the new password\n";
			string newPass; cin >> newPass;
			r1.set_password(newPass);
		}
		if (n == 2) {
			cout << "enter the new email\n";
			string newEmail; cin >> newEmail;
			r1.set_email(newEmail);
		}
		clsProfileCard::getProfileInfo(r1);
	}
};

