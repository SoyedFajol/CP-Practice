#include<iostream>
#include<algorithm>
#include <vector>

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

        sort(a.begin(),a.end());

        int min_val = a[0];
        int max_val = a[n-1];
        long long sum = (long long)(max_val - min_val) * (n - 1);

        cout<<sum<<endl;
    }
    return 0;
}
