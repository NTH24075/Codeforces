#include<bits/stdc++.h>

using namespace std;

#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define ll long long
#define __NTH__ signed main()
#define N 200005
set<int> verti;
vector<int> ans;
set<int> v[N];
queue<int> q;
int n,m;
void solve(){
    
    For(i,1,n+1){   
        if(verti.count(i)){
            int cnt=0;
            verti.erase(i);
            q.push(i);
            while(!q.empty()){
                int tp=q.front();
                q.pop();
                cnt++;
                vector<int> del;
                for(int x:verti){
                    if(v[tp].count(x)==0){
                        q.push(x);
                        del.push_back(x);
                    }
                }
                for(int x:del ) verti.erase(x);
            }
        ans.push_back(cnt);
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<"\n";
    for(int x: ans) cout<<x<<" ";
}

__NTH__{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("a1.txt","r",stdin);
    freopen("aaa.txt","w",stdout);
    #endif 
    cin>>n>>m;int a,b;
    while(m--){
        cin>>a>>b;
        v[a].insert(b);
        v[b].insert(a);
    }
    For(i,1,n+1) verti.insert(i);
    solve();
    cerr<<"Time elapsed : "<<TIME<<".s\n";
    return(0 ^ 0);
}
