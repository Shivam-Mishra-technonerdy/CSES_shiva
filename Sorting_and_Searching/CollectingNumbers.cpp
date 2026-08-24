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
    vector<pair<int,int>>a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.pb({x,i});
    }
    sort(all(a));
    int ans=1;
    for(int i=1;i<n;i++){
        if(a[i].second < a[i-1].second) ans++;
    }
    cout<<ans<<endl;
    return 0; 
}