#include<iostream>
using namespace std;

#define max(a, b) (a > b) ? a : b 
#define min(a, b) (a < b) ? a : b 
int main()
{
    cout<<"the maximum value is : ";
    int a =  max(10,100);
    cout<<a<<endl;

    cout<<"The minimum value is : ";
    int b = min(10,100);
    cout<<b;
} 