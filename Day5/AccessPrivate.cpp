#include<iostream>
using namespace std;
 
class Rectangle
{   
    // private data member is showing error 
    public: //private :
        int length, breadth;
      
    // public member function    
    public:    
        int area_rect()
        {  
            int area = length * breadth;
            return area ;
        }
     
};
 

int main()
{   
    
    Rectangle obj;
    obj.length = 50;
    obj.breadth = 20;
     
    cout << "Area is:" << obj.area_rect();
    return 0;
}