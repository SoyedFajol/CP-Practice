#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=0; i<5; i++)
        {
            if(a<=b && a<=c) a++;
            else if(b<=a && b<=c) b++;
            else c++;
        }
        cout<<a*b*c<<endl;
    }
    return 0;
}
