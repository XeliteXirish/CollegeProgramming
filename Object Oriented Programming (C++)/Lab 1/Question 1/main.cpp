#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your name: ";
    string first_name, last_name;
    cin >> first_name >> last_name;

    cout << "Enter the recipient: ";
    string recipient;
    cin >> recipient;

    cout << "Please enter your age: ";
    int age;
    cin >> age;

    cout << "Please enter your birthday in the form (dd mm): ";
    int days, months;
    cin >> days >> months;

    cout << "Please enter the name and gender of a friend: ";
    string friend_name, friend_gender;
    cin >> friend_name >> friend_gender;

    cout << "\nYours sincerely, " << first_name << " " << last_name;
    cout << "\nDear " << recipient << ",\n";
    cout << "\tI would like to ask you to do catering at me " << age << " birthday party";
    cout << "My birthday is on the " << days << "/" << months << "/2018,\nhope you're not booked up that day! I'll miss you!";

    if (friend_gender == "male") friend_gender = "his";
    else friend_gender = "her";

    cout << "\nI will be celebrating my birthday with my good friend " << friend_name
    << ".  Can you supply a cake with " << friend_gender << " name on it?";

    if (age < 18 && age > 12) cout << "\nSoft drinks only please!\n";
    else if (age < 12) cout << "\nCan we have a clown too?\n";


    return 0;
}
