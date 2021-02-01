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
    cin>>n;
    set < int > st;
    for(i=1; i<=n; i++){
        m=i;
        while(m){
            if(m%10==7){
                st.insert(i);
                break;
            }
            m/=10;
        }
        m=i;
        while(m){
            if(m%8==7){
                st.insert(i);
                break;
            }
            m/=8;
        }
    }
    cout<<n-st.size()<<endl;



    return 0;
}

