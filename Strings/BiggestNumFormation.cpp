#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s = "46587321925";

    sort(s.begin(), s.end(), greater<int>()); //greater<int>() is for decending order with int datatype

    cout <<s<<endl;

    
    return 0;
}