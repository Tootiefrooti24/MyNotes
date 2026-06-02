#include<bits/stdc++.h>
using namespace std;
int main(){
    float dividend,divisor;
    cout<<"Enter dividend and divisor: ";
    cin>>dividend>>divisor;
    cout<<"Remainder when "<<dividend<<" is divided by "<<divisor<<" is : "<<fmod(dividend,divisor);
    return 0;
}

//using fmod() is the simpler way to find remainder in C++.The header file (#include<bits/stdc++.h>) we are using includes majorly every other standard libraries we require like #include <iostream>, #include <cmath> , #include <string>, #include <vector> , #include <algorithm>........therefore fmod() is working fine even when <cmath> is not imported.