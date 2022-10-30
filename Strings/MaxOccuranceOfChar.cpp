#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s = "abababab";

    cout << 'z' - 'a' << endl; // Gives difference between elements ;)
    cout << 'z' + 'a' << endl; // Gives addition of two ASCII numbers associated to it ;)

    int freq[26]; // Array for storing elements in string

    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0; // Assigned each block to value zero(0)
    }

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++; // 🔴The memory block corresponds to each character in freq array is incremented. ('c'-'a' gives 2, 'z'-'a' gives 25)
    }

    char max_occured_char = 'a';
    int max_freq = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > max_freq)
        {
            max_freq = freq[i];
            max_occured_char = i + 'a'; // 🔴
        }
    }

    cout << "Maximum freq is " << max_freq << " and max occured char is " << max_occured_char << endl;

    return 0;
}