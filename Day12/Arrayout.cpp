#include<iostream>
using namespace std;
int main(){
        int arr[5] = {1,2,3,4,5};
        int index;
        cout<<"Enter the index of array : ";
        cin>>index;

        try{
            if(index>= 5){
                throw "Array out of bound !";
            }
        }
        catch(const char* e){
            cout<<e;
        }
}