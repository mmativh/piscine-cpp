#ifndef PHONE_CLASS_HPP
# define PHONE_CLASS_HPP

#include <iostream>
#include <string.h>
#include <iomanip>

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
    void	displayField(string field){
        if (field.size() > 10)
            cout << setw(9) << setfill('.') << field;
        else
            cout << setw(10) << right << setfill(' ') << field;
        cout << '|';
    }
    void listData(int index) {
        cout<<index<<"|"<<first_name<<" | "<<last_name<<" | "<<nickname;
        cout<<endl;
    }

	void showDetails() {
		cout << "First name: " << first_name << endl << "Last name: " << last_name << endl << "Nickname: "<< nickname << endl; 
		cout << "Loging: " << login << endl << "Postal Address: "<< postal_address << endl << "Email address: "<< email_address << endl; 
	}
};

#endif