#include<bits/stdc++.h>

using namespace std;

#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define ll long long
#define __NTH__ signed main()
#define N 100
priority_queue<int> q[5];
int f(int x) {
    if(x==0) return 0;
    return f(x/10)+1;
}
void solve() {
    int n;
    cin>>n;
    int a;
    For(i,0,n) {
        cin>>a;
        q[0].push(a);
    }
    For(i,0,n) {
        cin>>a;
        q[1].push(a);
    }
    int cnt=0;
    while(q[0].size()) {
        //cout<<q[0].size()<<"\n";
        if(q[0].top()==q[1].top()) {
            q[0].pop();
            q[1].pop();
        }
        else if(q[0].top()>q[1].top()) {
            int a=f(q[0].top());
            q[0].pop();
            q[0].push(a);
            cnt++;
        }
        else if(q[0].top()<q[1].top()) {
            int a=f(q[1].top());
            q[1].pop();
            q[1].push(a);
            cnt++;
        }
    }
    cout<<cnt<<"\n";
}
__NTH__{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("a1.txt","r",stdin);
    freopen("aaa.txt","w",stdout);
    #endif 
    int numTest;
    cin>>numTest;
    while(numTest--) {
        solve();
    }

    cerr<<"Time elapsed : "<<TIME<<".s\n";
    return(0 ^ 0);
}
