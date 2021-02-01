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

int solve(){

    int i,n=s.size();
    s+='#';

    if(n==1)return 0;

    ///all characters are same
    bool ok=true;
    for(i=1; i<n; i++){
        if(s[i]!=s[i-1]){
            ok=false;
        }
    }
    if(ok){
        return (n/2)+(n%2);
    }

    int cnt=0;
    int mid=n/2+(n%2);
    for(i=1; i<n; i++){
        if(s[i]==s[i-1]){
            for(char j='a'; j<='z'; j++){
                if(j!=s[i-1] && j!=s[i+1] && j!=s[n-(i+1)]){
                    s[i]=j;
                    cnt++;
                    break;
                }
            }
        }
    }

    s.erase(s.begin()+n);
    cout<<s<<endl;
    string p=s;
    reverse(p.begin(), p.end());
    if(s==p)cnt++;

    return cnt;


}

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;
    cin>>t;

    while(t--){
        cin>>s;
        cout<<solve()<<endl;
    }

    return 0;
}

