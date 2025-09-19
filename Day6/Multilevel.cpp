#include<iostream> 
using namespace std; 
class Base{ 
    public: 
            Base(){ 
                    cout <<"Base class\n"; 
           }        
}; 
class child: public Base{ 
    public: 
            child(){ 
                cout <<"child  Class"<<endl; 
            }
}; 
class secondchild: public child { 
    public: 
            secondchild(){ 
            cout <<"secondchild Class"<<endl; 
        }  
}; 
int main() 
{ 
    secondchild obj; 
    return 0; 
}