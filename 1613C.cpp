#include<bits/stdc++.h>

using namespace std;

#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define ll long long
#define __NTH__ signed main()
#define N 1000
#define int long long 
void solve(){
    int n,hp,a[N];
    cin>>n>>hp;
    For(i,0,n){
        cin>>a[i];
    }
    if(n==1)  cout<<hp<<"\n";
    else {
        int b[N];
        For(i,0,n-1) b[i]=a[i+1]-a[i];
        int l=0,r=hp+1;
        while(r-l>1){
            //cout<<l<<" "<<r<<"\n";
            int m=(r+l)/2;
            int res=m;
            For(i,0,n-1) res+=min(m,b[i]);
            if(res==hp){
                cout<<m<<"\n";
                return;
            }
            else if(res>hp){
                r=m;
            }
            else l=m;
        }
        cout<<r<<"\n";
    }
}   

__NTH__{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("a1.txt","r",stdin);
    freopen("aaa.txt","w",stdout);
    #endif 
    int numTest;
    cin>>numTest;
    while(numTest--){
        solve();
    }

    cerr<<"Time elapsed : "<<TIME<<".s\n";
    return(0 ^ 0);
}
