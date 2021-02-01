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

string s;
vector < string > vs;
map < string, int > mp;

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>s;
        if(s[0]=='!'){
            s.erase(s.begin()+0);
            vs.push_back(s);
        }
        else {
            mp[s]=1;
        }
    }
    for(i=0; i<vs.size(); i++){
        if(mp[vs[i]]){
            cout<<vs[i]<<endl;
            return 0;
        }
    }
    cout<<"satisfiable"<<endl;



    return 0;
}

