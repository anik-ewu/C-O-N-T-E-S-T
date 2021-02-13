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

vector < int > va;
vector < int > vb;

const int N=7;
int DP[2001][8];


int CALL(int n, int pos){
    if(pos>=7)  return n*10;
    if(DP[n][pos]!=-1)return DP[n][pos];

    int a=0,b=0;

    if(n>=va[pos]){
        a=(va[pos]*10)+(vb[pos])+CALL(n-va[pos], pos+1);
    }
    b=CALL(n, pos+1);
    return DP[n][pos]=max(a,b);
}

int main(){
    ///Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    va.push_back(1);
    va.push_back(6);
    va.push_back(28);
    va.push_back(88);
    va.push_back(198);
    va.push_back(328);
    va.push_back(648);


    vb.push_back(8);
    vb.push_back(18);
    vb.push_back(28);
    vb.push_back(58);
    vb.push_back(128);
    vb.push_back(198);
    vb.push_back(388);


    cin>>n;
    memset(DP, -1, sizeof(DP));
    cout<<CALL(n,0)<<endl;


    return 0;
}

