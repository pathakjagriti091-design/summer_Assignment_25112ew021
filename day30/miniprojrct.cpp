#include <iostream>
#include <string>
using namespace std;

bool isValidUsername(string name) 
{
    // RULES:  only letters and digits,4 to 15 characters, no spaces shold be there.
    if (name.length() < 4 || name.length() > 15) return false;

    for (int i = 0; i < name.length(); i++) {
        char c = name[i];
        bool isLETTER = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
        bool isDIGIT  = (c >= '0' && c <= '9');
        if (!isLETTER && !isDIGIT)
         return false;
    }
    return true;
}

bool isValidPassword(string pass) {
    // RULES: minimum 8 characters only, it must have uppercase, digits, special characters

    if (pass.length() < 8) 
    return false;

    bool hasUPPER = false, hasDIGIT = false, hasSPECIAL = false;
    string specials = "!@#$%^&*";

    for (int i = 0; i < pass.length(); i++) {
        if (pass[i] >= 'A' && pass[i] <= 'Z') hasUPPER = true;
        if (pass[i] >= '0' && pass[i] <= '9') hasDIGIT = true;
        if (specials.find(pass[i]) != string::npos) hasSPECIAL = true;
    }

    return hasUPPER && hasDIGIT && hasSPECIAL;
}

int main() {
    string username, password;

    cout << "**************** REGISTRATION FORM  ****************\n";

    // Username loop

    while (true) {
        cout << "Enter username (4-15 chars, letters/digits only): ";
        cin >> username;
        if (isValidUsername(username)) { cout << "Username ACCEPTED.\n"; break; }
        else cout << " INVALID username. TRY AGAIN . THANK YOU\n";
    }

    // Password loop
    while (true) {
        cout << "Enter password (min 8 chars, 1 uppercase, 1 digit, 1 special !@#$%^&*): ";
        cin >> password;
        if (isValidPassword(password)) { cout << " PASSWORD ACCEPTED.\n"; break; }
        else cout << " WEAK PASSWORD. Try again.\n";
    }

    cout << "\nAccount created for: " << username << "\n";
    return 0;
}