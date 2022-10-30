/*          Accessing Nth Fibbonacci Number

        0, 1, 1, 2, 3, 5, 8, 13, 21, . . . . .

        fin(n) = fib(n-1) + fib(n-2)

        Base Case -->  fib(0) = 0
                       fib(1) = 1

*/

#include <iostream>
using namespace std;

int fib(int n)
{

    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    /*if (n==0 || n==1)
    {
        return n;                   Alternative to above 2 if loops
    }
    */

    return fib(n - 1) + fib(n - 2);
}
int main()
{

    int n;
    cin >> n;

    cout << fib(n);

    return 0;
}
