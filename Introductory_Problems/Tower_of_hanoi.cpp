#include <bits/stdc++.h> 
#define endl "\n" 
#define int long long
#define all(x) x.begin(), x.end() 
#define vint vector<int>
#define vpint vector<pair<int,int>>
#define pb push_back 
using namespace std;
void solve(int n,int s,int d,int a,vpint &c){
    if(n==1){
        c.pb({s,d});
        return;
    }

    solve(n-1,s,a,d,c);
    c.pb({s,d});
    solve(n-1,a,d,s,c);
}
int32_t main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vpint c;
    solve(n,1,3,2,c);
    cout<<c.size()<<endl;
    for(auto &x:c){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0; 
}