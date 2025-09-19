#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
    int i;
    char str1[20];
    cout<<"Enter a string : ";
    cin>>str1;
    string revstr="";
    for(i=strlen(str1);i>=0;i--){
        revstr = revstr + str1[i];
        
    }
    cout<<"The reversed string is : "<<revstr;


}