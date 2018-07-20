#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
void man(){

char *hangman[19]={
" ___________.._______",
"| .__________))______|",
"| | / /       ||",
"| |/ /        ||",
"| | /         ||.-''.",
"| |/          |/ _ \\",
"| |           || `/,|",
"| |           (   `_.'",
"| |          .-`--'.",
"| |         /Y . . Y  ",
"| |        // |     | \\\\",
"| |       //  | .   | \\\\",
"| |       ')  |     |(`",
"| |           || ' ||",
"| |           ||   ||",
"| |           ||   ||",
"| |           ||   ||",
"| |          / |   | \\",
"           |_`-' `-' | |"};

};


void fread(string fname, string words[]){
ifstream ifile(fname.c_str(),ios::in);
if (!ifile){
cout<<" Couldn't read the file " << fname;exit(-1);}
int nwords=4000;
int count=0;
while(ifile && count < nwords)
ifile >> words[count++];
while(ifile>>words){
cout<<words[count];}
ifile.close();}
int main(){
string words[20];


fread("1-4000.txt",words);
return 0;}
