/*virtual is used at runtime ploymorphism it get ambigous when the multiple object 
it get confuse which to access  so we use virtual*/

#include<iostream> 
using namespace std; 
class employee{
	int id;
public:
	employee();
	employee(int);
    virtual void display();
	virtual int salary(){
		return 0;
	}
};
employee::employee(){
	id=1234;
}
employee::employee(int emp){
	id=emp;
}
void employee::display(){
	
	cout<<"The employee id is : "<<id<<endl;
}

class wageemployee:public employee{
	int hrs,rate;
public:
	wageemployee();
	wageemployee(int,int,int);
	void display();
    int salary();
};
wageemployee::wageemployee()
{
	hrs=0;
	rate=0;
}
wageemployee::wageemployee(int emp,int h,int r)	:employee(emp)
{
	hrs=h;
	rate=r;
}
int wageemployee::salary()
{
	return hrs * rate;
}
void wageemployee::display()
{
	employee::display();
	cout<<"The Hours taken by employee : "<<hrs<<endl;
	cout<<"The rate is : "<<rate<<endl;
}

int main(){
	employee * ptr = new wageemployee(10,2,1000);

	cout<<"salary of employee is  "<<ptr->salary()<<endl;
	ptr->display();
}