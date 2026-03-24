#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter numbers: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"The sum of the numbers is: "<<sum<<"\n";
    

    return 0;
}