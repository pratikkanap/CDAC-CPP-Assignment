#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the number : ";
    cin>>num1;
    cin>>num2;
    try{
        if(num2 == 0){
            throw 0;
        }
        
        else{ 
               int result = num1/num2;
               cout<<"result : "<<result<<endl;
        }
    }    
    catch(int e){
        cout<<"This is exception handling ";
    }
}