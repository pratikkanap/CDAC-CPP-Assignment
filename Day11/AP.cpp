#include<iostream>
using namespace std;


int main(){
    int AP, n, a, d,i;
    int arr[10] = {2,4,6,8,10,12,14,16};
   
    a = arr[0];
    d = arr[0] - arr[1];
    n= arr[i];

    AP = (n/2)*((2*a) + (n-1)*d);
    cout<<"The arithmatic progression is"<<AP;
}