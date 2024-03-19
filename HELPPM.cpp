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
static ll Hash,ans,base = 131,k,n,a[507][507],m,b[MAXN],dp[5007][5007],pre[507][507],o1,o2,o3,o4;
void check(ll i,ll j){
    ll l = 1,r = 1,sum = 0;
    while(r<=m){
        if (sum>=k){
            if (ans>(j-i+1)*(r-l)){
                ans = (j-i+1)*(r-l);
                x1 = i;
                y1 = l;
                x2 = j;
                y2 = r-1;
                //cout << sum << ' ';
                //cout << i << ' ' << l << ' ' << j << ' ' << r << '\n';
            }
            sum-=pre[j][l] - pre[i-1][l];
            l++;
        }else {
            sum+=pre[j][r]-pre[i-1][r];
            r++;
        }
        //cout << sum << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("ROBOT.INP","r",stdin);
    //freopen("ROBOT.OUT","w",stdout);
    static ll tt,xx,y,x,z,yy,d,j,l,r,lo,rr,i,res,index,note,cnt;
    string ss,stt,sss,str,st,s;
    cin >> n >> m >> k;
    for (i = 1;i <= n;i++){
        for (j = 1;j <= m;j++)
        cin >> a[i][j];
    }
    for (i = 1;i <= n;i++){
        for (j = 1;j <= m;j++){
            pre[i][j] = pre[i-1][j]+a[i][j];
            //preD1[i][j] = preD1[i-1][j]+a[i][j];
            //preD2[i][j] = preD2[i][j-1]+preD1[i-1][j];
        }
    }
    ans = 1e18;
    for (l = 1;l <= n;l++){
        for (r = l;r <= n;r++)
        check(l,r);
    }
    if (ans==1e18)cout << -1;
    else {
    cout << ans << '\n';
    cout << x1 << ' ' << y1 << ' ' << x2 << ' ' << y2;
    }
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
