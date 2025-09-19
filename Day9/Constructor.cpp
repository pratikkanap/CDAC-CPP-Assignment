
#include<iostream>
using namespace std ;
class constructor{
    
            public: 
            int first,second;
            constructor(){
                cout<<"this is default constructor";
            }
            constructor(int a,int b){
                first = a;
                second = b;
               
            }
            void display(){
                cout <<"The addition is : "<<first+second<<endl;

            }
};
int main(){
    constructor c1(10,20);
    c1.display();
}