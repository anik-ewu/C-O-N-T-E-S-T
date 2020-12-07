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

string s;

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>s;
    int turn=0;
    for(i=0; i<s.size(); i++){
        if(i+1==s.size())break;

        if(s[i]==s[i+1]){
            turn=turn^1;
            s.erase(s.begin()+i);
            s.erase(s.begin()+i);
            i--;i--;
            i=max(-1,i);
            //cout<<i<<' '<<s<<endl;
        }
    }
    if(turn==0)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;







    return 0;
}

