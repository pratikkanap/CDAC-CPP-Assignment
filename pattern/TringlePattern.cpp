#include<iostream>
using namespace std;
int main(){
    int i,j,num;
    cout<<"Enter the number of elements : ";
    cin>>num;
    for(i=1;i<=num;i++){
        for(j=0;j<i;j++){
            cout<<" * ";
        }
        cout<<"\n";
    }
   
}
