//count no. of elements strictly greater than value x
#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cout<<"Enter size of array: ";
cin>>n;

vector<int>arr(n);
cout<<"Enter numbers in array: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int x;
int count=0;
cout<<"Enter x: ";
cin>>x;
for(int i=0;i<arr.size();i++){
    if(arr[i]>x){
        count++;
    }
}
cout<<"The count of numbers greater than x is: "<<count<<endl;
return 0;
}
