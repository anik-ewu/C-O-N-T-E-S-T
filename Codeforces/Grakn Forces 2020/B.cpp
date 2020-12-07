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
        set< int > st;
        bool ok=false;
        cin>>n>>k;
        for(i=1; i<=n; i++){
            cin>>a;
            st.insert(a);
            if(a==0)ok=true;
        }
        if(st.size()>1 && k==1){
            m=-1;
        }
        else if(st.size()<=k){
            m=1;
        }
        else{
            m=st.size()-1;
            m=(m/(k-1))+(m%(k-1)!=0);
        }
        cout<<m<<endl;
    }


    return 0;
}

