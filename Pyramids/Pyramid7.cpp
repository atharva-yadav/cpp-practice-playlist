#include <iostream>
using namespace std;

wrong !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

// Butterfly pattern
// *                  *
// * *              * *
// * * *          * * *
// * * * *      * * * *
// * * * * *  * * * * *
// * * * * *  * * * * *
// * * * *      * * * *
// * * *          * * *
// * *              * *
// *                  *

int main()
{
    int n;
    cout << "Pattern Row number" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * n - 2 * i;
        for (int j = 0; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;

        for (int i = n; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            int space = 2 * n - 2 * i;
            for (int j = 0; j <= space; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
        }
        return 0;
    }
}