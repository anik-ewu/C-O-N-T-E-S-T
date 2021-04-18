#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define mod             1e9+7
#define sz              100005

string s, p;
int arr[sz][27];
int resmm[30];

int cal(int n, int m){



    int l=0;
    int r=n-1;

    while(s[l]!=p[0])l++;
    while(s[r]!=p[m-1])r--;

    if(m==2){
        cout<<r-l<<endl;
        return ;
    }

    for(int i=r-1; i>l; i++){
        adj[i][s[i]-'a']=adj[i+1][s[i]-'a']+1
    }

    int need[30];
    memset(need, 0, sizeof(need));
    for(int i=1; i<m-1; i++){
        need[p[i]-'a']++;
    }

    for(int i=l+1; i<r; i++){
        
    }





}

void solve(){

    string s, p ;
    int a,b, n,m, i,j;
    vector< int > adj[30];

    cin>>n>>m;
    cin>>s;
    cin>>p;

    int l=0;
    int r=n-1;

    while(s[l]!=p[0])l++;
    while(s[r]!=p[m-1])r--;

    if(m==2){
        cout<<r-l<<endl;
        return ;
    }

    for(i=l+1; i<r; i++){
        adj[s[i]-'a'].push_back(i);
    }

    int ans=cal(n,m);
    reverse(s.begin(), s.end());
    reverse(p.begin(), p.end());
    ans=max(ans, cal(n,m));

    cout<<ans<<endl;

}

int main(){
    Fast;///using Fast I/O
    
    read(x); write(x);

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

