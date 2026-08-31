
#include <iostream>
#include <string>

using namespace std;

// Function to calculate grade using conditions
char calculateGrade(float avg) {
    if (avg >= 90) {
        return 'A';
    } else if (avg >= 80) {
        return 'B';
    } else if (avg >= 70) {
        return 'C';
    } else if (avg >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

// Function to display the student results using a loop
void displayResults(int rolls[], string names[], float totals[], float averages[], char grades[], int size) {
    cout << "\n================ STUDENT RESULTS ================\n";
    cout << "Roll No\tName\tTotal\tAverage\tGrade\n";
    cout << "-------------------------------------------------\n";

    for (int i = 0; i < size; i++) {
        cout << rolls[i] << "\t"
             << names[i] << "\t"
             << totals[i] << "\t"
             << averages[i] << "\t"
             << grades[i] << "\n";
    }
    cout << "=================================================\n";
}

int main() {
    const int MAX = 50;
    int n;

    // Parallel simple arrays
    int rollNumbers[MAX];
    string studentNames[MAX];
    float totalMarks[MAX];
    float averageMarks[MAX];
    char studentGrades[MAX];

    cout << "Enter number of students: ";
    cin >> n;

    // Input loop
    for (int i = 0; i < n; i++) {
        cout << "\n--- Student " << i + 1 << " ---\n";
        cout << "Enter Roll Number: ";
        cin >> rollNumbers[i];

        cout << "Enter First Name: ";
        cin >> studentNames[i];

        float sub1, sub2, sub3;
        cout << "Enter marks for 3 subjects (space separated): ";
        cin >> sub1 >> sub2 >> sub3;

        // Calculations
        totalMarks[i] = sub1 + sub2 + sub3;
        averageMarks[i] = totalMarks[i] / 3.0f;
        studentGrades[i] = calculateGrade(averageMarks[i]);
    }

    // Function call to print output
    displayResults(rollNumbers, studentNames, totalMarks, averageMarks, studentGrades, n);

    return 0;
}
