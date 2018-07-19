//Name  Muhammad Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main(){
int max=0,min=10000000,x;
do{cout<<"please enter the number:";
cin>>x;
if(x!=-99){if(x>max){max=x;}
if(x<min){min=x;}}
}while(x!=-99);
cout<<"the  largest number is :"<<max<<"\nand smallest number is :"<<min<<endl;
return 0;
}
