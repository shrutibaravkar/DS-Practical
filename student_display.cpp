#include <iostream>
using namespace std;

int main() {
       int rollNumbers[5];

    cout << "Enter the roll numbers of 5 students:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> rollNumbers[i];
    }

    cout << "\nThe roll numbers you entered are:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << (i + 1) << ": " << rollNumbers[i] << endl;
    }

    return 0;
}
