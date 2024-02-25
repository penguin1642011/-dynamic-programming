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
static ll Hash,base = 131,k,n,a[MAXN],dp[MAXN];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("ROBOT.INP","r",stdin);
    //freopen("ROBOT.OUT","w",stdout);
    static ll tt,xx,y,x,yy,d,j,l,r,lo,rr,i,res,m,ans,cnt;
    string st,ss,stt,sss,str;
    bool ok,b1;
    vector<pair<ll,ll>> vi;
    cin >> n;
    for (i = 1;i <= n;i++){
        cin >> x >> y;
        vi.push_back({x,y});
    }
    sort(vi.begin(),vi.end());
    for (i = 0;i < vi.size();i++){
        res = vi[i].se - vi[i].fi;
        dp[i] = res;
        for (j = 0;j <= i;j++)
        if (vi[i].fi>=vi[j].se)dp[i] = max(dp[i],dp[j]+res);
        ans = max(ans,dp[i]);
    }
    cout << ans;
    return (0^0)&(200+10);
}
/*
0 4
1 2
3 5
4 6
6 8
7 13
9 10
9 12
11 14
14 16
15 19
18 20
4 1 3 6 8 12 9 11 12 14 16 16
*/