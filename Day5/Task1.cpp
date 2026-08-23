/*
Learn how functions/methods allow developers to divide a program into smaller reusable components.
 Create separate functions for displaying the Big Brains header, 
 calculating a student's average marks, and displaying the student's result. 
 Call these functions from your main program.
*/


#include <iostream>
#include <string>

using namespace std;

// Function 1: Display Header
void displayHeader() {
    cout << "=================================" << endl;
    cout << "           BIG BRAINS            " << endl;
    cout << "=================================" << endl;
}

// Function 2: Calculate Average
float calculateAverage(float mark1, float mark2, float mark3) {
	cout<<"Marks of Subject 1  = "<<mark1<<endl;
	cout<<"Marks of Subject 2  = "<<mark2<<endl;
	cout<<"Marks of Subject 3  = "<<mark3<<endl;
    return (mark1 + mark2 + mark3) / 3;
}

// Function 3: Display Result
void displayResult(string name, float avg) {
    cout<<"--- Student Result ---" << endl;
    cout<<"Name: " <<name<<endl;
    cout<<"Average: " <<avg<<endl;
    
    if (avg >= 50) {
        cout<<"Status: Passed" << endl;
    } else {
        cout <<"Status: Failed" << endl;
    }
}

int main() {
    string name;
    float m1, m2, m3;

    // Call header function
    displayHeader();

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks for 3 subjects: ";
    cin>>m1>>m2>>m3;

    // Call average function
    float avg = calculateAverage(m1, m2, m3);

    // Call result function
    displayResult(name, avg);

    return 0;
}