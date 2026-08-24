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
    int sum = accumulate(all(a),0LL);
    sum-=a[n-1];
    if(sum >= a[n-1]){
        cout<<(sum+=a[n-1])<<endl;
    }
    else{
        cout<<(2*a[n-1])<<endl;
    }
    return 0; 
}