/* 🔵 Pass by Reference 🔵

⭕ Copies the reference of an argument into the function
⭕ Inside function reference used to access the actual argument
⭕ Changes made to actual arguments
⭕ Argument reference is passed to the function

*/

#include <iostream>
#include <typeinfo>

using namespace std;

void passByReference(int &x, int &y)
{ // & is used to give reference
    int temp = x;
    x = y;
    y = temp;
}

int main()
{

    int a = 10;
    int b = 20;

    cout << "Before Swapping a = " << a << " b = " << b << endl;
    passByReference(a, b); // Function call
    cout << "After Swapping a = " << a << " b = " << b << endl;

    // Actual values are changed globally

    return 0;
}