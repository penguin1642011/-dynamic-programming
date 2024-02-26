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
static ll Hash,base = 131,k,n,a[MAXN],dp[MAXN][3],b[MAXN];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("ROBOT.INP","r",stdin);
    //freopen("ROBOT.OUT","w",stdout);
    static ll tt,xx,y,x,z,yy,d,j,l,r,lo,rr,i,res,m,ans,cnt;
    string st,ss,stt,sss,str;
    bool ok,b1;
    cin >> n;
    for (i = 1;i <= n;i++)
    cin >> a[i] >> b[i];
    dp[1][1] = a[1];
    dp[1][2] = b[1];
    for (i = 2;i <= n;i++){
        dp[i][1] = max(dp[i-1][1]+abs(b[i]-b[i-1]),dp[i-1][2]+abs(b[i]-a[i-1]))+a[i];
        dp[i][2] = max(dp[i-1][1]+abs(a[i]-b[i-1]),dp[i-1][2]+abs(a[i]-a[i-1]))+b[i];
    }
    cout << max(dp[n][1],dp[n][2]);
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
