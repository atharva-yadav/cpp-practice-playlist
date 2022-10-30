#include <iostream>
using namespace std;

// Floyd's Triangle
// 1
// 2     3
// 4     5     6
// 7     8     9     10
// 11    12    13    14    15

int main()
{
    int n, count = 01;
    cout << "Pattern Row number" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";

            count = count + 1;
        }
        cout << endl;
    }
    return 0;
}