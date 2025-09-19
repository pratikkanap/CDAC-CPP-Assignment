#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};

    int i,second;
    int max;
    max = arr[0];
    for(i = 0; i<5;i++){
         if(max<arr[i]){
            second = max;
        max = arr[i];
    }
} 
for(int j=0;j<5;j++){
        if(second < arr[j] && arr[j]<max){
                second = arr[j];
        }
    }
cout<<second;
}
