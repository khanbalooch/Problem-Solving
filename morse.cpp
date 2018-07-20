#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
/************************************************************/
void choice(int *pxx){
			char arr[20];
					string strng;
		char alpa[45]=
{'A','B','C','D','E','F','G','H','I','J','K','L','M','N',
'O','P','Q','R','S','T','U','V','W','X','Y','Z',
'0','1','2','3','4','5','6','7','8','9','.',',','?','\'','!','/','(',')','&'};

int len;

	switch(*pxx){
case 1:
		cout<<"Enter code(string):";
				cin.ignore();
					cin.getline(arr,20);
							len=strlen(arr);

								cout<<"The mourse code is:";
for(int i=0; i<len; i++){
			if(isalpha(arr[i])){
					if(islower(arr[i])){
							arr[i]=toupper(arr[i]);}}}
for(int i=0; i<len; i++){

if(arr[i]=='A'){
	cout<<".-";}	
if(arr[i]=='B'){
	cout<<"-...";}	
if(arr[i]=='C'){
	cout<<"-.-.";}
if(arr[i]=='D'){
	cout<<"-..";}	
if(arr[i]=='E'){
	cout<<".";}
if(arr[i]=='F'){
	cout<<"..-.";}
if(arr[i]=='G'){
	cout<<"--.";}
if(arr[i]=='H'){
	cout<<"....";}
if(arr[i]=='I'){
	cout<<"..";}
if(arr[i]=='J'){
	cout<<".---";}
if(arr[i]=='K'){
	cout<<"-.-";}
if(arr[i]=='L'){
	cout<<".-..";}
if(arr[i]=='M'){
	cout<<"--";}
if(arr[i]=='N'){
	cout<<"-.";}
if(arr[i]=='O'){
	cout<<"---";}
if(arr[i]=='P'){
	cout<<".--.";}
if(arr[i]=='Q'){
	cout<<"--.-";}
if(arr[i]=='R'){
	cout<<".-.";}
if(arr[i]=='S'){
	cout<<"...";}
if(arr[i]=='T'){
	cout<<"-";}
if(arr[i]=='U'){
	cout<<"..-";}
if(arr[i]=='V'){
	cout<<"...-";}
if(arr[i]=='W'){
	cout<<".--";}
if(arr[i]=='X'){
	cout<<"-..-";}
if(arr[i]=='Y'){
	cout<<"-.--";}
if(arr[i]=='Z'){
	cout<<"--..";}
if(arr[i]=='0'){
	cout<<"-----";}
if(arr[i]=='1'){
	cout<<".----";}
if(arr[i]=='2'){
	cout<<"..---";}
if(arr[i]=='3'){
	cout<<"...--";}
if(arr[i]=='4'){
	cout<<"....-";}
if(arr[i]=='5'){
	cout<<".....";}
if(arr[i]=='6'){
	cout<<"-....";}
if(arr[i]=='7'){
	cout<<"--...";}
if(arr[i]=='8'){
	cout<<"---..";}
if(arr[i]=='9'){
	cout<<"----.";}
if(arr[i]=='.'){
	cout<<".-.-.-";}
if(arr[i]==','){
	cout<<"--..--";}
if(arr[i]=='?'){
	cout<<"..--..";}
if(arr[i]=='\''){
	cout<<".----.";}
if(arr[i]=='!'){
	cout<<"-.-.";}
if(arr[i]=='/'){
	cout<<"-..-.";}
if(arr[i]=='('){
	cout<<"-.--.";}
if(arr[i]==')'){
	cout<<"-.--.-";}
if(arr[i]=='&'){
	cout<<".-...";}cout<<" ";}
						break;
case 2:
		cout<<"I Dont know"<<endl;
						break;
default : 
		cout<<"Error! input correct number "<<endl;
					cout<<"Enter here again:";
			cin>>*pxx
			choice(pxx);
						break;	};};
int main(){


	int x;
		int *px = &x ;
cout<<"***select your input code format***"<<endl;
				cout<<"\t1.string (like Aa&12).\n\t2.mourse code (like .._._)."<<endl;
cout<<"Enter here(1 or 2):";
cin>>x;

choice(px);
return 0;} 
