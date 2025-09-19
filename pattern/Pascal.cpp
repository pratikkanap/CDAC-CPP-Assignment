#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter a number :";
    cin>>n;
    int a[n][n];

    for(i=0;i<n;i++){
        
        for(j=0;j<=i;j++){
            if(j==0 || i==j ){
                a[i][j] = 1;
            }
            else{
                a[i][j] = a[i-1][j-1] + a[i-1][j];
            }
        }   
        }
        for(i=0;i<n;i++){
            for(j=0;j<n-i;j++){
            cout<<" ";
        }
            for(j=0;j<=i;j++){
                cout<<a[i][j];
                cout<<" ";

            }
            cout<<"\n";
        }

}