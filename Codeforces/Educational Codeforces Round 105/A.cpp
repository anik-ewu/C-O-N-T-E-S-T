#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define mod             1e9+7
#define sz              3000005

bool check(string s){

    stack< int > st;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='('){
            st.push(1);
        }
        else{
            if(st.size()==0)return false;
            else st.pop(); 
        }
    }
    return st.size()==0;

}

void solve(){

    int a,b, n,m, i,j;
    string s,p,q;
    cin>>s;
    n=s.size();
    if(s[0]==s[n-1]){
        cout<<"NO"<<endl;
        return ;
    }
    else{
        p=s;
        q=s;
        for(i=0; i<n; i++){
            if(s[i]==s[0]){
                p[i]=q[i]='(';
            }
            else if(s[i]==s[n-1]){
                p[i]=q[i]=')';
            }
        }

        for(i=0; i<s.size(); i++){
            if(p[i]!='(' && p[i]!=')'){
                p[i]='(';
                q[i]=')';
            }
        }

        if(check(p) || check(q)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}

int main(){
    Fast;///using Fast I/O
    
    //read(x); write(x);

    int multitest=1;
    if(multitest){
        int tc;
        cin>>tc;
        while(tc--)
            solve();
    }
    else
        solve();

    return 0;
}

