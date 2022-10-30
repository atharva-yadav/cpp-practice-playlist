// How many Nos bw 1-n which are divisible by a & b

#include <iostream>
using namespace std;

int divisible(int n, int a, int b)
{

    int c1 = n / a;                                 // think in perspective of tables...// There are c1 numbers wnich are divisible "a" from 1 to n        
    int c2 = n / b;

    int c3 = n / (a * b);

    // cout<<c1<<endl;
    // cout<<c2<<endl;
    // cout<<c3<<endl;

    return c1 + c2 - c3;
}

int main()
{

    int n, a, b;
    cin >> n >> a >> b;

    cout<<divisible(n, a, b)<<endl;
    return 0;
}