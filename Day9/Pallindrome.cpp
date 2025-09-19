#include<iostream>
using namespace std;
int main(){
    int num,rev=0,temp,n;
    cout<<"Enter the Number : ";
    cin>>n;
    num = n;
    while(num!=0){
        temp = num % 10;
        rev = rev * 10  + temp;
        num = num / 10;
    }

     if(rev == n){
                cout<<"The number is pallindrome ";
        }
    
        else{
                cout<<"The number is not pallindrome ";

        }
}