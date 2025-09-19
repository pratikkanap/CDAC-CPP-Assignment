#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number :  ";
    cin>>num;

    if(num%2==0){
        cout<<"The Number is Even : "<<num<<endl;
    }
    else{
        cout<<"The Number is odd : "<<num<<endl;
    }
}