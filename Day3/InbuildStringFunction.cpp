#include<iostream>
using namespace std;
#include<string.h>

int main(){
    char str1[10];
    char str2[10];
    cout<<"enter a string : ";
    cin>>str1;
    cout<<"The first string is :  "<<str1<<endl;
    //copy string 
    cout<<"the copied string is : "<<strcpy(str2,str1)<<endl; 

    cin>>str2;
    cout<<"The concat String is  : "<<strcat(str1,str2)<<endl;

    cout<<"The length of the String is : "<<strlen(str1);

}