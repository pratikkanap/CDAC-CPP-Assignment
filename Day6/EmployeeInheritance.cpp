#include<iostream>
using namespace std;
class Employee{
    public:
            int id;
            int salary;
            int contact;
     
   

};
class Empdetails:public Employee{
    protected:
            int contact;
    public:
            void setid(int i){
                id = i;
            }
            void setSalary(int s){
                salary = s;
            }
            void show(){
                cout<<"the id is :"<<id<<endl;
                cout<<"The salary is :"<<salary<<endl;
            }
        

};

class EmpContact:public Empdetails{
    public:
            void setContact(int c){
                contact = c;
            }
            void show(){
                cout<<"The contact is :"<<contact<<endl;
            }
        

};
int main(){
    Empdetails e1;
    e1.setid(1);
    e1.setSalary(300000);
    e1.show();
    EmpContact  e2;
    e2.setContact(25475964);
    e2.show();
}
