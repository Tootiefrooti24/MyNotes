//Find the maximum value out of all elements in array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];
    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "The maximum no. is: " << max << endl;
    return 0;
}