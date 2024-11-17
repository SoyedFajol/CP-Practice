#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        vector<int> a(k);
        for(int i=0; i<k; i++)
        {
            cin>>a[i];
        }
        int total= k-2;
        sort(a.begin(),a.end());
        for(int n=1; n*n <= total; n++)
        {
            if(total%n==0)
            {
                int m = total/n;
                if(binary_search(a.begin(),a.end(),n)&& binary_search(a.begin(),a.end(),m)){
                    if (n <= m)
                    {
                        cout << n << " " << m << endl;
                    }
                    else
                    {
                        cout << m << " " << n << endl;
                    }
                    break;

            }
        }
    }
}
    return 0;
}

