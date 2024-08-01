#include<bits/stdc++.h>

using namespace std;

#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define ll long long
#define __NTH__ signed main()
#define M 1000000007
#define int long long
ll pow2(ll a,ll b){
    ll s=1;
    while(b){
        if(b%2!=0){
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
    int n;
    cin>>n;
    ll s=(long long)pow(2,n);
    cout<<(6*pow2(4,s-2))%M;
}

__NTH__{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("a1.txt","r",stdin);
    freopen("aaa.txt","w",stdout);
    #endif 
    int numTest=1;
    //cin>>numTest;
    while(numTest--){
        solve();

    }

    cerr<<"Time elapsed : "<<TIME<<".s\n";
    return(0 ^ 0);
}
