
#include<bits/stdc++.h>

using namespace std;

#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define ll long long
#define __NTH__ signed main()
#define N 100

void solve(){
    set<char> se;
    string s;
    int n,res=0;
    cin>>n;
    cin.ignore();
    cin>>s;
    For(i,0,n){
        if(se.count(s[i])) res++;
        else res+=2;
        se.insert(s[i]);
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

