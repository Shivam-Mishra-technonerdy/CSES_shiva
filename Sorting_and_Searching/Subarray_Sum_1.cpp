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
    vector<int>a(n);
    for(auto &x:a) cin>>x;

    for(int i=1;i<n;i++){
        a[i]+=a[i-1];
    }
    int count=0;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            count++;
        }
        int tar = a[i]-x;
        if(m.find(tar) != m.end()) count+=m[tar];
        m[a[i]]++;
    }
    cout<<count<<endl;
    return 0; 
}