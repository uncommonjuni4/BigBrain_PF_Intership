
//Program Requirement 
/*

Learn how variables are used to store information. 
Practice different data types supported by your language, such as integers, floating-point numbers, characters, strings, and Boolean values.
Create a small program that asks the user for their name, age, programming language, and learning goal, then displays the collected information.

*/

#include<iostream>
using namespace std ;   //for use input and output libary functions 
int main(){

 //Variable  decelartion 
 string  name ; 
 int id ;
 float weight ; 
 char favSymbol ;
 bool citizien  ; 
 
 //for  asking user personal Information 
 cout<<"Plz Enetr your name---(exp---A-z)"<<endl;
 cin>>name;

 cout<<"Plz Enter your Cinic--(exp..36502)"<<endl;
 cin>>id;
 cout<<"Plz Enter your Weight(exp..37.7)--"<<endl;
 cin>>weight;
 cout<<"Plz Enter your Favourite Symbol--(exp..%,#)--"<<endl;
 cin>>favSymbol;
 cout<<"Plz Enter you have Cityizen of Pakistan--(exp--true||false)--"<<endl;
 cin>>citizien;
 
 //final output after storage 
 cout<<"-------------------User Detail--------------------"<<endl;
  cout<<"User Name = "<<name<<endl;
  cout<<"User Cinic  = "<<id<<endl;
  cout<<"User Weight = "<<weight<<"Kg"<<endl;
  cout<<"User Favourite Symbol = "<<favSymbol<<endl;
  cout<<"User Citzien of Pakistan = "<<citizien<<endl;
    return 0 ;
}
