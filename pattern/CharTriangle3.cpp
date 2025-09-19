#include<iostream>
using namespace std ;
int main(){
    int i,j,n;
    //char ch = 'A';
    
    cout<<"Enter the elements : ";
    cin>>n;
    
    for(i=1;i<=n;i++){
    char ch = 'A';

        for(j=1;j<=i;j++){
            cout<<ch <<"\t";
             ch++; //it give value in continues order 
        }
       
        cout<<"\n";
        
    }
    
}