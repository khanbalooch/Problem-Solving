//Name    Muhammad Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main(){
int i=101,j,k,x;
do{
cout<<"please guess the number!\nnow input the  number correctly:";
cin>>x;
if(x>i){cout<<"too large!\nenter again\n";}
if(x<i){cout<<"too small!\nenter again\n";}
}while(x!=i);
if(x==i){cout<<"wow!the number is exactly "<<i<<endl;}
return 0;
}
