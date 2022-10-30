// Check array is sorted or not using recursion

// we'll check arr[0] < arr[1] &&  arr 1 to n is sorted using recursion

#include <iostream>
using namespace std;

bool sorted(int arr[], int n)
{

    if (n == 1) // Base Condition
    {
        return true;
    }

    bool restArray = sorted(arr + 1, n - 1); // arr+1 is element 1st.........0 th index is omitted

    if (arr[0] < arr[1] && restArray)
    {
        return true;
    }
    else
    {
        return false;
    }

    // return (arr[0]<arr[1] && restArray);             alternative for if-else block
}

int main()
{

    // int arr[] = {1,2,3,4,5,6};
    int arr[] = {1, 2, 3, 4, 3, 6};
    cout << sorted(arr, 6);
    return 0;
}