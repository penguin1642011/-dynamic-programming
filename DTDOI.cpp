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
    ll s;
    cin >> n >> s;
    for (i = 1;i <= n;i++)
    cin >> a[i];
    sort(a+1,a+1+n);
    if (s>=20000){
        ans = (s-20000)/a[n];
        s-=ans*a[n];
    }
    for (i = 1;i <= s;i++){
        dp[i] = 1e18;
        for (j = 1;j <= n;j++)
        if (a[j]<=i)dp[i] = min(dp[i],dp[i-a[j]]+1);
        else break;
    }
    cout << ans+dp[s];
    return (0^0)&(200+10);
}
/*
9 5 6
10 7 6 7 9 7 7 10 10
0  2 1 2 4 2 2  0  0
4  1 0 1 3 1 1  4  4
0  0 0 0 0 0 0  1  3
*/
