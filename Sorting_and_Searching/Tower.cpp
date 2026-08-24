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

    multiset<int>s;
    s.insert(a[0]);
    for(auto i=1;i<n;i++){
        auto b = s.upper_bound(a[i]);
        if(b == s.end()){
            s.insert(a[i]);
        }
        else{
            s.erase(b);
            s.insert(a[i]);
        }
    }

    cout<<s.size()<<endl;
    return 0; 
}