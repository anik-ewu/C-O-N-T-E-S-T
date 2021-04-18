#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll                inf = 1e9;

#define all(x)          (x).begin(), (x).end()
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int               mod=1e9+7;
const int               sz =1e5+5;

string s;
vector< string > vs;

map< string, string > mp;
map< string , int > correct;
map< string , int > incorrect;

void one_curr_sol(int n){
    
    int i;
    bool one_solution=true;
    for(i=0; i<n; i++){
        if(correct[vs[i]]!=1 || incorrect[vs[i]]!=0){
            one_solution=false;
        }
    }

    if(one_solution){
        for(i=0; i<n; i++){
            if(i)cout<<' ';
            cout<<mp[vs[i]];
        }
        cout<<endl<<"correct"<<endl;
        exit(0);
    }
}

void one_incurr_sol(int n){
    
    int i;
    bool one_solution=false;
    for(i=0; i<n; i++){
        if(correct[vs[i]]==0){
            one_solution=true;
            break;
        }
    }
    for(i=0; i<n; i++){
        if(incorrect[vs[i]]>1){
            one_solution=false;
        }
    }

    if(one_solution){
        for(i=0; i<n; i++){
            if(i)cout<<' ';
            cout<<mp[vs[i]];
        }
        cout<<endl<<"incorrect"<<endl;
        exit(0);
    }
}

void solve(){

    int a,b, n,m, i,j;
    cin>>n;
    for(i=1; i<=n ;i++){
        cin>>s;
        vs.emplace_back(s);
    }
    cin>>m;
    ll c=0, inc=0;
    string p, q;
    for(i=1; i<=m; i++){
        cin>>s>>p>>q;
        mp[s]=p;
        if(q=="correct"){
            correct[s]++;
            c++;
        }
        else{
            incorrect[s]++;
            inc++;
        }
    }

    one_curr_sol(n);
    one_incurr_sol(n);

    ///curr solution
    ll res1=1;
    ll res2=1;
    
    for(i=0; i<n; i++){
        res1=res1*1LL*correct[vs[i]];
        res2=res2*1LL*(correct[vs[i]]+incorrect[vs[i]]);
    }
    res2-=res1;

    cout<<res1<< " correct"<<endl;
    cout<<res2<< " incorrect"<<endl;

}

int main(){
    
    Fast;   
    read(x); write(x);

    int multitest=0;
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

