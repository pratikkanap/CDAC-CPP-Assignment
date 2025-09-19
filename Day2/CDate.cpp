#include<iostream>
using namespace std;

class CDate{
    int dd, mm , yy;
    public:
            void accept();
            void display();
            void setDate(int);
            int getMonth() const;
};
void CDate::accept(){
    cout<<"Enter day month year ";
    cin>>dd>>mm>>yy;

}
void CDate::display() {
    cout<<"the date is :"<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
void CDate::setDate(int Dd){
    dd = Dd;
}
int CDate::getMonth() const{
    return mm;
}

int main(){
    CDate cd1;
    cd1.accept();
    cd1.display() ;
    cd1.setDate(30);
    cout<<"month of the year is :"<<cd1.getMonth()<<endl;
    cd1.display();
}