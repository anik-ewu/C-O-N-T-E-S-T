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

vector< int > v;
int arr[10][10];

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;
    cin>>n>>k;
    for(i=2; i<=n; i++)v.push_back(i);

    for(i=1; i<=n; i++){
        for(j=1; j<=n ; j++){
            cin>>arr[i][j];
        }
    }

    int cnt=0;
    do{
        int T=arr[1][v[0]];
        for(i=1; i<v.size(); i++){
            T+=arr[v[i-1]][v[i]];
        }
        T+=arr[v[v.size()-1]][1];
        if(T==k)cnt++;
    }while((next_permutation(v.begin(), v.end())));

    cout<<cnt<<endl;


    return 0;
}

