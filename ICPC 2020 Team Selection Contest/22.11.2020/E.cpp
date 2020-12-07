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

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        if(n==0){
            cout<<0<<endl;
            continue;
        }
        if((n-a)>0 && a<=b){
            cout<<-1<<endl;
            continue;
        }
        int cnt=0;
        while(n>0){
            cnt++;
            n-=a;
            if(n<=0)break;
            n+=b;
        }
        cout<<cnt<<endl;
    }


    return 0;
}

