#include <bits/stdc++.h> 
#define int long long 
#define endl "\n" 
#define all(x) x.begin(), x.end() 
#define pb push_back 
using namespace std;
int32_t main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
 
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(n),b(m);
    for(auto &x:a) cin>>x;
    for(auto &x:b) cin>>x;
 
    sort(all(a));
    sort(all(b));
    int i=0,j=0,c=0;
    while(i<n && j<m){
        if(b[j] >= (a[i]-k) && b[j] <= (a[i]+k)){
            i++;
            j++;
            c++;
        }
        else if(b[j] < (a[i]-k)){
            j++;
        }
        else if(b[j] > (a[i]+k)){
            i++;
        }
    }
    cout<<c<<endl;
    return 0; 
}
