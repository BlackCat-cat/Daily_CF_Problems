#include<bits/stdc++.h>
#define endl '\n'
using i64 = long long;
using u64 = unsigned long long;
using d64 = double;
using ld64 = long double;
void solve(){
    int n;
    std::cin>>n;
    std::vector<int> a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    auto b=a;
    std::sort(b.begin(),b.end());
    int ans=0;
    i64 sum=0;
    for(int i=0;i<n;i++){
        sum+=(b[i]-a[i]);
        ans+=(sum==0);
    }
    std::cout<<ans<<endl;
}
signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}
