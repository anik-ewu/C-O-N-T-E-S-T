#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;
const ll mod = 1e9+7;

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
        cin>>n>>k;
        if(n<k){
         cout<<((k/n)+(k%n!=0))<<endl;
        }
        else{
            cout<<(1+(n%k!=0))<<endl;
        }

    }




    return 0;
}

