// find the diff b/w sum of elements at even indices to the sum of elements at odd indices
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

    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum1 += arr[i];
        }
        else
        {
            sum2 += arr[i];
        }
    }
    cout << "The diff is:" << sum1 - sum2 << endl;
    return 0;
}
