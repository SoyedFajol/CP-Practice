#include<bits//stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long m,a,b,c;
        cin>>m>>a>>b>>c;
        long long row1 = min(a, m);
        long long row2 = min(b, m);
        long long rem1 = m - row1;
        long long rem2 = m - row2;
        long long filled1 = min(c, rem1);
        c -= filled1;
        long long filled2 = min(c, rem2);
        cout << row1 + row2 + filled1 + filled2 << endl;



    }
    return 0;

}

