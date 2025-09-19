#include <iostream>
using namespace std;
void StaticV(){
    static int cnt = 0,sum=0;
     sum=sum+cnt;
     cout<<sum<<endl;
     cnt++;
}
int main(){
    for (int i = 0; i < 3; i++)
        StaticV();
}