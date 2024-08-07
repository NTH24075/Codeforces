#include<bits/stdc++.h>
 
using namespace std;
 
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define ll long long
#define __NTH__ signed main()
#define N 10005
 
void solve(){
 
}
bool cmp(pair<int,int> a, pair<int,int> b){
    return a.first<b.first;
    return a.second>b.second;
}
 
__NTH__{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("a1.txt","r",stdin);
    freopen("aaa.txt","w",stdout);
    #endif 
    int n,s,x,y;
    pair<int,int> p[N];
    cin>>s>>n;
    For(i,0,n){
        cin>>x>>y;
        p[i].first=x;
        p[i].second=y;
    }
    sort(p,p+n,cmp);
    For(i,0,n){
        if(s>p[i].first) s+=p[i].second;
        else {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    cerr<<"Time elapsed : "<<TIME<<".s\n";
    return(0 ^ 0);
}
