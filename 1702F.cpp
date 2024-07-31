#include<bits/stdc++.h>

using namespace std;

#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define ll long long
#define __NTH__ signed main()
#define N 200005


void solve(){
    map<int,int> mp;
    int n,x,a[N];
    cin>>n;
    For(i,0,n) {
        cin>>x;
        while(x%2==0 && x!=0) x/=2;
        mp[x]++;
    }
    For(i,0,n)
        cin>>a[i];
    For(i,0,n){
        //while(x%2==0) x/=2;
        x=a[i];
        if(mp[x]) {
            mp[x]--;
        }
        else {
            while(1){
                //cout<<x<<"\n";
                x/=2;
                if(mp[x]){
                    mp[x]--;break;
                }
                if(x==0){
                    cout<<"NO\n";
                    return;
                }
            }
        }
        
    }
    cout<<"YES\n";
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
