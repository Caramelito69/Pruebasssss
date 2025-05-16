#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    ll a,b;
    while (cin>>b>>a)
    {
        ll num,veces;
        if(a%b==0) num=(ll(a/b)%9),veces=b-1;
        else num=(ll(a/b)%9)+1,veces=(a%b)-1;
        if(num==0)num=9;
        fore(i,1,b-veces)cout<<(num);
        fore(i,1,veces)cout<<(num%9)+1;
        cout<<endl;
    }
}
int main()
{
    solve();
}
