#include<iostream>
using namespace std;

class Student{
    int rollno;
    char name[20];
    public:
            void accept(){
                cout<<"Enter the details :";
                cin>>rollno>>name;
            }
            void display(){
                cout<<"Roll no. is \t"<<rollno<<endl;
                cout<<"name :"<<name<<endl;
            }
            ~Student(){
                cout<<"Destructor is called"<<endl;

            }
            
};
int main(){
    int n,i;
    cout<<"Enter no of students :"<<endl;
    cin>>n;
    Student* ptr = new Student[n];
    cout<<"accept details\n";
    for(i=0;i<n;i++)
    ptr[i].accept(); //(ptr+i)->accept();
    cout<<"display details\n";
    for(i=0;i<n;i++)
    (ptr+i)->display();//ptr[i].display();
    delete [] ptr; 

}