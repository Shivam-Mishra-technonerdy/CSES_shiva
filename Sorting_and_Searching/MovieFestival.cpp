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
        p.pb({b,a});
    }
    sort(all(p));
    int c=1;
    int prev=p[0].first;
    for(int i=1;i<p.size();i++){
        if(p[i].second >= prev){
            c++;
            prev=p[i].first;
        }
    }
    cout<<c<<endl;
    return 0; 
}
