#include<iostream>
using namespace std;
#include<stdlib.h>

int main(){
    int * ptr;
    int n,i;
    cout<<"Enter number of elements : ";
    cin>>n;
    ptr = (int*)malloc(n*sizeof(int));
    cout<<"Accpet Elements\n";
    for(i=0;i<n;i++)
        cin>>ptr[i];
    cout<<"Display Elements\n";
    for(i=0;i<n;i++)
        cout<<ptr[i]<<"\t";
    free(ptr);
}