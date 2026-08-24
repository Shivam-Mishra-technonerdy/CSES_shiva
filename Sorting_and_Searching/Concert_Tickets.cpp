#include <bits/stdc++.h> 
#define int long long 
#define endl "\n" 
#define all(x) x.begin(), x.end() 
#define pb push_back 
using namespace std;
int32_t main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    multiset<int>a;
    vector<int>b(m);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.insert(x);
    }
    for(auto &x:b) cin>>x;

    for(int i=0;i<m;i++){
        auto it = a.upper_bound(b[i]);
        if(it == a.begin()){
            cout<<-1<<endl;
        }
        else{
            it--;
            cout<<*(it)<<endl;
            a.erase(it);
        }
    }
    return 0; 
}