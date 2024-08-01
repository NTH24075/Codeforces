#include<bits/stdc++.h>

using namespace std;

#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define ll long long
#define __NTH__ signed main()
#define N 1000
#define int long long
#define M 998244353

void solve(){

}
int a[N];
__NTH__{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("a1.txt","r",stdin);
    freopen("aaa.txt","w",stdout);
    #endif 
    
    int k=1;a[1]=1;
    for(int i=2;i<=N/2;i++){
        a[i]=a[i-1]*i;
        a[i]%=M;
    }
    //For(i,1,N/2) cout<<a[i]<<"\n";
    int numTest;
    cin>>numTest;
    while(numTest--)
    {
        int n;
        cin>>n;
        if(n%2!=0) cout<<"0\n";
        else cout<<(a[n/2]*a[n/2])%M<<"\n";
    }
    cerr<<"Time elapsed : "<<TIME<<".s\n";
    return(0 ^ 0);
}
