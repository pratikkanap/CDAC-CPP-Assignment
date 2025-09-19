#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter the number : ";
    cin>>a;
    //square root 
    int result = sqrt(a);
    cout<<"result : "<<result<<endl;
    //ceil
    cout<<"Enter the value for ceil and floor : ";
    double e;
    cin>>e;
    int result3 = ceil(e);
    cout<<"result : "<<result3<<endl;

    //floor
    int result5 = floor(e);
    cout<<"result : "<<result5<<endl;
    
    //round
    int result4 = round(e);
    cout<<"result : "<<result4<<endl;
     
    //absolute
    cout<<"Enter the number 2 : ";
    cin>>b;
    int result1 = abs(b);
    cout<<"The result 2 is : "<<result1<<endl;

    //power
    cout<<"Enter the number 3 : ";
    cin>>c>>d;
    int result2 = pow(c,d);
    cout<<"The result 2 is : "<<result2;

}