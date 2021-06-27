#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const string password = "hello";

    string input;
    do {
        cout << "Enter your password > " << flush;
        cin >> input;
        if(input != password) {
            cout << "Access denied" << endl;
        }
    } while(password != input);

    cout << "Access accepted" << endl;
    return 0;
}