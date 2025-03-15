#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[n];
    cin>>n;
    for(int i=0; i<n; i++)
    cin>>arr[i];
    int mini_number= INT_MAX;
    for(int i=0; i<n; i++)
    mini_number=min(mini_number,abs(arr[i]));
    cout<<mini_number<<endl;
    return 0;

}
