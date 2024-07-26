#include<bits/stdc++.h>

using namespace std;

#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define ll long long
#define __NTH__ signed main()
#define N 200005


void solve(){
    map<int,int> mp;
    int a[N],n,k;
    cin>>n>>k;
    For(i,0,n) cin>>a[i];
    sort(a,a+n);
    For(i,0,n){
        if(mp[a[i]-k]){
            cout<<"YES\n";
            return;
        }
        mp[a[i]]=1;
    }
    cout<<"NO\n";
}

__NTH__{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("a1.txt","r",stdin);
    freopen("aaa.txt","w",stdout);
    #endif 
    int numtest;cin>>numtest;
    while(numtest--)
    {
        solve();
    }


    cerr<<"Time elapsed : "<<TIME<<".s\n";
    return(0 ^ 0);
}
