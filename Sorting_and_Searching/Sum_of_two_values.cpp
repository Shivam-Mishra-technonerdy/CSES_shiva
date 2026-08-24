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
    vector<pair<int,int>>a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.pb({x,i+1});
    }
    sort(all(a));
    bool isP=false;
    int i=0,j=n-1;
    while(i<j){
        if(a[i].first+a[j].first == x){
            isP=true;
            break;
        }
        else if(a[i].first+a[j].first > x){
            j--;
        }
        else i++;
    }
 
    if(isP){
        cout<<a[i].second<<" "<<a[j].second<<endl;
    }
    else cout<<"IMPOSSIBLE"<<endl;
    return 0; 
}
