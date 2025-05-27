#include<bits/stdc++.h>
#define endl '\n'
using i64 = long long;
using u64 = unsigned long long;
using d64 = double;
using ld64 = long double;
void solve(){
    int n;
    std::cin>>n;
    i64 k,b;
    std::set<ld64> s;
    for(int i=0;i<n;i++){
        std::cin>>k>>b;
        if(k==0){
            continue;
        }
        s.insert((ld64)-b/k);
    }
    std::cout<<s.size()<<endl;

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
