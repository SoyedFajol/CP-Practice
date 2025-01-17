#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a,b,plus;
        cin>>a>>plus>>b;
        cout<<(a-'0')+(b-'0')<<endl;
    }
    return 0;
}
