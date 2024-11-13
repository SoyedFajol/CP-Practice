#include<iostream>
#include <vector>
#include<algorithm>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int n,k;
        std::cin>>n>>k;
        std::vector <int> arr(n);
        for(int i=0; i<n; i++){
            std::cin>>arr[i];
        }
        if(k == 1 && !is_sorted(arr.begin(), arr.end())){
            std::cout<<"No"<<std::endl;
        }else{
            std::cout<<"Yes"<<std::endl;
        }
    }
    return 0;
}
