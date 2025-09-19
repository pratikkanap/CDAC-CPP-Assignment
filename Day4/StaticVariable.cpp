#include<iostream>
using namespace std;
class Complex{
  public:
         static int cnt;

};
int Complex::cnt = 10;

int main(){
    cout<<"The Static variable is : "<<Complex::cnt<<endl;

    cout<<"The size of Static variable is : "<<sizeof(Complex::cnt);

}