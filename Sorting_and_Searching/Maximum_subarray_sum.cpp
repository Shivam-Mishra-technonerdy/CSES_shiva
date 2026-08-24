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
    int mx_sum=LLONG_MIN,curr_sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        curr_sum+=x;
        mx_sum = max(mx_sum,curr_sum);
        if(curr_sum<0) curr_sum=0;
    }
    cout<<mx_sum<<endl;
    return 0; 
}