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

    int i=0;
    set<int>s;
    s.insert(a[0]);
    int mx=1;
    for(int j=1;j<n;j++){
        if(s.find(a[j]) != s.end()){
            while(true){
                s.erase(a[i]);
                if(a[i]==a[j]){
                    i++;
                    break;
                }
                i++;
            }
        }
        mx = max(mx,j-i+1);
        s.insert(a[j]);
    }
    cout<<mx<<endl;
    return 0; 
}