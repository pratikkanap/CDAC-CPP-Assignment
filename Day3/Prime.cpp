#include <iostream>
using namespace std;
int main() {
    int num,count = 0;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 2; i< num; i++) {
        if(num%i == 0){
           count++;
        }
    }
    if(count>0){
        cout<<"This is not prime";  
    }
    else{
        cout<<"is Prime";
    }
}

