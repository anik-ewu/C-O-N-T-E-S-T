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
    read(x); write(x);

    int a,b,c, i,j,k, t,n,m;
    string s;
    stringstream ss;
    cin>>s>>k;

    while(k--){

    	ss.clear();
    	sort(s.begin(), s.end());
    	ss>>s;
    	ss<<m;

    	ss.clear();
    	reverse(s.begin(), s.end());
    	ss>>s;
    	ss<<n;

    	cout<<n-m<<endl;

    }












    return 0;
}

