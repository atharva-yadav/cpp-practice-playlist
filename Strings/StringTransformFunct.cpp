#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    /*🟡 transform() function : -> Takes 4 parameters
                              1. beggining iterator 
                              2. ending iterator (this two defines range)
                              3. from where to transform
                              4. which transformation has to done along with prior scope resolution operator
                              
    transform : Performs a transformation on given array/string.
        toupper(int c) : Returns upper case version of character c. If c is already in uppercase, return c itself.
        tolower(int c) : Returns lower case version of character c. If c is already in lowercase, return c itself */

    string s = "abcdefghijk";
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;


    string r = "ABCDEFGHIJK";
    transform(r.begin(), r.end(), r.begin(), ::tolower);
    cout << r << endl;

    return 0;
}