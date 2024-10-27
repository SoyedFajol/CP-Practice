#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
		cin>>n;
		if(n==1||n==3)
		{
			cout<<"-1\n";
			continue;
		}
		else if(n%2==0)
		{
			for(int i=0;i<n/2;i++)
				if(i<n/2-1)
					cout<<33;
				else
					cout<<66;
			cout<<'\n';
		}
		else
		{
			for(int i=0;i<n/2-2;i++)
				cout<<33;
			cout<<363;
			cout<<66<<'\n';
		}
    }
    return 0;
}
