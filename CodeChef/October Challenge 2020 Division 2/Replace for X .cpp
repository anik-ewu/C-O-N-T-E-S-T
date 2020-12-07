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

int mark[sz];

void pre(){
    for(int i=1; (1<<i)<sz; i++){
        mark[(1<<i)]=-1;
    }
}

bool check(vector < int > v){
    for(int i=1; i<v.size(); i++){
        if((v[i]&v[i-1])==0)return false;
    }
    return true;
}

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    pre();
    cin>>t;

    while(t--){

        cin>>n;
        if(n==1){
            cout<<1<<endl;
        }
        else if(mark[n]==-1){
            cout<<-1<<endl;
        }
        else if(n<=9){
            vector < int > v;
            for(i=1; i<=n; i++){
                v.push_back(i);
            }
            bool ok=false;
            while(next_permutation(v.begin(), v.end())){
                if(check(v)){
                    for(i=0; i<n; i++){
                        cout<<v[i]<<' ';
                    }
                    cout<<endl;
                    ok=true;
                    break;
                }
            }
            if(!ok ){
                cout<<-1<<endl;
            }
        }
        else{
            cout<<1<<' '<<3<<' '<<2<<' '<<6<<' '<<4<<' '<<5<<' '<<7<<' '<<9<<' '<<8;
            for(i=10; i<=n; i++){
                if(mark[i]==-1){
                    cout<<' '<<i+1<<' '<<i;i++;
                }
                else{
                    cout<<' '<<i;
                }
            }
            cout<<endl;
        }
    }

    return 0;
}

