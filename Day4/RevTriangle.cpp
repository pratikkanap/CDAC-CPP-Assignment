#include<iostream>
using namespace std ;
int main(){
    int i,j,n;
    cout<<"Enter the elements : ";
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=n;j>i;j--){
           // cout<<" * ";
            cout<<" ";
        }
    }
        for(i=0;i<=n;i++){
            for(j=n;j>i;j--){
        
        cout<<" * ";
    }
    cout<<"\n";
}
} 
