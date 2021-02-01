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

#define S 10002
bool mark[S+7];
vector < double > v;
void  seive(){
    memset(mark,0,sizeof(mark));
    mark[1]=1;
    mark[0]=1;
    for(int i=4; i<=S; i+=2)mark[i]=1;
    for(int i=3; i*i<=S; i+=2){
        if(mark[i]==0){
            for(int j=i*i; j<S; j+=(i*2))
                mark[j]=1;
        }
    }
    v.push_back(2);
    for(int i=3; i<=S; i+=2){
        if(mark[i]==0)
            v.push_back(i);
    }
}

int main(){
    ///Fast;///using Fast I/O
    seive();
    int a,b,c, i,j,k, t,n,m;
    double aa, bb;
    cin>>t;
    while(t--){
        cin>>aa>>bb;
        double temp=(bb/aa);
        bool ok=true;
        for(i=0; i<100; i++){
            double dd=v[i];
            double cc=(temp*dd*1.0);
            if(mark[k]==0){
                cout<<v[i]<<' '<<k<<endl;
                ok=false;
                break;
            }
        }
        if(ok){
            cout<<"impossible"<<endl;
        }
    }

    return 0;
}

