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
static ll Hash,base = 131,k,n,a[MAXN],dp[MAXN],b[MAXN],f[MAXN];
vector<pair<ll,ll>> vi;
ll bs(ll l,ll r,ll value){
    ll ans = 0;
    while(l<=r){
        ll mid = (l+r)/2;
        if (vi[mid].fi<=value){
            ans = mid;
            l = mid+1;
        }else r = mid-1;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("ROBOT.INP","r",stdin);
    //freopen("ROBOT.OUT","w",stdout);
    static ll tt,xx,y,x,z,yy,d,j,l,r,lo,rr,i,res,m,ans,cnt;
    string st,ss,stt,sss,str;
    bool ok,b1;
    cin >> n >> k;
    for (i = 1;i <= n;i++)
    cin >> a[i];
    for (i = 1;i <= n;i++){
        cin >> b[i];
        vi.push_back({a[i],b[i]});
    }
    vi.push_back({-1e18,1e18});
    sort(vi.begin(),vi.end());
    for (i = 1;i < vi.size();i++){
        ll index = bs(0,i-1,vi[i].fi-k);
        dp[i] = max(dp[i-1],f[index]+vi[i].se);
        f[i] = max(f[i-1],dp[i]);
    }
    cout << dp[n];
    return (0^0)&(200+10);
}
/*
$ bobseesanna
b 10100000000
o  1000000000
b   100000000
s    10010000
e     1100000
e      100000
s       10000
a        1001
n         110
n          10
a           1
*/