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

string s, p;

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>s>>p;

        reverse(s.begin(), s.end());
        reverse(p.begin(), p.end());

        stringstream ss,pp;
        ss<<s;
        ss>>n;

        pp<<p;
        pp>>m;

        c=n+m;

        stringstream temp;
        temp<<c;
        temp>>s;

        reverse(s.begin(),s.end());
        ss.clear();
        ss<<s;
        ss>>n;

        cout<<n<<endl;


    }





    return 0;
}

