#include<iostream>
using namespace std;
#include<string.h>
#include<math.h>
int main(){

    string str1 = "madam";
    string stcpy;
    stcpy = str1;

    int start = 0;
    int end = str1.length() - 1;

    while(start<end){
        int temp = stcpy[start];    
        stcpy[start] = stcpy[end];
        stcpy[end] = temp;
        start++;
        end--;

    }
    if(start == end){
        cout<<"It is pallindrome"<<endl;
    }
    else{
        cout<<"It is not a pallindrome";
    }
}