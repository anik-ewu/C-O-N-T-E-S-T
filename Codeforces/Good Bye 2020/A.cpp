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

int arr[sz];

int main(){
    Fast;///using Fast I/O
    int a,b,c, l,r,i,j,k, t,n,m;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=1; i<=n; i++)cin>>arr[i];

        set< double > st;

        for(i=1; i<=n; i++){
            for(j=i+1; j<=n; j++){
                double base=arr[j]-arr[i];
                double area=(1.0*base)/2.0;
               st.insert(area);
            }
        }
        cout<<st.size()<<endl;
        st.clear();

    }

    return 0;
}

