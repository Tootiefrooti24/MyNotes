//Count the number of triplets whose sum is equal to the given x

//In this question, unique elements ke baare me nahi bola hai therefore humne code ko uunique elements ke liye nahi likha instead we wrote it for unique indexes,for eg. such as [4,5,1,2,7,1,3,3] the count will be 7 cuz repeatition bhi ho raha hai .If we want to not duplicate and get optimised solution then study two pointer,set,hashing,sorting

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

    int x;
    int count = 0;
    cout << "Target sum: ";
    cin >> x;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k]== x)
                {
                    cout<<arr[i] <<" "<<arr[j]<<" "<<arr[k]<<endl;
                    count++;
                }
            }
        }
    }
    if (count == 0)
        cout << "No triplet is present equal to target sum";
    else
        cout << "The total number of triplets whose sum is equal to "<<x<<" are : "<< count << endl;
    return 0;
}

/* output:
            4 5 1
            4 5 1
            4 3 3
            5 2 3
            5 2 3
            1 2 7
            2 7 1
*/