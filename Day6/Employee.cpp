#include <iostream>  
using namespace std;  
 class Account {  
   public:
   int bonus = 2000;  
   public:
   int getBonus(){
   		return bonus;
   }
 };  
   class Programmer: public Account {  
   public:  
   int monthly_salary = 5000;  
   void CalculateSalary(){
       cout<<"Total Salary: "<<monthly_salary+getBonus();  
   }
};       
int main() {  
     Programmer p1;  
     //p1.CalculateSalary();
        cout<<"Total Salary: "<<p1.monthly_salary;  
}
  