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

int arr[30];

void solve(){

    string s;
    int a,b, n,m, i,j;
    cin>>s;
    memset(arr, 0 , sizeof(arr));
    for(i=0; i<s.size(); i++){
        arr[s[i]-'a']++;
    }

    int pp=0;
    int sin=0;
    for(int i=0; i<26; i++){
        pp+=(arr[i]/2);
        sin+=(arr[i]%2);
    }
    if(pp>=sin){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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

