
#include<bits//stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        reverse(n.begin(), n.end());
        for(char &c : n)
        {
            if(c=='p')
            {
                c='q';
            }
            else if(c=='q')
            {
                c='p';
            }
        }
        cout<<n<<endl;


    }
    return 0;

}
