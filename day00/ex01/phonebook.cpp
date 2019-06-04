#include <iostream>
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
        cout<<"\n"<<index<<" | "<<first_name<<" | "<<last_name<<" | "<<nickname<< std::endl;
    }

	void showDetails() {
		cout << "First name: " << first_name << endl << "Last name: " << last_name << endl << "Nickname: "<< nickname << endl; 
		cout << "Loging: " << login << endl << "Postal Address: "<< postal_address << endl << "Email address: "<< email_address << endl; 
	}

};

int isEmpty(Contact phoneBook[]) {
	int i = 0;
	int count = 0;
	while (i < 8) {
		if (phoneBook[i].first_name.empty()) {
			count++;
		}
		i++;
	}
	if(count == 8)
		return 1;
	else 
		return 0;
}
int main(void) {
    	string command;
		int index = 0;
		cout << "Enter Command" << endl;
		Contact phoneBook[8];
		int i;
		while (1) {
			getline(cin, command);
			if (command.compare("EXIT") == 0)
				break;
			else if (command.compare("SEARCH") == 0) {
				i = 0;
				index = 1;
				while (i < 8) {
					if (!phoneBook[i].first_name.empty()) {
						phoneBook[i].listData(i);
					}
					i++;
				}
				if (!isEmpty(phoneBook))
					cout << "Enter index of contact" << endl;
			}
			else if (command.compare("ADD") == 0) {
				i = 0;
				index = 0;
				while(i < 8) {
					if (phoneBook[i].first_name.empty()) {
						phoneBook[i].addData();
						break;
					}
					i++;
				}
			}
			else if (command.length() == 1 && command[0] >= '0' && command[0] <= '7' && index == 1) {
				if (isEmpty(phoneBook)) 
					cout << "Phonebook Empty" << endl;
				else {
					int i = std::atoi(command.c_str());
					phoneBook[i].showDetails();
				}
			} else {
				index = 0;
				cout << "Invalid command" << endl;
			}
		}
		return 0;
}
