#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

map < char, int > mp;

void fill(){
    mp['a'] = 1;
    mp['e'] = 1;
    mp['i'] = 1;
    mp['o'] = 1;
    mp['u'] = 1;
}

int main(){

    Fast;
    fill();
    string s, p;
    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n;
        cin>>s>>p;

        int res = INT_MAX;
        for(char x = 'a'; x<='z'; x++){

            string ss = s;
            string pp = p;
            for(int i = 0; i<n; i++ ){
                if(ss[i]=='?') ss[i]=x;
                if(pp[i]=='?') pp[i]=x;
            }

            int cal =  0;
            for(int i=0; i<n; i++){
                if(ss[i]!=pp[i]){
                    if((mp[ss[i]] and mp[pp[i]]) || (!mp[ss[i]] and !mp[pp[i]]))
                        cal+=2;
                    else
                        cal++;
                }
            }
            res = min(res, cal);
        }

        cout<<res<<endl;
    }
    return 0;
}
