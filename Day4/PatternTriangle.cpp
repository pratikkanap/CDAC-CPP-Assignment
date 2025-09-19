#include<iostream>
using namespace std ;
int main(){
    int i,j,n;
   
    
    cout<<"Enter the elements : ";
    cin>>n;
    
    for(i=1;i<=n;i++){
    
        for(j=n;j>=1;j--){
            cout<< " * "<<"\t";
            
        }
       
        cout<<"\n";
        
    }
    
}