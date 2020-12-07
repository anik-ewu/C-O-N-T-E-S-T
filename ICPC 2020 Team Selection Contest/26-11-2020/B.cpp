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

vector < int > ans[10005];

string s;
int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;
    cin>>t;
    while(t--){
        cin>>s;
        for(i=1; i<=10000; i++)ans[i].clear();
        int id=1;
        i=0;
        bool ok=true;

        if(s.size()==1 || s[0]=='W' || s[s.size()-1]=='B'){
            ok=false;
        }
        i=0;
        while(i<s.size() && s[i]=='B'){
            i++;
        }
        while(i<s.size() && s[i]=='W'){
            i++;
        }
        if(i==s.size()){
            for(i=0; i<s.size(); i++){
               ans[id].push_back(i+1);
            }
        }
        else{
            ans[id].push_back(1);
            for(i=1; i<s.size()-1; i++){
                if(s[i]=='W')ans[id].push_back(i+1);
            }
            id++;
            for(i=1; i<s.size()-1; i++){
                if(s[i]=='B')ans[id].push_back(i+1);
            }
            ans[id].push_back(s.size());
        }

        if(!ok){
            cout<<"IMPOSSIBLE"<<endl;
        }
        else{
            cout<<id<<endl;
            for(i=1; i<=id; i++){
                cout<<ans[i].size();
                for(j=0; j<ans[i].size(); j++){
                    cout<<' '<<ans[i][j];
                }
                cout<<endl;
            }
        }

    }

    return 0;
}

