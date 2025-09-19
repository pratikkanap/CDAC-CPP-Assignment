#include<iostream> 
using namespace std; 
class shape{
public:
    virtual int area()=0;
    virtual void display()=0;
};
class Rectangle:public shape{
	    int length,breath;
public:
        //parameteristed constructor
	    Rectangle(int,int);

        //function
        int area();
	    void display();
    
};
Rectangle::Rectangle(int l,int b){
	breath=b;
	length=l;
}
int Rectangle::area(){
	return breath * length;
}
void Rectangle::display(){
     cout<<"area of Rectangle is : "<<area();
}

int main(){
    shape * ptr = new Rectangle(2,100);
    ptr->display();
}