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
    vector<pair<int,int>>p;
    while(n--){
        int a,b;
        cin>>a>>b;
        p.pb({a,1});
        p.pb({b,-1});
    }
    sort(all(p));
 
    int c=0,mx=INT_MIN;
    for(int i=0;i<p.size();i++){
        c+=p[i].second;
        mx = max(mx,c);
    }
 
    cout<<mx<<endl;
    return 0; 
}
