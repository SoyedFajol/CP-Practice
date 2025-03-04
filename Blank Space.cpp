#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int ans=0,cons=0;
        for(int i=0; i<n; i++)
        {
            if(a[i])
                continue;
            cons++;
            if(i==n-1 || a[i+1]!=a[i])
            {
                ans=max(ans,cons);
                cons=0;
            }
        }
         cout<<ans<<endl;
    }
   return 0;
}
