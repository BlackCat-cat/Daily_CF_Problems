#include<bits/stdc++.h>
#define endl '\n'
using i64=long long;
using u64=unsigned long long;
using d64=double;
using ld64=long double;

void solve(){
    int n;
    std::cin>>n;
    std::vector<std::pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i].first>>a[i].second;
    }
    if(n<3){
        std::cout<<0<<endl;
        return;
    }
    i64 ans=1ll*(n)*(n-1)*(n-2)/6;;
    for(int i=0;i<n;i++){
        std::map<std::pair<int,int>,int> mp;
        for(int j=i+1;j<n;j++){
            int dx=a[j].first-a[i].first;
            int dy=a[j].second-a[i].second;

            int g=std::gcd(dx,dy);
            dx/=g;
            dy/=g;

            if(dx<0||(dx==0&&dy<0)){
                dx=-dx,dy=-dy;
            }
            mp[{dx,dy}]++;
        }
        for(auto [x,y]:mp){
            ans-=1ll*(y)*(y-1)/2;
        }
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
