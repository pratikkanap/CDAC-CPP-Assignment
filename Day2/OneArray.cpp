#include<iostream>
using namespace std;
int main(){
    int a[4],i;
    cout<<"Enter the elements of array"<<endl;
    
   for(i=0;i<=3;i++){ 
        cin>>a[i];
   }
   cout<<"display elemnts"<<endl;
   for(i=0;i<=3;i++){ 
       //cout<<a[i]<<endl;
       cout<<*(a+i)<<"\t";
   }
   return 0;
}