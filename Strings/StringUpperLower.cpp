// Uppercase & Lowercase without Built-in function....

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str = "abcdef";

    // cout <<'a'-'A'<<endl; // Gives difference between ASCII values of uppercase & lowercase

    /* 🔴🟡 Convert into uppercase 🔴🟡 */

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    cout << str << endl;



    /* 🔴🟡 Convert into lowercase 🔴🟡 */

    string str1 = "ABCDEF";

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    cout << str << endl;

    return 0;
}