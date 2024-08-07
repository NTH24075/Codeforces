#include<bits/stdc++.h>

using namespace std;

#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define ll long long
#define __NTH__ signed main()
#define N 100

void solve(){
    ll n=7,a[10];
    For(i,0,n) cin>>a[i];
    cout<<a[0]<<" "<<a[1]<<" ";
    if(a[0]+a[1]!=a[2]) cout<<a[2]<<"\n";
    else cout<<a[3]<<"\n";
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
