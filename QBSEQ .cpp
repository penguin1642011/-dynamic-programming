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
const int MOD = 998244353;
const int MAXN = 1e3+7;
vector<ll> topo;
static ll in[1000];
ll dx[8] = {-1,0,0,1,-1,-1,1,1};
ll dy[8] = {0,-1,1,0,-1,1,-1,1};
static ll Hash,ans,base = 131,k,n,b[MAXN],a[MAXN],pre[MAXN],dp[MAXN][50],m,o1,o2,o3,o4;
//mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("ROBOT.INP","r",stdin);
    //freopen("ROBOT.OUT","w",stdout);
    static ll tt,xx,y,x,z,yy,d,j,l,r,lo,rr,i,res,index,note,cnt;
    string ss,stt,sss,str,s,st;
    cin >> n >> k;
    for (i = 1;i <= n;i++){
        cin >> a[i];
        a[i]%=k;
        res+=a[i];
    }
    for (i = 1;i <= k;i++)
    dp[0][i] = 1e18;
    for (i = 1;i <= n;i++){
        for (j = 0;j < k;j++)
        dp[i][j] = min(dp[i-1][j],dp[i-1][(j-a[i]+k)%k]+1);
        ans+=a[i];
    }
    cout << n-dp[n][res%k];
    return (0^0)&(200+10);
}
/*
ඞඞඞඞඞ
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

 5
5 5 5 4 5
4 5 5 5 5
    1 1 1

1 2 4 5 20
0 1 
5
1 2 3 1 2
3
1
2 3 5 7
2 7
5 7
3
2 7 3
5 7 3

  2 3 5 7
0 0 1 1 
1 0 1
2 1 1
*/ 