#include <bits/stdc++.h> 
#define int long long 
#define endl "\n" 
#define all(x) x.begin(), x.end() 
#define pb push_back 
using namespace std;
int32_t main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int n,x;
    cin>>n>>x;
    vector<int>a(x);
    for(auto &x:a) cin>>x;

    set<int>s;
    s.insert(0);
    s.insert(n);
    multiset<int>m;
    m.insert((n-0));
    for(auto &x:a){
        auto p = s.upper_bound(x);
        int a = *p;
        int b = *(--p);
        int old = a-b;
        auto c = m.find(old);
        m.erase(c);

        s.insert(x);
        m.insert(a-x);
        m.insert(x-b);

        cout<<*(m.rbegin())<<" ";
    }
    cout<<endl;
    return 0; 
}