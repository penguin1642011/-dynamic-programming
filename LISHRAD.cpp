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
static ll Hash,base = 131,k,n,a[MAXN],b[MAXN];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("ROBOT.INP","r",stdin);
    //freopen("ROBOT.OUT","w",stdout);
    static ll tt,xx,y,x,z,yy,d,j,l,r,lo,rr,i,res,m,ans,index,note;
    string st,ss,stt,sss,str,s;
    map<ll,ll> f;
    cin >> n;
    for (i = 1;i <= n;i++)
    cin >> a[i];
    ans = 1;
    f[1] = a[1];
    for (i = 2;i <= n;i++){
        f[i] = 1e18;
        l = 0;
        r = i-1;
        while(l<=r){
            ll mid = (l+r)/2;
            if (a[i]>f[mid]){
                if (f[mid]!=1e18){
                ans = max(ans,mid+1);
                f[mid+1] = min(f[mid+1],a[i]);}
                l = mid+1;
            }else r = mid - 1;
        }
    }
    cout << ans;
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
*/
