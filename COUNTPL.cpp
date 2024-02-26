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
static ll Hash,base = 131,k,n,a[MAXN],f[MAXN],b[MAXN];
bool dp[1007][1007];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("ROBOT.INP","r",stdin);
    //freopen("ROBOT.OUT","w",stdout);
    static ll tt,xx,y,x,z,yy,d,j,l,r,lo,rr,i,res,m,ans,cnt;
    string st,ss,stt,sss,str;
    bool ok,b1;
    cin >> st;
    for (i = 0;i < st.size();i++)dp[i][i] = true;
    for (i = 1;i <= st.size();i++){
        for (j = 0;j < st.size()-i;j++)
        if (st[j]==st[j+i]){
            if (j+1==j+i||dp[j+1][j+i-1])dp[j][j+i] = true;
        }
    }
    for (i = 0;i < st.size();i++){
        f[i] = 1e18;
        for (j = 0;j < i;j++)
        if (dp[j+1][i])f[i] = min(f[i],f[j]+1);
        if (dp[0][i])f[i] = 1;
    }
    cout << f[st.size()-1];
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
