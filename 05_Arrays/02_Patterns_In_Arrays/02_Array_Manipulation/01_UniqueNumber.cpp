//Find the unique number in given array where all the elements are being repeated twice with one value being unique

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

    int unique=-1;
    for(int i=0;i<n;i++){
        int count=0;//counter ko i loop ke andar isiliye initialise kiya taaki jaise hi i next element pe jaaye toh counter reset ho jaaye kyuki we want to check for every element
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            unique=arr[i];
            break;
        }
    }
   cout<<"The unique element is: "<<unique<<endl;
    return 0;
}

