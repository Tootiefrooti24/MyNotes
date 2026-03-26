//Find the total number of pairs in the array whose sum is equal to the given value X.
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter size of array: ";
cin>>n;

vector<int>arr(n);
cout<<"Enter numbers in array: ";
for(int i=0;i<arr.size();i++){
    cin>>arr[i];
}

int x;
int count=0;
cout<<"Target sum: ";
cin>>x;
for(int i=0;i<arr.size();i++){
    for(int j=i+1;j<arr.size();j++){
        if(arr[i]+arr[j]==x){
            count++;
        }
    }
}
if(count==0) cout<<"No pair is present equal to target sum";
else cout<<"The total number of pairs whose sum is equal to x are : "<<count<<endl;
return 0;
}