#include<bits/stdc++.h>

using namespace std;

#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define ll long long
#define __NTH__ signed main()
#define N 100
#define M 1000000007
#define int long long   
ll pow2(int a,int b){
    ll s=1;
    while(b){
        if(b&1){
            s*=a;
            s%=M;
        }
        a*=a;
        a%=M;
        b/=2;
    }
    return s;
}
void solve(){
    int a,b;
    cin>>a>>b;
    //bitset<21> n(b);
    int s=0;
    For(i,0,21){
        if(((b>>i)&1)) {
            //cout<<i<<"\n";
            s+=pow2(a,i);
            s%=M;
        }
    }
    cout<<s<<"\n";
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
