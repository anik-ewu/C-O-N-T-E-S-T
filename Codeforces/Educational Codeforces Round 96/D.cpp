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

    cin>>t;
    while(t--){
        cin>>n>>s;

        int cnt=0;
        for(i=0; i+2<n; i++){
            cnt++;
            if(s[i]==s[i+1] || s[i+1]!=s[i+2])i++,j=i+1;
            else if(s[i+1]!=s[i+2])i, j=i+2;

            while(s[j]==s[i] && j<n)j++;
            i=j-1;
        }
        if(i<n)cnt++;
        cout<<cnt<<endl;

    }
    return 0;
}

