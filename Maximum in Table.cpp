#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int table[n][n];
    for(int i=0; i<n; i++)
    {
        table[0][i]=1;
        table[i][0]=1;
    }
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
            table[i][j]=table[i][j-1]+table[i-1][j];
        }
    }
    cout<<table[n-1][n-1];
}
