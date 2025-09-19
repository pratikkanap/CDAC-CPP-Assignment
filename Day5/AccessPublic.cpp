#include<iostream>
using namespace std;
class Area{
    public : 
      double radius,result;

      double circlearea(){
        result = 3.14 * radius *  radius;
        return result;
        
      }
};
int main(){
    Area obj;
    obj.radius = 5;
    //it will show same value for both obj.circlearea() & obj.result
    cout<<"The area is : "<<obj.circlearea()<<endl;
    cout<<"The area is  : "<<obj.result;
  

}