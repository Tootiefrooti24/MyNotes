//Rotate the given array by k-steps where k is non-negative and k can be greater than n(size of the array)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter numbers for array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter k(by how many no. you want to rotate): ";
    cin >> k;
    k = k % n;

/* Agar array size n = 5 hai: [1 2 3 4 5]
Agar k = 7 rotate karna hai, toh socho:

                                            1 full rotation (5 steps) ke baad array wapas same ho jaata hai.
                                            7 steps = 5 steps (waste, no change) + 2 steps actual useful.

Isliye: 7 % 5 = 2
Matlab actual kaam sirf 2 rotation ka hai.
Final rotation by 2 (right rotate): [4 5 1 2 3]
So  (% n) unnecessary full cycles hata deta hai aur sirf effective rotation bacha raha hai kyuki 7%5 remainder 2 de raha hai and so always use % to find the remainder when k is greater than the size of an array.

*/


    /***************************************IN-PLACE SOLUTION FOR ROTATING ARRAY*********************************/

    reverse(arr.begin(), arr.end());       // reverse from 0 to n
    reverse(arr.begin(), arr.begin() + k); // reverse from 0 to k
    reverse(arr.begin() + k, arr.end());   // reverse from k to n

    // C++ ke vectors me reverse function already hota hai therefore we used it for rotating an array without needing to make an extra array

    for (int ans : arr)
    {
        cout << ans << " ";
    }
    cout << endl;

/*
****************************************ROTATING AN ARRAY USING EXTRA ARRAY*******************************

int ansArray[n];
int index=0;
for(int i=n-k;i<n;i++){
    ansArray[index++]=arr[i];
}
cout<<endl;
for(int i=0;i<n-k;i++){
    ansArray[index++]=arr[i];
}

cout<<endl;
for(int i=0;i<n;i++){
    cout<<ansArray[i]<<" ";
}
cout<<endl;
*/

return 0;
}