#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

map < char,  int > mp;

int main(){

    int a, b, t=1, n , m;
    string str,s;
    cin>>t;
    while(t--){
        cin>>str>>s;

        for(int i=0; i<str.size(); i++){
            mp[str[i]]=i+1;
        }

        string p="";
        p+=s[0];
        char ch=s[0];
        for(int i=0; i<s.size(); i++){
            if(ch==s[i])
                continue;
            p+=s[i];
            ch=s[i];
        }
        int res=0;
        for(int i=0; i<p.size()-1; i++){
            int x=mp[p[i]];
            int y=mp[p[i+1]];
            res +=abs(x-y);
        }
        cout<<res<<endl;

    }

    return 0;
}
