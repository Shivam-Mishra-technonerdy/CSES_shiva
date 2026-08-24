#include <bits/stdc++.h> 
#define int long long 
#define endl "\n" 
#define all(x) x.begin(), x.end() 
#define pb push_back 
using namespace std;

int32_t main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &x:a) cin>>x;

    sort(all(a));
    int t = a[n/2];
    int ans = 0;
    for(auto &x:a){
        ans += (abs(x-t));
    }
    cout<<ans<<endl;
    return 0; 
}