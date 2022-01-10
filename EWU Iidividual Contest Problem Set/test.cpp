#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sz              3000005
void solve()
{
    int n;
    cin>>n;
    int p[n+2],q[n+2],qq[n+2];
    bool flag=true;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i];//given permutation
        q[i]=i;
    }
    int cnt=20;
    while(cnt--)
    {
        for(int i=1;i<=n;i++)
        {
            qq[i]=q[p[i]];
        }
        for(int i=1;i<=n;i++)
        {
            cout<<qq[i]<<" ";
        }
        cout<<endl;
        for(int i=1;i<=n;i++)
        {
            q[i]=qq[i];
        }
    }
}

int main() {
    Fast;
    #ifndef ONLINE_JUDGE
     //freopen("in.txt", "r", stdin);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
