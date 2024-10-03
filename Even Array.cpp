#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int a[n];
        int odd= 0; int even = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(i%2 != a[i]%2){
                if(a[i]%2) odd++;
                else even++;
            }
        }
        if(odd != even) cout<<"-1"<<endl;
        else cout<<odd<<endl;

    }
}
