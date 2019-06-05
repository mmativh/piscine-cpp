#ifndef PHONE_CLASS_HPP
#define PHONE_CLASS_HPP

#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class Contact {
	public:
	string first_name;
	string last_name;
	string nickname;
	string login;
	string postal_address;
	string email_address;
	string phone_number;
	string birth_date;
	string favorite_meal;
	string underwear_color;
	string darkest_secret;


    void addData() {
        cout<<"\nEnter First Name: ";
        getline(cin, first_name);

        cout<<"\nEnter Last Name: ";
        getline(cin,last_name);

        cout<<"\nEnter nickname : ";
       	getline(cin,nickname);

        cout<<"\nEnter login : ";
        getline(cin, login);

        cout<<"\nEnter postal address: ";
        getline(cin, postal_address);

        cout<<"\nEnter email address: ";
        getline(cin, email_address);

        cout<<"\nEnter birth date: ";
        getline(cin, birth_date);

        cout<<"\nEnter favorite meal: ";
        getline(cin, favorite_meal);

        cout<<"\nEnter underwear color: ";
        getline(cin, underwear_color);

        cout<<"\nEnter darkest secret: ";
        getline(cin,darkest_secret);
    }

    void listData(int index) {
        cout<< setw(10) << right << index <<'|';
        if (first_name.length() > 9)
            cout<< setw(10) << right << first_name.substr(0,8) << ".|";
        else
            cout<< setw(10) << right << first_name <<"|";
        if (last_name.length() > 9)
            cout<< setw(10) << right << last_name.substr(0,9) << ".|";
        else
            cout<< setw(10) << right << last_name <<'|';
        if (nickname.length() > 9)
            cout<< setw(10) << right << nickname.substr(0,9) << "." << std::endl;
        else 
            cout<< setw(10) << right << nickname << std::endl;
    }

	void showDetails() {
		cout << "First name: " << first_name << endl << "Last name: " << last_name << endl << "Nickname: "<< nickname << endl; 
		cout << "Loging: " << login << endl << "Postal Address: "<< postal_address << endl << "Email address: "<< email_address << endl;
		cout << "Phone number: " << phone_number << endl << "Birth date: "<< birth_date << endl << "favorite meal: "<< favorite_meal<< endl;
		cout << "Underwear color: " << underwear_color << endl << "Darkest secret: "<< darkest_secret << endl;
	}

};
#endif