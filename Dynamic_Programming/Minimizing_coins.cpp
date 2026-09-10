#include <bits/stdc++.h> 
#define endl "\n" 
#define all(x) x.begin(), x.end() 
#define vint vector<int>
#define pb push_back 
using namespace std;
int solve(int n,int x,vint &a){
    vector<vint>dp(2,vint(x+1,0));
    int row=0;
    for(int i=1;i<=x;i++){
        dp[row][i]=INT_MAX-1;
    }
    for(int i=1;i<=n;i++){
        row^=1;
        for(int j=0;j<=x;j++){
            if(a[i-1] <= j){
                dp[row][j] = min(dp[row^1][j],1+dp[row][j-a[i-1]]);
            }
            else dp[row][j] = dp[row^1][j];
        }
    }

    return dp[row][x] == INT_MAX-1 ? -1 : dp[row][x];
}
int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin>>n>>x;
    vint a(n);
    for(auto &x:a) cin>>x;
    cout<<solve(n,x,a)<<endl;
    return 0; 
}