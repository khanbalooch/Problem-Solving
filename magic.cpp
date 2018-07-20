#include <iostream>
using namespace std;

int main(){
		int z , x , y ;
cout<<"Magic sq size(odd): ";
cin>>z;
/************         dynamic 2-D array    ******************/
int **arr;           
arr=new int*[z];        
for(int i=0; i<z; i++){
arr[i]=new int[z];}    
/*=============================================================*/

/****       initilizing with zero to check in future      ****/
for(int x=0; x<z; x++){
for(int y=0; y<z; y++){
arr[x][y]=0;            }}
/*=============================================================*/


int i=0, j=z/2,n=1,k;
/***********              main task     *******************/
while(n<=z*z){

	if(i==-1 && j==z){
		i+=2;j-=1;}else{
	if(i==-1){
		i=z-1;}
	if(j==z){
		j=0;}
	if(arr[i][j]!=0){
		i+=2;j-=1;}}
arr[i][j]=n;//populating after many twists

i-=1; j+=1; n+=1; }
/*=============================================================*/


/*********        displaying the magic to spectators  **********/
for(int x=0; x<z; x++){
for(int y=0; y<z; y++){
cout<<arr[x][y]<<"  ";}cout<<endl;}
/***** deleting and ending magic                    *************/
for(int i=0; i<z; i++){
delete arr[i];}
delete arr;

return 0;}
