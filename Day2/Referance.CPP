#include<iostream>
using namespace std;
void swap(int&, int&);
int main(){
    int a= 10, b=20;
    cout<<"before swapping\n";
    cout<<a<<b<<endl;
    swap(a,b);
    cout<<"after swapping\n";
    cout<<a<<"\t"<<b<<endl;
}
void swap(int& p, int& q){
    int temp;
    temp=p;
    p=q;
    q=temp;
    cout<<"after swapping"<<endl;
    cout<<"p="<<p<<"q="<<q<<endl;

}