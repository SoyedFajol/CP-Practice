
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        map<char,bool> visited;
        int ans=0;
        for(int i=0; i<n; i++)
        {
            if(visited[s[i]])
            {
                ans++;
            }else
            {
                ans+=2;
                visited[s[i]]=true;
            }
        }
         cout<<ans<<endl;

    }
    return 0;
}
