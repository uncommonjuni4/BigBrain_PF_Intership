#include <iostream>
#include <string>

using namespace std;

// Function to display the Big Brains Header
void displayHeader() {
    cout << "=================================" << endl;
    cout << "           BIG BRAINS            " << endl;
    cout << "      Course Selection System    " << endl;
    cout << "=================================" << endl;
}

int main() {
    displayHeader();

    // Array containing 5 course names
    string courses[5] = {
    	
        "PF",
        "OOP",
        "DSA",
        "Web",
        "DATABASE"
		
		};
		
	
    // Displaying all courses using a loop
    cout << "\nAvailable Courses:\n";
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << courses[i] << endl;
    }


	
		
		///user  check \\
		
		cout<<"Plz enter To search  which subject you wan to Search ---"<<endl;
		string  userSearch ;
		bool exist ;
		cin>>userSearch;
		string searchcourse;
     
    for(int i = 0 ; i <5 ; i++){
    	 if(userSearch == courses[i]){
    	 	exist = true;
    	 	searchcourse = courses[i];
    	 	break;
		 }else{
		 	exist = false;
		 }
	}
    // User selection logic
    int choice;
    cout << "\nEnter course number (1-5) to select: ";
    cin >> choice;

    // Displaying selected course with basic validation
    if (choice >= 1 && choice <= 5) {
        cout << "\nYou selected: " << courses[choice - 1] << endl;
    } else {
        cout << "\nInvalid choice! Please enter a number between 1 and 5." << endl;
    }
    
    
    if(exist){
    	cout<<"Your search course  exist --"<<endl;
    	cout<<"Your search course   =  "<<searchcourse<<endl;
	}else{
			cout<<"Your search course does not   exist --"<<endl;
	}

    return 0;
}
