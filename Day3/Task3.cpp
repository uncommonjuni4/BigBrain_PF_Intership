///Program Requiement 
/*
Learn how programs make decisions using if, else, else-if, or equivalent constructs.
Create a student eligibility program that takes a student's marks and determines their grade. The program should handle different ranges of marks and display an appropriate result.
*/

#include<iostream>
using namespace std ;   //for use input and output libary functions 
int main(){

// variables decalrtions 
 int marks;
 string grade ;
 
 //for user Help 
 cout<<"Plz Enter Your Masks--(1-100)"<<endl;
 cin>>marks;
 cout<<"User Marks = "<<marks<<endl;
 
 // for condtions to ckeck garde of user
 if((marks >=95) && (marks <=100)){
     grade = "A+";
     cout<<"User Grade = "<<grade<<endl;
 }
 else if((marks >=85) && (marks <=95)){
     grade = "A";
     cout<<"User Grade = "<<grade<<endl;
 }
 else if((marks >=75) && (marks <=85)){
     grade = "B+";
     cout<<"User Grade = "<<grade<<endl;
 }
 else if((marks >=65) && (marks <=75)){
     grade = "B";
     cout<<"User Grade = "<<grade<<endl;
 }
 else if((marks >=55) && (marks <=65)){
     grade = "C+";
     cout<<"User Grade = "<<grade<<endl;
 }
 else if((marks >=50) && (marks <=55)){
     grade = "C";
     cout<<"User Grade = "<<grade<<endl;
 }
 else if((marks >=0) && (marks <=50)){
     grade = "F";
     cout<<"User Grade = "<<grade<<endl;
 }else{
 	cout<<"Plz Enetr  the marks in given  Range from  0-50";
 }
 
 cout<<"Thanks For Using My App ---"<<endl;
    return 0 ;
}
