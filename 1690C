#include<bits/stdc++.h>

using namespace std;

#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define ll long long
#define __NTH__ signed main()
#define N 200005

int a[N],b[N],n;
void solve(){
    cin>>n;
    a[0]=0;
    b[0]=0;
    For(i,1,n+1) cin>>a[i];
    For(i,1,n+1) cin>>b[i];
    For(i,1,n+1) {
        if(a[i]>= b[i-1]) cout<<b[i]-a[i]<<" ";
        else {
            if(b[i]>b[i-1]) cout<<b[i]-b[i-1]<<" ";
            else cout<<"0";
        }
    }
    cout<<"\n";
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
