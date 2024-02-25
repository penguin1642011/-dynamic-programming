#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define MOD 1000000007
const int MAXN = 4e5;
vector<ll> adj[10007];
vector<ll> topo;
bool visited[107][107];
static ll in[1000];
ll dx[8] = {-1,0,0,1,-1,-1,1,1};
ll dy[8] = {0,-1,1,0,-1,1,-1,1};
static ll Hash,base = 131,dem,k,n,a[MAXN],dp[MAXN],pre[MAXN],f[10][10];
ll bs(ll l,ll r,ll value){
    ll ans = -1;
    while(l<=r){
        ll mid = (l+r)/2;
        if (a[mid]>value){
            ans = mid;
            r = mid - 1;
        }else l = mid + 1;
    }
    if (ans=-1) return l;
    return ans+1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("ROBOT.INP","r",stdin);
    //freopen("ROBOT.OUT","w",stdout);
    static ll tt,xx,y,x,yy,d,j,l,r,lo,rr,i,res,m,ans,cnt,n,k;
    string st,ss,stt,sss,str;
    bool ok,b1;
    for (i = 1;i <= 2;i++){
        for (j = 1;j <= 3;j++)
        cin >> f[i][j];
    }
    cin >> n >> l >> r;
    for (i = 2;i <= n;i++)
    cin >> a[i];
    for (i = l+1;i <= r;i++){
        dp[i] = 1e18;
        for (j = 1;j <= 3;j++){
            ll index = bs(l,i,a[i] - f[1][j]);
            dp[i] = min(dp[i],dp[index]+f[2][j]);
        }
    }
    //for (i = 1;i <= n;i++)
    //cout << dp[i] << ' ';
    cout << dp[r];
    return (0^0)&(200+10);
}
/*
9 5 6
10 7 6 7 9 7 7 10 10
0  2 1 2 4 2 2  0  0
4  1 0 1 3 1 1  4  4
0  0 0 0 0 0 0  1  3
*/