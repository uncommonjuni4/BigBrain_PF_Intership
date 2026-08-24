#include <iostream>
#include <string>

using namespace std;

// Display Header
void displayHeader() {
    cout << "=================================" << endl;
    cout << "           BIG BRAINS            " << endl;
    cout << "   Student Registration System   " << endl;
    cout << "=================================" << endl;
}

int main() {
    displayHeader();

    string name, email;

    // Get input from user
    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Student Email: ";
    cin >> email;

    // 1. Get length of name
    int length = name.length();

    // 2. Convert name to UPPERCASE manually
    string upperName = name;
    for (int i = 0; i < upperName.length(); i++) {
        upperName[i] = toupper(upperName[i]);
    }

    // 3. Convert name to lowercase manually
    string lowerName = name;
    for (int i = 0; i < lowerName.length(); i++) {
        lowerName[i] = tolower(lowerName[i]);
    }

    // 4. Basic Email Check (Look for '@')
    bool isValidEmail = false;
    for (int i = 0; i < email.length(); i++) {
        if (email[i] == '@') {
            isValidEmail = true;
            break;
        }
    }

    // Display Results
    cout << "-- Registration Details ---" << endl;
    cout << "Name        : " << name << endl;
    cout << "Name Length : " << length << " letters" << endl;
    cout << "Uppercase   : " << upperName << endl;
    cout << "Lowercase   : " << lowerName << endl;
    cout << "Email       : " << email << endl;

    if (isValidEmail) {
        cout << "Email Status: Valid (Contains '@')" << endl;
    } else {
        cout << "Email Status: Invalid (Missing '@')" << endl;
    }

    return 0;
}
