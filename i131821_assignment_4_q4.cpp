//Name    Muhammad Ibrahim
//Roll No  13i-1821
#include <iostream>
using namespace std;
int main(){
int i=0;
for(int x=0;x<127;i++,x++){
if(i!=17){
cout<<(char)x;
}
else{
cout<<endl<<(char)x;i=0;i++;}
}
return 0;
}
