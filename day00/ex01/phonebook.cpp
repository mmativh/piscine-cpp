#include <iostream>

class Contact {
    char first_name[25];
    char last_name[25];
    char nickname[25];
    char login[25];
    char postal_address[25];
    char email_address[25];
    char phone_number[25];
    char birth_date[25];
    char favorite_meal[25];
    char underwear_color[25];
    char darkest_secret[25];


    public:
    void addData() {
        std::cout<<"\n\tEnter First Name: ";
        std::cin>>first_name;

        std::cout<<"\n\tEnter Last Name: ";
        std::cin>>last_name;

        std::cout<<"\n\tEnter nickname : ";
        std::cin>>nickname;

        std::cout<<"\n\tEnter login : ";
        std::cin>>login;

        std::cout<<"\n\tEnter postal address: ";
        std::cin>>postal_address;

        std::cout<<"\n\tEnter email address: ";
        std::cin>>email_address;

        std::cout<<"\n\tEnter birth date: ";
        std::cin>>birth_date;

        std::cout<<"\n\tEnter favorite meal: ";
        std::cin>>favorite_meal;

        std::cout<<"\n\tEnter underwear color: ";
        std::cin>>underwear_color;

         std::cout<<"\n\tEnter darkest secret: ";
        std::cin>>darkest_secret;
    }

    void PutData(int index) {
        std::cout<<"\n"<<index<<"|"<<first_name<<"|"<<last_name<<"|"<<nickname;
    }

};
void Input ()
{
    char command[25];
    std::cout << "Enter ";
    std::cin >> command;
   

}
int main(void) {
       
       while (1) {
       }
    return 0;
}