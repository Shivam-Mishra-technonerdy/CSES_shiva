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
    vector<int>p(n);
    for(auto &x:p) cin>>x;
 
    sort(all(p));
    int i=0,j=n-1;
    int c=0;
    while(i<j){
        if(p[i]+p[j] <= x){
            i++;
            j--;
        }
        else{
            if(p[i] >= p[j]){
                i++;
            }
            else{
                j--;
            }
        }
        c++;
    }
    if(i==j ) c++;
    cout<<c<<endl;
 
    return 0; 
}
