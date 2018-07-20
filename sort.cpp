#include <iostream>
#include <cstring>
#include <iomanip>
#include <cctype>
using namespace std;

/******************************************************************///structure for students
struct Student {

	int rollno; 

		long pno;   
		
		string name; 

				string address;           };

/***********************************************************************///function that gets biodata  

void getbio(Student *&std){


for ( int i = 0 ; i <2 ; i++ ) {

		cout << "Student No " << i + 1 << endl ;

cout << "Name:" ;

				cin.ignore ( ) ;

getline ( cin , std[ i].name ) ;

				cout << "Roll No:" ;

cin >> std[i]. rollno ;

				cout << "Address:" ;
cin.ignore ( ) ;

				getline ( cin , std[i]. address ) ;



cout << "Phone No:" ;
				cin >> std[i]. pno ;

cout << "***********************" << endl ;    }};

/******************************************************************************///function that sorts data
void sort(Student *&std,Student *&temp){

int x;

	cout<<"Enter choice"<<endl;

			cout<<"1.sort by Roll No\n2.sort by name\n3.end programme\nEnter here(1 , 2 or 3):";

cin>>x;


switch(x){

	case 1:


		for ( int i = 0; i <2; i ++){

						for ( int j=0 ; j<2-i-1; j++){

		if(std[j].rollno>std[j+1].rollno){



	temp[1]=std[j];


		std[j]=std[j+1];

			std[j+1]=temp[1];                          }}}


	
		cout<<"\tSorted by Roll No's "<<endl;
							
			

		for ( int i = 0 ; i < 2 ; i++ ) {


			cout << "\tStudent No " << i + 1 << endl ; 

	cout << "********Roll No:" << std [ i ].rollno << endl;

			cout << "\tName: " << std [ i ] . name << endl ;


	cout << "\tAddress:" << std [ i ] . address << endl;

			cout << "\tPhone No:" << std [ i ]. pno << endl;

	cout << "********************************************"<<endl;    }

					                                          break;





	case 2:		



	for(int i=0; i<2; i++){

			for(int j=0; j<2-i-1; j++){

	           	if(static_cast<int>(toupper(std[j].name[0]))>static_cast<int>(toupper(std[j+1].name[0]))){

		

	temp[1]=std[j];

			std[j]=std[j+1];

					std[j+1]=temp[1];                       }}}



	

		

		cout<<"\tSorted by names"<<endl;

		

		for ( int i = 0 ; i < 2 ; i++ ) {




	cout << "\tStudent No " << i + 1 << endl ; 



			cout << "********Name: " << std [ i ] . name << endl ;



	cout << "\tRoll No:" << std [ i ].rollno << endl;




			cout << "\tAddress:" << std [ i ] . address << endl;



	cout << "\tPhone No:" << std [ i ]. pno << endl;



			cout << "********************************************"<<endl;    }





	                                 						break;  
	
                 
	default : break;       };
		

	if(x==1 || x==2){                   sort(std,temp);                            }};

/**********************************************************************************///our main   



int main(){

 	Student  * std  = new Student [ 10 ] ;



	Student *temp=new Student [1];

	

getbio( std ) ;



	sort( std,temp ) ; 





delete [] std;

delete [] temp;	

return 0;}
