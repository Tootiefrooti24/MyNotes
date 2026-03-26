// check if the given array is sorted or not
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter numbers in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // jab bhi aisa question aaye ki sorted hai ya nahi ya phir similar question aaya then humesha maan ke chalna ki true hai phir false ke liye conditions likha karo it will help more ....always think and write about for false conditions

    bool isSorted = true;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < arr[i - 1])
        {
            isSorted = false;
            break;
        }
    }

    if (isSorted)
        cout << "Array is sorted" << endl;
    else
        cout << "Array is not sorted" << endl;
    return 0;
}
