#include<iostream> 
using namespace std; 
class employee{
	int id;
public:
	employee();
	employee(int);
    void display();
	int salary(){
		return 0;
	}
};
employee::employee(){
	cout<<"Value of employee without parameter\n";
	id=0;
}
employee::employee(int a)
{
	cout<<"Value of employee with parameter\n";
	id=a;
}
void employee::display(){
	
	cout<<"Here the employee id is : "<<id<<endl;
}

class wageofemployee:public employee
{
	int hours,rate;
public:
	wageofemployee();
	wageofemployee(int,int,int);
	void display();
            int salary();
};
wageofemployee::wageofemployee(){
	cout<<"Value of wageofemployee without parameter"<<endl;
	hours=0;
	rate=0;
}
wageofemployee::wageofemployee(int a,int h,int r):employee(a){
	cout<<"Value of wageofemployee with parameter"<<endl;
	hours=h;
	rate=r;
}
int wageofemployee::salary(){
	return hours * rate;
}
void wageofemployee::display(){
	employee::display();
	cout<<hours<<endl;
	cout<<rate<<endl;
}

int main(){

    // this is stored in stack memory
	employee * ptr;
	wageofemployee we1(10,2,1000);
	ptr = &we1;
	cout<<"salary of the employee is : "<< ptr->salary();
    
	ptr->display();
}