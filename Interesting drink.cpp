#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
        sort(arr,arr+n);
        int q;
        cin>>q;
        while(q--)
        {
            int x;
            cin>>x;
            auto it =upper_bound(arr,arr+n,x);
            cout<<it-arr<<endl;
        }
        return 0;
}
