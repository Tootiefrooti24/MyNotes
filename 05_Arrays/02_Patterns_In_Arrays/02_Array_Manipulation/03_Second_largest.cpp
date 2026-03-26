// Find the second largest element in the given array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter numbers in array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int secondlargest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }

        else if (arr[i] > secondlargest && arr[i] !=largest)
        {
            secondlargest = arr[i];
        }
    }

    if (secondlargest == INT_MIN)
    {
        cout << "No second largest element";
    }
    else
        cout << "The second largest element in the array is: " << secondlargest << endl;
    return 0;
}
