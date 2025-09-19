#include<iostream>
#include<string.h>
using namespace std ;
int main(){

    char str1[20],str2[20];

    cout<<"Enter the first String : "<<endl;
    cin>>str1;

    cout<<"The copied String is : "<<strcpy(str2,str1)<<endl;

    cout<<"The length of String is : "<<strlen(str1)<<endl;

    char str3[20];

    cout<<"The second String is :"<<endl;
    cin>>str3;

    cout<<"The concat of String is : "<<strcat(str1,str3)<<endl;

    cout<<"The campare of String is : "<<strcmp(str1,str3)<<endl;
}