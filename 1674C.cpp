#include<bits/stdc++.h>

using namespace std;

#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define ll long long
#define __NTH__ signed main()
#define N 100
ll pow2(ll a,ll b){
    ll s=1;
    while(b){
        if(b%2!=0){
            s*=a;
        }
        a*=a;
        b/=2;
    }
    return s;
}
bool check(string a){
    int ok=0;
    For(i,0,a.size()){
        if(a[i]=='a') {
            ok=1;break;
        }
    }
    if(ok==1 && a.size()>1) return 1;
    return 0;
}
void solve(){
    string a,b;
    cin>>a>>b;
    if(b=="a") cout<<"1\n";
    else if(check(b)) cout<<"-1\n";
    else cout<<pow2(2,a.size())<<"\n";
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
