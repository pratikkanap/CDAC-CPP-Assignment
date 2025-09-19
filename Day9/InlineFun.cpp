#include<iostream>
using namespace std;
int a;
inline int cube(int s) {
     a = s * s * s;
     return a;
    }
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The cube of "<<n<<" is : ";
    cout<<cube(n);
    return 0;
}