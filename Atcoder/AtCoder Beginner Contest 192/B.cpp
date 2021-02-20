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

    read(x);write(x);

    string s;
    cin>>s;
    bool ok=true;

    for(i=0; i<s.size(); i+=2){
    	if(s[i]>='A' and s[i]<='Z'){
    		ok=false;
    		break;
    	}
    }

    for(i=1; i<s.size(); i+=2){
    	if(s[i]>='a' and s[i]<='z'){
    		ok=false;
    		break;
    	}
    }

    if(ok){
    	cout<<"Yes"<<endl;
    }
    else{
    	cout<<"No"<<endl;
    }







    return 0;
}

