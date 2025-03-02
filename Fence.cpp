#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    vector<int>pref(200000);
    for(int i=0; i<n; i++)
        pref[i+1]=pref[i]+a[i];
    int mini_total=1e9;
    int index;
    for(int i=0; i<=n-k; i++)
    {
        int total=pref[i+k]-pref[i];
        if(total<mini_total)
        {
            mini_total=total;
            index=i+1;
        }
    }
    cout<<index;
    return 0;

}
