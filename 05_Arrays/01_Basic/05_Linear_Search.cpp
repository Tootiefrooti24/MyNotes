//linear search
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

    int m;
    cout << "Enter number to search: ";
    cin >> m;

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == m)
        {
            cout << "The index of m is: " << i << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << -1 << endl;
    }
    return 0;
}
