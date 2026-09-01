
#include<iostream>
using namespace std ;

///login  function
void login(string name ,string email, string password,bool &found);




// menu function 
void menu ();



int main(){


   // for user acces  role 
   string name = "Muhammad Junaid Hassan";
   string email = "Chjunaidhassan95@gamil.com";
   string password = "123456";
   bool found ;
   string choice ;
   
    ///login  first function 
    
    do{
        login(name , email , password,found);
    
    
    if(found){
        cout<<"-----------------------------Login Succesfully ----------"<<endl;
       
        menu();
    }else{
        cout<<"-------------------------------Plz Go to Resgirter First----------------------------------"<<endl;
        found= false ;
    }
    cout<<"You want to Use the Login Fomr again Or nOt (Yes || NO)"<<endl;
    cout<<"Enter Your Choice ---";
      cin>>choice;
    }while(choice == "Yes"  || choice == "Y" || choice == "y");
      
    return 0 ;
    
}



void login(string name ,string email,string  password,bool &found){
    
    string userName;
    string Useremail;
    string Userpassword;
    
    
        string choice ;
    cout << "                          ====================================================="<<endl;
    cout << "                               BIG BRAINS - CONSOLE EDTECH APPLICATION       "<<endl;
    cout << "                          ===================================================="<<endl;
    
    do{
       cout<<"                 -------------------   Plz Login First to access System --------------"<<endl;
    cout << "                          Please enter your credentials to access the system.\n\n";
    
    cout << " Enter Full Name   : ";

    getline(cin ,userName);
       
    cout << " Enter Password: ";

    getline(cin ,Userpassword);
    cout<<"Enter Your Email : ";

    getline(cin,Useremail);
    
    if(userName ==name  &&  Userpassword == password && Useremail == email){
        cout << "[Success] Login Granted! Welcome back, " << name << "!"<<endl;
         found = true;
         break;
    }else{
        
    cout << "[Error] Invalid Credentials. Access Denied!"<<endl;
    }
     cout<<"You want to Login again ---------(Yes 0r No)"<<endl;
     
      
      cout<<"Enter Your Choice ---";
      cin>>choice;
      
      cin.ignore();
    }while(choice == "Yes"  || choice == "Y" || choice == "y");
    
}




void menu(){
 
    cout << "                                        Welcome back, Dear  Student"<<endl;
    cout<<"==============================-Plz Select the Given options to Access the EdTect System ========================"<<endl<<endl;
     cout<<"                                     ****************************************"<<endl;
          cout<<"                                **                                    **"<<endl;
     cout<<"                                     **    [1] View Student Profile        **"<<endl;
     cout<<"                                     **    [2] Browse Course Catalog       **"<<endl;
     cout<<"                                     **    [3] Access Lessons & Quizzes    **"<<endl;
     cout<<"                                     **    [4] Track Progress              **"<<endl;
     cout<<"                                     **    [5] Exit Application            **"<<endl;  
     cout<<"                                     **                                    **"<<endl;
     cout<<"                                     ****************************************"<<endl;
}




