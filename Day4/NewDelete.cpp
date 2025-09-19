#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the num of  Element : ";
    cin>>n;
   
    int * ptr = new int[n];

    cout<<"Accept Elements : "<<endl;
    for(i=0;i<n;i++){
        cin>>ptr[i];
    }    
    
    cout<<"Display Elements : "<<endl;
    for(i=0;i<n;i++){
        cout<<"The value is : "<<ptr[i]<<endl;
    }
    
}