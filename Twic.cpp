#include<iostream>
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
        sort(a.begin(),a.end());
        int score=0;
        for(int i=1; i<n; i++)
        {
            if(a[i]==a[i-1])
            {
                score++;
                i++;
            }
        }
        cout<< score <<endl;
    }
    return 0;
}
