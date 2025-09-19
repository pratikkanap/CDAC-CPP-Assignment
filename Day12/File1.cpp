#include <iostream>
using namespace std;

int main()
{

    int arr[4] = {1, 2, 3, 4};
    int index;

    cout << "Enter array index: ";
    cin >> index;

    try{
        if (index >= 4)
            throw "Array out of bounds!";
        }
   
    catch (const char *msg){
        cout << msg << endl;
    }
    return 0;
}