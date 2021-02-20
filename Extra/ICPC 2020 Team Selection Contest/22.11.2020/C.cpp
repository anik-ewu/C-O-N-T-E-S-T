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

char change(char x){
    if(x>'Z'){
     for(int i=1; i<=13; i++){
        x++;
        if(x>'z')x='a';
     }
    }
    else{
     for(int i=1; i<=13; i++){
        x++;
        if(x>'Z')x='A';
     }
    }
    return x;
}

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>s;
        ///change case
        for(i=0; i<s.size(); i++){
            if(s[i]<='Z'){
                s[i]=(s[i]-'A'+'a');
            }
            else{
                s[i]=(s[i]-'a'+'A');
            }
        }
        ///reverse
        reverse(s.begin(), s.end());

        ///rot13
        for(i=0; i<s.size(); i++){
            ///cout<<change(s[i])<<endl;
            s[i]=change(s[i]);
        }
        cout<<s<<endl;
    }





    return 0;
}

