#include "phone.class.hpp"

int isEmpty(Contact phoneBook[]) {
	int i = 0;
	int count = 0;
	while (i < 8) {
		if (phoneBook[i].first_name.empty())
			count++;
		i++;
	}
	if(count == 8)
		return 1;
	else 
		return 0;
}

void search(int i, Contact phoneBook[]) {
	while (i < 8) {
		if (!phoneBook[i].first_name.empty()) {
			phoneBook[i].listData(i);
		}
		i++;
	}
	if (!isEmpty(phoneBook))
		cout << "Enter index of contact" << endl;
	else
		cout << "No Contacts" << endl;
}
void add_data(int i, Contact phoneBook[]) {
	while(i < 8) {
		if (phoneBook[i].first_name.empty()) {
			phoneBook[i].addData();
			break;
		}
		i++;
	}
}
void find_index(string command,Contact phoneBook[]) {
	if (isEmpty(phoneBook)) 
		cout << "Phonebook Empty" << endl;
	else {
		int i = std::atoi(command.c_str());
		phoneBook[i].showDetails();
	}
}

int main(void) {
	string command;
	int index = 0;
	cout << "Enter Command" << endl;
	Contact phoneBook[8];
	while (1) {
		getline(cin, command);
		if (command.compare("EXIT") == 0)
			break;
		else if (command.compare("SEARCH") == 0) {
			index = 1;
			search(0, phoneBook);
		}
		else if (command.compare("ADD") == 0) {
			index = 0;
			add_data(0, phoneBook);
		}
		else if (command.length() == 1 && command[0] >= '0' && command[0] <= '7' && index == 1) {
			find_index(command, phoneBook);
		} else {
			index = 0;
			cout << "Invalid command" << endl;
		}
	}
	return 0;
}
