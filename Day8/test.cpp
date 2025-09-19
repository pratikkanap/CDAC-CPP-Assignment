#include <iostream>
using namespace std;
 class Test {
public:
    // Constructor
    Test() {
         cout << "Constructor executed"<<endl; 
        }
 
    //Destructor
    ~Test() { 
        cout << "Destructor executed";
     }
};
int main(){
    Test t;
}