
#include<iostream>
using namespace std ;

///logindeatil
void logindeatil(int  &option  ,string name , string email,  string password , bool found);


///login  function
void login(string name ,string email, string password,bool &found  , int &option);


//reguter form 
 void registerform(string &name ,string  &email ,string  &password);
 
// menu function 
void menu (int &option);

///couse detail 

void  coursedeatil( int  courseid[] , string coursecode[] ,string cousename[],string courseteacher[], string  coursestatus[],string courseDuration[]);


int main(){
    	 // for user acces  role 
   string name = "Muhammad Junaid Hassan";
   string email = "Chjunaidhassan95@gamil.com";
   string password = "123456";
   bool found ;
 // for sellcect option
 
   int option;
   ///login detail
   logindeatil(option , name , email,password,found);
   
   
   
//   alll for course catalog

   int  courseid[5] ={1 , 2 ,3 ,4 ,5};
   string coursecode[5]= {"Ch101" ,"Ch102","Ch103","Ch104", "Ch05"};
   string cousename[5] = {"Mobile App Development" , "Web Development" ,"Machine Learning","Cyber Sercuity","Data Science"};
   string courseteacher[5]= {"Shohaib Hamza" ,"Muhammad Junaid hassan" ,"Zain Hassan"  ,"Ali Nawaz","Amna Rafi"};
   string  coursestatus[5]= {"Active", "Inactive","Active", "Inactive","Active"};
   string courseDuration[5]= {"1 Hours", "1 Hours 30 min", "45 min", "2 hours ","1 hour 45 min"};
   
 
  
     if(option == 1){
     	cout << "\n[Profile] Name: Muhammad Junaid Hassan | Role: Honhaar Scholar & CS Undergraduate\n";
        } 
        else if(option == 2) {
        coursedeatil(   courseid ,coursecode , cousename, courseteacher,  coursestatus,courseDuration);
	 }
      
    return 0 ;
    
}


///login deatil


void logindeatil(int  &option  ,string name , string email,  string password , bool found){

   string choice ;
   
    ///login  first function 
    
    do{
        login(name , email , password,found ,  option);
    
    
    if(found){
        cout<<"-----------------------------Login Succesfully ----------"<<endl;
       
        menu( option);
        break;
    }else{
    
        cout<<"-------------------------------Plz Go to Resgirter First----------------------------------"<<endl;
        cout<<"If want to Use Resgister Form Give your choice (Yes || Not)"<<endl;
        
        cin>>choice;
        
        if(choice == "Yes" || choice == "Y" || choice == "y"){
        	 
        	 registerform(name , email , password);
        	cout<<"Resgister Done Login Again -- "<<endl;
		}else if(choice == "No"){
		    cout<<"Resgiterion skpped"<<endl;
		}
    }
    
    cout<<"You want to Use the Login Fomr again Or nOt (Yes || NO)"<<endl;
    cout<<"Enter Your Choice ---";
      cin>>choice;
    }while(choice == "Yes"  || choice == "Y" || choice == "y");
}





/////////login  


void login(string name ,string email,string  password,bool &found, int  &option){
    
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
    
    cin.ignore();    
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
          found= false ;
    cout << "[Error] Invalid Credentials. Access Denied!"<<endl;
    }
     cout<<"You want to Login again ---------(Yes 0r No)"<<endl;
     
      
      cout<<"Enter Your Choice ---";
      cin>>choice;
      
      cin.ignore();
    }while(choice == "Yes"  || choice == "Y" || choice == "y");
    
}

///register form 

 void registerform(string &name ,string  &email ,string  &password){
 	cout<<"Welcome to Resgierton Form"<<endl;
 	cin.ignore();
 	cout<<"Set Your full Name ----------- :";
 	getline(cin , name);
 	cout<<"Set Your Password------------- :";
 	getline(cin , password);
 	cout<<"Set your email for login ----------------- :";
 	getline(cin , email);
 	
 	
 }
 
 
 //menu 
 
void menu(int  &option){
 
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
     cout<<"Enter Your option ----";
     cin>>option;
     cout<<"Your Option  = "<<option<<endl;
    
}




///cousre catlog
void coursedeatil(int courseid[], string coursecode[], string cousename[], string courseteacher[], string coursestatus[], string courseDuration[]) {
    cout << "\n========================================================================================" << endl;
    cout << "                                BIG BRAINS - COURSE CATALOG                             " << endl;
    cout << "========================================================================================" << endl;
    cout << "No.  | Code   | Course Name                  | Instructor    | Duration       | Status      " << endl;
    cout << "-----|--------|------------------------------|---------------|----------------|-------------" << endl;
    
    // Printing all 5 courses manually line by line without any loop
    cout << " " << courseid[0] << "   | " << coursecode[0] << "  | " << cousename[0]     << "  | " << courseteacher[0]           << "    | " << courseDuration[0]    << "  | " << coursestatus[0] << endl;
    cout << " " << courseid[1] << "   | " << coursecode[1] << "  | " << cousename[1]     << "     | " << courseteacher[1]           << "  | " << courseDuration[1] << " | " << coursestatus[1] << endl;
    cout << " " << courseid[2] << "   | " << coursecode[2] << "  | " << cousename[2]     << "    | " << courseteacher[2]           << "         | " << courseDuration[2]    << "     | " << coursestatus[2] << endl;
    cout << " " << courseid[3] << "   | " << coursecode[3] << "  | " << cousename[3]     << "       | " << courseteacher[3]           << "         | " << courseDuration[3]    << "   | " << coursestatus[3] << endl;
    cout << " " << courseid[4] << "   | " << coursecode[4] << "  | " << cousename[4]     << "       | " << courseteacher[4]           << "           | " << courseDuration[4] << " | " << coursestatus[4] << endl;
    
    cout << "========================================================================================" << endl;
}
