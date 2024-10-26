#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int max_w=0;
        int max_h=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int w,h;
            cin>>w>>h;

            max_w= max(max_w,w);
            max_h= max(max_h,h);
        }
        cout<< 2*(max_w + max_h) <<endl;
    }
    return 0;
}
