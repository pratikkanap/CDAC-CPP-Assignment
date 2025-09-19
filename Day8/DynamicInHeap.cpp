#include<iostream>
using namespace std;

class cdate{
    int dd,mm,yy;
    public:
            cdate(){
                dd=mm=yy=0;
            }
            cdate(int d, int m, int y){
                dd=d;
                mm=m;
                yy=y;
            }
            void show(){
                cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
            }
};
int main(){
    
    //cdate cd1(10,4,2024);
    //cd1.show();
    cdate* ptr1 = new cdate(1,3,2025);
    ptr1->show();
    //By deleting the previous value the new value is garbage value
    delete ptr1;
    ptr1->show();

}