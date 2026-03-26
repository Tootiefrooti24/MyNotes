// Last occurrence of element in array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int m;
    cout << "Enter element: ";
    cin >> m;

    int occurrence = -1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == m)
        {
            occurrence = i;
            break;
        }
    }

    cout << occurrence << endl;

    return 0;
}
