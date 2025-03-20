#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n];
        int even=0,odd=0;
        for(int i=0; i<n; i++)
        {
            int a; cin>>a;
            arr[i]=a;
            if(arr[i]%2==0)
            {
                even+=arr[i];
            }else
            {
                odd+=arr[i];
            }
        }
        if(even>odd)
        {
            cout<<"YES"<<endl;
        }
        else{cout<<"NO"<<endl;
        }
    }
    return 0;
}
