#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define MOD 1000000007
const int MAXN = 1e6+7;
vector<ll> topo;
static ll in[1000];
ll dx[8] = {-1,0,0,1,-1,-1,1,1};
ll dy[8] = {0,-1,1,0,-1,1,-1,1};
static ll Hash,base = 131,k,n,a[MAXN],b[MAXN],dp[2007][2007];
string st,s = "1";
string truyvet(ll i,ll j){
    if (i==j){
        s[0] = st[i];
        return s;
    }
    if (st[i]==st[j])return st[i]+truyvet(i+1,j-1)+st[j];
    if (dp[i+1][j]>dp[i][j-1])return truyvet(i+1,j);
    return truyvet(i,j-1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("ROBOT.INP","r",stdin);
    //freopen("ROBOT.OUT","w",stdout);
    static ll tt,xx,y,x,z,yy,d,j,l,r,lo,rr,i,res,m,ans,index,note,cnt;
    string ss,stt,sss,str,s;
    cin >> st;
    l = r = 0;
    note = 1;
    for (i = 1;i <= st.size();i++){
        for (j = 0;j < st.size()-i+1;j++){
            if (i==1)dp[j][j] = 1;
            else {
                if (st[j]==st[j+i-1])dp[j][j+i-1] = dp[j+1][j+i-2]+2;
                else dp[j][j+i-1] = max(dp[j][j+i-2],dp[j+1][j+i-1]);
                if (dp[j][j+i-1]>note){
                    note = dp[j][i+j-1];
                    l = j;
                    r = j+i-1;
                }
            }
        }
    }
    cout << truyvet(l,r);
    return (0^0)&(200+10);
}
/*
bang mau
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
  III
I 137
I  13
I   1
  IOICAMP
I 12
O  12
I   12
C    12
A     12
M      12
P       1
*/