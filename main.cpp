#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName, lastName;
    int age;

    cout << "Hi! What's your first name? ";
    cin >> firstName;

    cout << "And your last name? ";
    cin >> lastName;

    cout << "How old are you? ";
    cin >> age;

    cout << "\nNice to meet you, " << firstName << " " << lastName << "!\n";
    cout << "Here's a quick look at your journey:\n\n";

    cout << "In 1 year, you'll be " << (age + 1)
         << " and hopefully further along in CIS 5.\n";
    cout << "In 3 years, you'll be " << (age + 3)
         << " and maybe finishing up your degree.\n";
    cout << "In 5 years, you'll be " << (age + 5)
         << " and could be starting your career.\n";
    cout << "In 7 years, you'll be " << (age + 7)
         << " and who knows what you'll have built by then!\n";

    cout << "\nThanks for running this program, " << firstName << ". Good luck!\n";

    return 0;
}
