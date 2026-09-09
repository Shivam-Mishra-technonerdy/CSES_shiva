#include<bits/stdc++.h> 
#define int long long 
#define endl "\n" 
#define all(x) x.begin(), x.end() 
#define vint vector<int>
#define pb push_back 
using namespace std;
bool isValid(vint &a,int n,int k,int mx){
    int div=1,part=0;
    for(auto &x:a){
        if(x > mx) return false;
 
        if(part+x <= mx) part+=x;
        else{
            div++;
            part=x;
        }
    }
    return div > k ? false:true;
}
int solve(vint &a,int n,int k){
    int sum = accumulate(all(a),0LL);
    int st=0,end=sum;
    int ans=-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(isValid(a,n,k,mid)){
            ans = mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}
int32_t main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vint a(n);
    for(auto &x:a) cin>>x;
    cout<<solve(a,n,k)<<endl;
    return 0; 
}