#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

double dp[100][100][100];
bool vis[100][100][100];

double cal(int a, int b, int c){
    ////cout<<a<<' '<<b<<' '<<c<<endl;

    if(a>=100 || b>=100 || c>=100)return 0;
    if(vis[a][b][c])return dp[a][b][c];
    vis[a][b][c]=1;

    double moves=0;
    if(a)moves=cal(a+1, b, c)+(a/(a+b+c));
    if(b)moves+=cal(a, b+1, c)+(b/(a+b+c));
    if(c)moves+=cal(a, b, c+1)+(c/(a+b+c));

    return dp[a][b][c]=moves;
}

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    memset(vis,0,sizeof(vis));

    cin>>a>>b>>c;
    cout<<cal(a, b, c)<<endl;


    return 0;
}

