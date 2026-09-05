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
    int count=0;
    unordered_set<int>s;
    int i=0;
    for(int j=0;j<n;j++){
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
        count+=(j-i+1);

        s.insert(a[j]);
    }
    cout<<count<<endl;
    return 0; 
}