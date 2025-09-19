#include<iostream>
using namespace std;
int main(){
    int i,j,temp;
    int arr[] ={88,22,44,55};
    for( i =0 ; i< 4;i++){
        if(arr[i]>arr[i+1])
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    cout<<"The sorted is : ";
    for(i=0;i<4;i++){
        cout<<"\t"<<arr[i];
    }
}