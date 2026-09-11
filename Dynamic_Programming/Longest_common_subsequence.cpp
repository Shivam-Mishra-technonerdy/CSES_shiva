#include <bits/stdc++.h> 
#define endl "\n" 
#define all(x) x.begin(), x.end() 
#define vint vector<int>
#define pb push_back 
using namespace std;
void solve(vint &a, vint &b, int n,int m){
    vector<vint>dp(n+1,vint(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    vint c;
    int i=n,j=m;
    while(i>0 && j>0){
        if(a[i-1] == b[j-1]){
            c.pb(a[i-1]);
            i--;
            j--;
        }
        else{
            if(dp[i][j-1] > dp[i-1][j]) j--;
            else i--;
        }
    }

    reverse(all(c));
    cout<<dp[n][m]<<endl;
    for(auto &x:c){
        cout<<x<<" ";
    }
    cout<<endl;
}
int32_t main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    vint a(n),b(m);
    for(auto &l:a) cin>>l;
    for(auto &l:b) cin>>l;
    solve(a,b,n,m);
    return 0; 
}