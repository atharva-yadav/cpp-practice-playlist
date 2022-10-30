#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    /* 🟡🔴 Apeending string (Connecting)  */

    // string s1 = "Fam";
    // string s2 = "ily";

    // s1.append(s2);
    // cout << s1 << endl;      // Original S1 is changed (s1 = s1+s2)
    // cout << s1 + s2 << endl; // Original S1 is not changed


    /* Accesing Elements (Access) */

    // cout << s1[1] << endl;


    /* 🟡🔴 Erasing(clear) the string (Clear all the string) */

    // string abc = "abcdefghi jklmnop qrstuvw xyz";
    // cout << abc << endl;
    // abc.clear();
    // cout << abc << endl; // string is cleared (empty)


    /* 🟡🔴 Comparison of string (Compare two strings) */

    // string s1 = "abc";
    // string s2 = "xyz";

    // cout << s2.compare(s1) << endl; // s2 is greater than s1, so +ve output
    // cout << s1.compare(s2) << endl; // s1 is less than s2, so -ve output
    // If equal strings are there then output is zero(0)


    /* 🟡🔴 Empty function (Return true if string is empty) */

    // string s1 = "abc";
    // cout << s1 << endl;
    // s1.clear(); //make string empty to check

    // if (s1.empty())
    // {
    //     cout << "string is empty" << endl;
    // }


    /* 🟡🔴 Erase function (Erase given number of characters from given index..1st argument is starting erase index & 2nd is how many characters next to it has to remove) */

    // string s1 = "ABCDEF";

    // s1.erase(3, 2); // Erase 2 characters from nxt to index 3
    // cout << s1;


    /* 🟡🔴 Find function (Returns index of starting element of given sub-string as a parameter) */

    // string s1 = "Atharva";
    // cout << s1.find("rva") << endl;


    /* 🟡🔴 Insert function (Insert sub-string at particular index.. 1st argument is index at which string has to insert 2nd is actual sub-string) */

    string s1 = "atharva";
    cout << s1.insert(7, "yadav") << endl;


    /* 🟡🔴 Length of string (Return size) */

    // string s1 = "atharva";
    // cout << s1.size() << endl;
    // cout << s1.length() << endl;

    // for (int i = 0; i < s1.length(); i++)
    // {
    //     cout << s1[i] << endl;
    // }


    /* 🟡🔴 Subsring function (first argument is from which index we want sub-string and second arg. is how many elements next to it) */

    // string s1 = "atharva";

    // string substring = s1.substr(1, 6);
    // cout << substring << endl;


    /* 🟡🔴 String to Integer function (Converts string to integer & we can do arithmatics to it) */

    // string s1 = "100";
    // int x = stoi(s1);
    // cout << x + 2 << endl;

    /* 🟡🔴 Integer to String  function (Converts integer to string) */

    int x = 100;

    string s1 = to_string(x) + "2"; // append the "2" to string s1(100)---->1002
    cout << s1 << endl;


    /* 🟡🔴  Sort the string .. Sort string in lexicographical order (algorithm header file need to include) */

    // string s1 = "hsbkduahyzkssqpwnc";
    // sort(s1.begin(), s1.end()); // Need to include "algorithm" header file
    // cout << s1 << endl;

    return 0;
}