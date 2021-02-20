#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;
#define sz              3000005
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string s,p;
string st, ed;
int main(){
    Fast;
    int a,b,c, i,j,k, n,m,t, cs=1;

    cin>>t;
    while(t--){
        cin>>s;
        cin>>n;
        cout<<"Case "<<cs++<<":"<<endl;
        for(k=1; k<=n ; k++){
            cin>>st>>ed;
            int op=0, cl=0;
            int cnt=0;
            for(i=0; i<s.size(); i++){
                bool ok=1;
                for(j=0; j<st.size() && i+st.size()<=s.size(); j++){
                    if(st[j]!=s[i+j]){
                        ok=0;break;
                    }
                }
                if(ok)op++;
                cout<<i<<' '<<ok<<endl;

                ok=1;
                for(j=0; j<ed.size() && i+ed.size()<=s.size(); j++){
                    if(ed[j]!=s[i+j]){
                        ok=0;break;
                    }
                }
                cout<<i<<' '<<ok<<endl;
                if(ok){
                    cnt+=op;
                }
            }
            cout<<cnt<<endl;
        }
    }

    return 0;
}

