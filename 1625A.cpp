#include<bits/stdc++.h>

using namespace std;

#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define ll long long
#define __NTH__ signed main()
#define N 100

void solve(){
    int n,l,a[N],res=0; cin>>n>>l;
    For(i,0,n) cin>>a[i];
    For(i,0,l){
        int cnt[2]={};
        For(j,0,n) cnt[(a[j]>>i)&1]++;
        if(cnt[1]>cnt[0]) res+=pow(2,i);
    }
    cout<<res<<"\n";
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
