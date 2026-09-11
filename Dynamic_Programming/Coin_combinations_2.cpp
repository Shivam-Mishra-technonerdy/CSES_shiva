#include <bits/stdc++.h> 
#define endl "\n" 
#define all(x) x.begin(), x.end() 
#define vint vector<int>
#define pb push_back 
using namespace std;
const int mod=1e9+7;
int solve(int n,int x,vint &a){
    vector<vint>dp(n+1,vint(x+1,0));
    dp[0][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=x;j++){
            if(a[i-1]<=j){
                dp[i][j] = (dp[i-1][j]+dp[i][j-a[i-1]])%mod;
            }
            else dp[i][j] = dp[i-1][j];
        }
    }

    return dp[n][x];
}
int32_t main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,x;
    cin>>n>>x;
    vint a(n);
    for(auto &l:a) cin>>l;

    cout<<solve(n,x,a)<<endl;
    return 0; 
}