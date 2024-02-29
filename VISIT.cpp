#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXN = 1e5;
static ll a[MAXN],answer[20][30];
bool dp[MAXN];
struct Merge{
    ll o,t;
};
static Merge note[MAXN],q[MAXN];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("VISIT.INP","r",stdin);
    freopen("VISIT.OUT","w",stdout);
    static ll i,j,res,cnt,n,m,check = 1e18,index,x;
    cin >> n >> m;
    for (i = 1;i <= n;i++){
        for (j = 1;j <= m;j++){
            cin >> x;
            cnt++;
            a[cnt] = x;
            note[cnt].o = i;
            note[cnt].t = j;
            res+=x;
        }
    }
    dp[0] = true;
    for (i = 1;i <= n*m;i++){
        for (j = res-1;j >= a[i];j--)
        if (dp[j-a[i]]&&a[i]!=0&&!dp[j]){
            dp[j] = true;
            q[j].o = j-a[i];
            q[j].t = i;
        }
    }
    for (i = 1;i < res;i++)
    if (dp[i]&&check>abs(res-i*2)){
        check = abs(res-i*2);
        index = i;
    }
    Merge kq;
    kq.o = index;
    kq.t = res-index;
    while(index!=0){
        answer[note[q[index].t].o][note[q[index].t].t] = 1;
        index = q[index].o;
    }
    for (i = 1;i <= n;i++){
        for (j = 1;j <= m;j++)
        cout << answer[i][j] << ' ';
        cout << '\n';
    }
    cout << kq.o << ' ' << kq.t;
    return 0;
}
