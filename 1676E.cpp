#include<bits/stdc++.h>

using namespace std;

#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define ll long long
#define __NTH__ signed main()
#define N 2000000

void solve(){
    int n,m,a[N];
    cin>>n>>m;
    For(i,0,n){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    //For(i,0,n) cout<<a[i]<<" ";
    int b[N];
    b[0]=a[0];
    For(i,1,n){
        b[i]=b[i-1]+a[i];
    }
    while(m--){
        int res;cin>>res;
        int pos=lower_bound(b,b+n,res)-b;
        if(pos>=n) cout<<"-1\n";
        else cout<<pos+1<<"\n";
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
