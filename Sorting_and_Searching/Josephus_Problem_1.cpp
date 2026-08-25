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
    vector<int>a;
    for(int i=1;i<=n;i++){
        if(i%2 == 0) cout<<i<<" ";
        else a.pb(i);
    }
    if(n == 2){
        cout<<1<<endl;
    }
    else{
        vector<bool>b(a.size(),false);
        if(n%2 != 0){
            int c=0,co=0,idx=0;
            while(co < a.size()){
                if(b[idx] == false && c==0){
                    cout<<a[idx]<<" ";
                    b[idx]=true;
                    idx=(idx+1)%a.size();
                    c=1;
                    co++;
                }
                else if(c>0 && b[idx]==false){
                    idx=(idx+1)%a.size();
                    c--;
                }
                else idx=(idx+1)%a.size();
            }
        }
        else{
            int c=0,co=0,idx=1;
            while(co < a.size()){
                if(b[idx]==false && c==0){
                    cout<<a[idx]<<" ";
                    b[idx]=true;
                    idx = (idx+1)%a.size();
                    c=1;
                    co++;
                }
                else if(c>0 && b[idx]==false){
                    idx = (idx+1)%a.size();
                    c--;
                }
                else idx = (idx+1)%a.size();
            }
        }
    }
    return 0; 
}