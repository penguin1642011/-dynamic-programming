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
static ll Hash,base = 131,k,n,a[MAXN],b[MAXN],dp[5007][5007],pre[MAXN];
bool visited[MAXN];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("ROBOT.INP","r",stdin);
    //freopen("ROBOT.OUT","w",stdout);
    static ll tt,xx,y,x,z,yy,d,j,l,r,lo,rr,i,res,m,ans,index,note,cnt;
    string ss,stt,sss,str,st,s;
    cin >> n >> k;
    ll MIN = 1e18;
    for (i = 1;i <= n;i++){
        cin >> a[i];
        pre[i] = pre[i-1]+a[i];
        if (MIN>pre[i]){
            visited[i] = true;
            MIN = pre[i];
        }
    }
    visited[0] = true;
    ans = -1;
    index = n;
    for (i = n;i >= 0;i--)
    if (visited[i]){
        for (j = index;j >= i+1;j--)
        if (pre[j]-pre[i]>=k){
            if(ans<j-i){
                ans = j - i;
                index = j;
                break;
            }
        }
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
-2 -1 2 10 3
-2 -3 -1 9 12
 T
*/
