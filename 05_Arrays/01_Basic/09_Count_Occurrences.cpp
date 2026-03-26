// count no. of occurrences of particular element
#include <bits/stdc++.h>
#include <vector>
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

    int count = 0;
    int element;
    cout << "Enter element: ";
    cin >> element;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            count++;
        }
    }

    cout << "The no. of occurrences of the element is: " << count << endl;
    return 0;
}
