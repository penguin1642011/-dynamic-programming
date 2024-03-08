#include<bits/stdc++.h>
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
static ll Hash,base = 131,k,n,a[MAXN],dp[2007][2007];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("ROBOT.INP","r",stdin);
    //freopen("ROBOT.OUT","w",stdout);
    static ll tt,xx,y,x,z,yy,d,j,l,r,lo,rr,i,res,m,ans,index,note,cnt;
    string ss,stt,sss,str,s,st;
    cin >> s >> st;
    s = '$'+s;
    st = '$'+st;
    for (i = 1;i < s.size();i++){
        for (j = 1;j < st.size();j++){
            if (st[j]==s[i])dp[i][j] = dp[i-1][j-1]+1;
            else dp[i][j] = max({dp[i][j],dp[i-1][j],dp[i][j-1]});
        }
    }
    cout << dp[s.size()-1][st.size()-1];
    return (0^0)&(200+10);
}
/*
$ abc1def2ghi3
a 111111111111
b 122222222222
c 1233333333
d
e
f
g
h
i
1
2
3
*/