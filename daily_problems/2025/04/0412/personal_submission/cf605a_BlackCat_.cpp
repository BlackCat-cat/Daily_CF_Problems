#include<bits/stdc++.h>
#define endl '\n'
using i64 = long long;
using u64 = unsigned long long;
using d64 = double;
using ld64 = long double;
void solve(){
    int n;
    std::cin>>n;
    std::vector<int>a(n);
    for(auto &x:a){
        std::cin>>x;
    }
    std::vector<int> b(n+1,0);
    b[a[0]]=1;
    i64 ans=1;
    for(int i=1;i<n;i++){
        b[a[i]]=b[a[i]-1]+1;
    }
    std::cout<<n-std::ranges::max(b)<<endl;
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
