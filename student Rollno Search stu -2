#include <iostream>
using namespace std;

int main() {
    int rollNumbers[5];
    int searchRoll;
    bool isFound = false;
 
    cout << "Enter the roll numbers of 5 students;" << endl;
    for (int i=0; i<5; i++) {
        cout << "student" << i+1 << ": ";
        cin >> rollNumbers[i];
    }
  
    cout << "\nEnter the roll number you want to search for: ";
    cin >> searchRoll;
    
    for (int i=0; i<5; i++) {
        if (rollNumbers[i] == searchRoll) {
            isFound = true;
            break;
        }
    }

    if (isFound) {
        cout << "Student found" << endl;
    } else {
        cout << "student not found" << endl;
    }  
  
     return 0;
} 
