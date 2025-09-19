#include<iostream>
using namespace std;
void user_strcpy(char *, char *);
void user_strcat(char *, char *);

int main(){
    char str1[20];
    char str2[50];
    char str3[50];

    cout<<"enter a string :";
    cin>>str1;
    user_strcpy( str1, str2 );
    cin>>str3;
    user_strcat( str1, str3 );

    cout<<"the string copy  is :"<<str2<<endl;
    cout<<"the string concat is :"<<str3;

    }
    void user_strcpy(char * s1, char * s2){
        while(*s1!='\0'){
            *s2 =* s1;
            s1++;
            s2++;
        }
        *s2='\0';
    }
    void user_strcat(char * s1, char * s3){
        while(*s3 != 0){
            s3++;
        }
        while(*s1!='\0'){
            *s3 =* s1;
            s1++;
            s3++;
        }
        *s3='\0';
    }
