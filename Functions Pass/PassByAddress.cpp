/* 🔵 Pass by Address or Pointer 🔵 

⭕ Copies address of an arguments into formal parameters
⭕ Inside function address is used to access actual parameters
⭕ To pass values by address argument pointers are passed 

*/

#include <iostream>
using namespace std;

void passByAddress(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10;
    int b = 20;

    cout << "Before Swapping a = " << a << " b = " << b << endl;
    passByAddress(&a, &b); //Function call
    cout << "After Swapping a = " << a << " b = " << b << endl;

    return 0;
}