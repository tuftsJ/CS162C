#include <iostream>

using namespace std;

int main() {
    auto lang = "C++";
    string name;
    int x = 1; //declaring some integers to use for some arithmetic
    int y = 99;

    cout << "Hello World! Let's learn some " << lang << "!\n"; //opening hello statement
    cout << "What is your name?" << endl; //prompt question requiring input from user to continue
    cin >> name; // asks for user input
    cout << name << endl; //displays user input
    cout << " " << endl;

    cout << "x = " << x << endl; //displays variables and then utilizes for arithmetic
    cout << "y = " << y << endl;
    cout << "Some math: " << "x + y * y + x = " << x + y * y + x << endl; //arithmetic
    cout << "" << endl;

    cout << "Today's date is: " << __DATE__ << " " << __TIME__ << endl; //displaying the date
    cout << "" << endl;

    cout << "Have a nice day!" << endl; // goodbye message

    return 0;
}