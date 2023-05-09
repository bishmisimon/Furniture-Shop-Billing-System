#include<iostream>
#include<fstream>//file handling
#include<iomanip>//input output manipulation
#include<stdlib.h>//exit 
using namespace std;


//main entry programm
int main(){


int c=1;

cout<<"같같같같같같같같같같캟URNITURE VILLAGE ADMINISTRATION같같같같같같같같같같같같같같같같같같"<<endl;

void entry();
entry();


return 0; 
  }
  
  
void sign()
{

string username;
string Password;

cout<<"-------Hello!!Welcome to FURNITURE VILLEGE --------  "<<endl;

ofstream SignUp;
SignUp.open("Password.txt");
cout<<"Please Create your username:";
cin>>username;
SignUp<<username<<endl;
cout<<"Please Create your  password:";
cout<<"Includes at least a number,a Symbol, a Capital Letter,  and a Lower-Case Letter"<<endl;
cin>>Password;
SignUp<<Password<<endl;
cout<<"<<<<<<<username and password successfully created!!You are registered>>>>>>>>>>>"<<endl;


	void login();
	login();



SignUp.close();
}

//function for entry to programm
void entry()
{
char ans ;
char Y,y;
char n,N;
cout<<endl<<"Do you want generate a report(Please enter 'Y' for yes --'N' for No):";
cin>>ans;
cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>If you are not Registered User!!Sign UP here>>>>>>>>>>>>>>>>>>>>>"<<endl;

 if (ans=='Y'||ans=='y') {
 
  void sign();
  sign();//Entry to the system
 
} else if (ans=='N'||ans=='n') {
  void end();
  end();// Programm will be exited
} else {
  cout<<"Error occured";	
}
}





//function login,here inside calls list function,addlist function when login details true
void login()
{
     void help();
     void end();
	string username;
	string pass;
	int c=1;
string user;
	string password;
	
		
	ifstream infile;
	infile.open("password.txt");
	
	infile>>username>>password;
    cout<<">>>>>>>>>>>>>>>>>>>Login to the system<<<<<<<<<<<<"<<endl;
    
    
	

	
   
   	cout<<"Please enter the username:";
    cin>>user;
	cout<<"Please enter the password:";
	cin>>pass;
   
   
    
		{
		if (user==user&& password==pass)
	 {
	 		cout<<"You can login"<<endl;
	 			
	 			
			
	 		void adddetails();
	 		adddetails();
	 	
	 }
			else if(user!=user||password!=pass)
		
		 {
		 		
		 	cout<<"your password or username is incorrect"<<endl;
		 	
		 	help();
		 	
		    end();
		  } 
	    
		else 
		
			
		
	{
	
		end();

	}
			
	    }

		
		
			     
				 
				
		
		 
		   
			
			
	 infile.close();	  	
		
	}
	


 
  
 
 //show stored list in showw.txt file
 void list()

 {
 	
 	 string list;
	ifstream show;
	show.open("showw.txt");
	while (getline (show, list)) {
  // Output the text from the file
  	
		  cout<<endl <<list;
  	}
  
 }
 
 
 
 //add details selection,calling insert and itemcheck functions here
 
 void adddetails(){
void insert();
void itemcheck();

 char ans;
 	char Y,y;
 	char N,n;
 	cout<<endl<<"같같같같같같같같같같같같같같같같같같같같같같같같�"<<endl;
 	cout<<endl<<"Do you want to add item details(If Yes-enter 'Y or y',If No-Enter 'N or n'):";
    cin>>ans;
   
    
  if (ans=='Y'||ans=='y') {
  
 insert();
 list();
 itemcheck();
  //Entry to the system
} else if (ans=='N'||ans=='n') {
  itemcheck();
 
  
  // Programm will be exited
} else {
  void end();
  end();
}
 

	 }
 
 
 
 
 //this function calls ,to executes inserting data to system,stores in samefile(showw.txt)
 void insert()
 
 {
 	
 

	string fname;
    int  fcode;
	double fprice;
   int Quantity;

	cout<<endl<<"Please enter the item code(last item no is [10]):";
	cin>>fcode;
	cout<<"Please enter item name(Ex:Coffe Table,Instead of space for separate two words use '-'):";
	cin>>fname;
	cout<<"Please enter the price(Ex:5500.55):";
	cin>>fprice;
	cout<<"Please enter the Quantity:";
	cin>>Quantity;
    
    ofstream datastore;
    datastore.open("showw.txt",ios::app);
    datastore<<"["<<fcode<<"]"<<"\t\t"<<left<<setw(12)<<fname<<"\t\t\t"<<setw(12)<<fprice<<"\t\t\t"<<setw(10)<<Quantity<<endl;
    
    cout<<"****************Item is stored*****************"<<endl;
 

  datastore.close();
	}   
	


//here calling found  function  inside to searched a selected item ,entering item code	
itemcheck()

{
   
	  char ans;
 	char Y,y;
 	char N,n;
 	
  cout<<endl<<">>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;	
  cout<<endl<<"Do you need to search an Item(If Yes-enter 'Y or y',If No-Enter 'N or n'):";
  cin>>ans;	 
  if (ans=='Y'||ans=='y') {
   	void found();
  	found();
  // calling function found to search item
} else if (ans=='N'||ans=='n'||'N') {
	void end();
	end();
  // exit the programm
} else {
	cout<<"Error Occoured";
  //happens when enter a another charachter.
}
  }




//here calls this function searched item,and this will be called again itemcheck()function
 void found()
 
 {
 		
    int no=9;
  	double price[10000]={49599.00,54500.00,54500.00,24500.00,88500.00,23000.00,17500.00,10300.00,177500.00};
  	string item[1000]={"Bed NETRO(Mahogany)75X60","Bed KENNY(Mahogany)80x60","Audio Video Cabinet","Computer Table	","2D Cupboard","Cashier Table","Coffee Table(Pebales)","Conference Table","DinningSet(06 Seater|Magogany) "};
	
	int itemno[10000]={1,2,3,4,5,6,7,8,9};
	int Quantity[1000]={4,5,10,20,23,10,15,16,10};
 
	
 cout<<"Please enter the item no:";
 cin>>no;

	switch(no){

	case 1:
    cout <<"Item Name:"<<item[0]<<endl<<"Price is:"<<price[0]<<endl<<"Current Quantity is:"<<Quantity[0];
    break;
  	case 2:
     cout <<"Item Name:"<<item[1]<<endl<<"Price is:"<<price[1]<<endl<<"Current Quantity is:"<<Quantity[1];
    break;
 	 case 3:
     cout <<"Item Name:"<<item[2]<<endl<<"Price is:"<<price[2]<<endl<<"Current Quantity is:"<<Quantity[2];
    break;
  	case 4:
     cout <<"Item Name:"<<item[3]<<endl<<"Price is:"<<price[3]<<endl<<"Current Quantity is:"<<Quantity[3];
    break;
  	case 5:
      cout <<"Item Name:"<<item[4]<<endl<<"Price is:"<<price[4]<<endl<<"Current Quantity is:"<<Quantity[4];
    	break;
 	 case 6:
     cout <<"Item Name:"<<item[5]<<endl<<"Price is:"<<price[5]<<endl<<"Current Quantity is:"<<Quantity[5];
    	break;
  	case 7:
     cout <<"Item Name:"<<item[6]<<endl<<"Price is:"<<price[6]<<endl<<"Current Quantity is:"<<Quantity[6];
     break;
   case 8:
   	  cout <<"Item Name:"<<item[7]<<endl<<"Price is:"<<price[7]<<endl<<"Current Quantity is:"<<Quantity[7];
    break;
   case 9:
   	  cout <<"Item Name:"<<item[8]<<endl<<"Price is:"<<price[8]<<endl<<"Current Quantity is:"<<Quantity[8];
    break;
		
}

 }


//this function is used to exit the function and it terminates the program (by entering -1 also)
void end()

{    
	 int exit_code = -1;
  	printf("Termination using _Exit");
    _Exit(exit_code);
    
    end();
	
}

//end of the programm


void help()

{   
      
          string helplist;
	  ifstream help;
	   help.open("Help.txt");
		while (getline (help, helplist)) {
  // Output the text from the file
  	
		  cout<<endl <<helplist<<endl;;
  	}
  	 
      	
	
	  
}

