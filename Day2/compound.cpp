
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int A, P, r, n, t;
    cout << "enter values" << endl;
    cin >> P >> r >> n >> t;
    A = pow((P * (1 + (r / n))), (n * t));
    cout << "compound interest :" << A << endl;
}