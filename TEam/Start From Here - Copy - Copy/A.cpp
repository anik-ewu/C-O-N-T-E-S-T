#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1e9+7
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

int arr[25];
vector < int > v[25];
map< pair< int , int > , int > mp;


int main(){
    Fast;///using Fast I/O
    int a,b,c, l,r,i,j,k, t,n,m;
    c=0;
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>k>>a>>b;
        c=max(k, c);
        arr[i]=k;
        if(b>=a){
            for(j=0; j<=a; j++){
                mp[{i,j}]=1;
            }
            for(j=b; j<k; j++){
                mp[{i,j}]=1;
            }
        }
        else{
            for(j=b; j<=a; j++){
                mp[{i,j}]=1;
            }
        }
    }
    c=c*1825;
    bool ok;
    for(i=0; i<c; i++){
        ok=true;
        for(j=1; j<=n; j++){
            a=i%arr[j];
            if(mp[{j,a}]==0){
                ok=false;
                break;
            }
        }
        if(ok){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"impossible"<<endl;



    return 0;
}

