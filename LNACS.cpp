#include<bits/stdc++.h>
/*
        penguin yes cop code
        https://codeforces.com/profile/Tuanhaiphong2
*/
using namespace std;
#define ll long long
#define fi first
#define se second
#define MOD 1000000007
const int MAXN = 4e5+7;
vector<ll> topo;
static ll in[1000];
ll dx[8] = {-1,0,0,1,-1,-1,1,1};
ll dy[8] = {0,-1,1,0,-1,1,-1,1};
static ll Hash,base = 131,k,n,a[MAXN],b[MAXN],dp[1007][1007];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("ROBOT.INP","r",stdin);
    //freopen("ROBOT.OUT","w",stdout);
    static ll tt,xx,y,x,z,yy,d,j,l,r,lo,rr,i,res,m,ans,index,note,cnt;
    string ss,stt,sss,str,st,s;
    cin >> n >> m;
    n++;
    m++;
    for (i = 2;i <= n;i++)
    cin >> a[i];
    for (i = 2;i <= m;i++)
    cin >> b[i];
    for (i = 2;i <= n;i++){
        for (j = 2;j <= m;j++){
            if (a[i]==b[j])dp[i][j] = dp[i-2][j-2]+1;
            dp[i][j] = max({dp[i][j],dp[i-1][j],dp[i][j-1]});
        }
    }
    cout << dp[n][m];
    return (0^0)&(200+10);
}
/*
  4 9 2 4
1 0 0 0 0
9 0 1 1 1
7 0 1 1 1
3 0 1 1 1
4 0 1 1 2
*/
