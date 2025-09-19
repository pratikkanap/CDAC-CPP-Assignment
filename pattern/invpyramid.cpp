#include<iostream>
using namespace std ;
int main(){
    int i,j,n;
    cout<<"Enter the elements : ";
    cin>>n;
    for(i=n;i>=0;i--){
        
        for(j=n;j>i;j--){
            cout<<" ";
        }
        for(j=n;j>=n-i;j--){
            cout<<"* ";
        }
        cout<<"\n";
        
    }
    }