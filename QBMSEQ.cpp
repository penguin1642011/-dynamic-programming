#include<bits/stdc++.h>
/*
        penguin yes cop code
        https://codeforces.com/profile/Tuanhaiphong2
*/
using namespace std;
#define x1 o1
#define x2 o2
#define y1 o3
#define y2 o4
#define ll long long
#define fi first
#define se second
#define MOD 1000000007
const int MAXN = 4e5+7;
vector<ll> topo;
static ll in[1000];
ll dx[8] = {-1,0,0,1,-1,-1,1,1};
ll dy[8] = {0,-1,1,0,-1,1,-1,1};
static ll Hash,ans,base = 131,k,n,a[MAXN],m,b[MAXN],dp[MAXN],o1,o2,o3,o4;
map<ll,bool> f;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("ROBOT.INP","r",stdin);
    //freopen("ROBOT.OUT","w",stdout);
    static ll tt,xx,y,x,z,yy,d,j,l,r,lo,rr,i,res,index,note,cnt;
    string ss,stt,sss,str,st,s;
    cin >> n;
    for (i = 1;i <= n;i++)
    cin >> a[i];
    k = 14141;
    for (i = 2;i <= k;i++)
    f[i*(i+1)/2] = true;
    for (i = 1;i <= n;i++){
        if (f[a[i]])dp[i] = 1;
        else dp[i] = -1;
        if (f[a[i]]&&dp[i-1]>=0&&a[i]>=a[i-1])dp[i] = dp[i-1]+1;
        ans = max(ans,dp[i]);
        //cout << dp[i] << ' ';
    }
    cout << ans;
    return (0^0)&(200+10);
}
/*
  4 9 2 4
1 0 0 0 0
9 0 1 1 1
7 0 1 1 1
3 0 1 1 1
4 0 1 1 2
5 6
-2 3 2 3 3
-2 1 3 7 10
 T
*/
