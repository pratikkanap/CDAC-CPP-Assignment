#include<iostream>
using namespace std;

int main(){
    int i;
    int a[] ={56,27,24,10,5};
    int second =0;
    int max = a[0];
    for(i=1;i<5;i++){
        if(max<a[i]){
           // second = max;
            max=a[i];
        }
    }
    for(int j=0;j<5;j++){
        if(second < a[j] && a[j]<max){
                second = a[j];
        }
    }
    cout<<"The second max num is :"<<second;

}