/* 🔴🟡 STRING ADVANTAGES 🟡🔴

1. No need of specify size as of character arrays
2. Terminate with special character \0
3. Operations are easy to implement 

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declaration, Input/Output

    string str;
    // cout << "\nEnter string" << endl;
    // cin >> str;
    // cout << str <<endl;

    string str1(5, 'n'); // 5 times 'n' will be printed
    cout << str1 << endl;

    string str2 = "ApniKaksha"; // Manually assigning input
    cout << str2 << endl;

    string str3;
    getline(cin, str3); // To get whole line with spaces, we use getline() function........ cin only take word upto space
    cout << str3 << endl;

    return 0;
}
