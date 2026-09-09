#include <bits/stdc++.h> 
#define int long long 
#define endl "\n" 
#define all(x) x.begin(), x.end() 
#define vint vector<int>
#define pb push_back 
using namespace std;
int mod = 1e9+7;
int32_t main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vint a(1e6+1);
    a[0]=1;
    int sum=1;
    int idx=0;
    for(int i=1;i<1e6+1;i++){
        a[i]=sum;
        if(i>=6){
            sum = (sum-a[idx++]+mod)%mod;
        }
        sum=(sum+a[i])%mod;
    }
    cout<<a[n]<<endl;
    return 0; 
}
