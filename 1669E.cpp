#include<bits/stdc++.h>

using namespace std;

#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define ll long long
#define __NTH__ signed main()
#define N 100
#define int long long
int a[200];
int b[200];
map<string,int> mp;
void solve(){
    mp.clear();
    string s;
    int n,res=0;
    cin>>n;
    For(i,0,20){
        a[i]=0;
        b[i]=0;
    }
    For(i,0,n){
        cin>>s;
        res+=a[s[0]-'a']+b[s[1]-'a']-2*mp[s];
        a[s[0]-'a']+=1;
        b[s[1]-'a']+=1;
        mp[s]++;
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
