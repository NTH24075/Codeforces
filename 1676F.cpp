#include<bits/stdc++.h>

using namespace std;

#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define ll long long
#define __NTH__ signed main()
#define N 100
#define int long long

void solve(){
    int x;
    map<int,int> mp;
    mp.clear();
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
    }
    int s;
    vector<int> v;
    for(pair<int,int> p : mp) {
        if(p.second>=k){
            v.push_back(p.first);
            s=p.first;
        }
    }
    
    if(v.size()==0) cout<<"-1\n";
    else {
        v.push_back(s+2);
        //for(int i=0;i<v.size();i++) cout<<v[i]<<"\n"; 
        int cnt=1,cntm=-1,a=v[0];
        for(int i=1;i<v.size();i++){
            if(v[i]-v[i-1]==1 ) cnt++;
            else {
                if(cntm<=cnt){
                    cntm=cnt;
                    a=v[i-cnt];
                }
                cnt=1;
            }
            //cout<<a<<" "<<cntm<<"\n";
        }
        cout<<a<<" "<<a+cntm-1<<"\n";
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
