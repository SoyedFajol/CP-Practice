#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        long long cnt_2=0,cnt_3=0;
        while(!(n%2)){
            n/=2;
            cnt_2++;
        }
        while(!(n%3)){
            n/=3;
            cnt_3++;
        }
        if(n!=1 || cnt_2>cnt_3) cout << -1 <<endl;
        else cout<< (cnt_3-cnt_2) + cnt_3 <<endl;
    }
    return 0;
}
