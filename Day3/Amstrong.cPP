#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int Num, rem,n;
    int sum = 0, count = 0;
    cout << "Enter number: ";
    cin >> n;
    Num =n;
    while (Num != 0) {
        count++;
        Num = Num/10;
       
    }
    Num =n;
    while (Num != 0) {
        rem = Num % 10;
        sum = sum + pow(rem, count);
        Num = Num/10;
    }
    if(sum == n){
        cout<<"The Amstrong number is : "<<endl;
    }   
    else{
        cout<<"The Amstrong number Not  : "<<endl;

    }
}
