#include <bits/stdc++.h> 
#define int long long 
#define endl "\n" 
#define all(x) x.begin(), x.end() 
#define pb push_back 
using namespace std;
int32_t main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int mod=1e9+7;
    int n;
    cin>>n;
    while(n--){
        int x,b;
        cin>>x>>b;
        int ans=1;
        x%=mod;
        while(b>0){
            int rem=b%2;
            if(rem==1){
                ans=(ans*x)%mod;
            }
            x=(x*x)%mod;
            b/=2;
        }
        cout<<ans%mod<<endl;
    }
    return 0; 
}