#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,x,y) for(int i=x;i<y;i++)
int32_t main(){
    int t;
    
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int z=n-k+1;
        if(n==k){
            cout<<"YES"<<endl;
            cout<<1<<endl;
            cout<<1<<endl;
        }
        else if(k>n){
            cout<<"NO"<<endl;
        }
        else{
            int v=n/z;
            if(v+k-1==k){
                cout<<"YES"<<endl;
                cout<<2<<endl;
                cout<<z<<" "<<1<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}