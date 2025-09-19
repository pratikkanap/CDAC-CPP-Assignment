#include <iostream>
using namespace std;
class Random {
    int* ptr;
    public:
        Random(){ 
            ptr = new int;
            *ptr = 50;
    }
    void show(){
        cout << *ptr << endl;
    }
};
int main(){
    Random rn1;
    rn1.show();
}
