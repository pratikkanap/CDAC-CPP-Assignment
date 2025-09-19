#include<iostream>
using namespace std;
int main(){
    int prev =0, newvalue=1 ,i , n,fib  ;
    cin>>n;
    cout<<"the fib series is : 0 1 ";
    for(i=0;i<n-2;i++){

        fib = newvalue + prev;
        cout<<fib<<" " ;
        prev = newvalue ;
        newvalue = fib ;

    }
}
