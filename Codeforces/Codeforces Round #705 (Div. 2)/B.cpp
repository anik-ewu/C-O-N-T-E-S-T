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

bool check(int a, int b, int h, int m){
    string s, p;
    stringstream ss;
    ss<<a;
    ss>>s;
    ss.clear();

    ss<<b;
    ss>>p;
    ss.clear();

    if(s.size()<2){
        s.insert(s.begin()+0,'0');
    }
    if(p.size()<2){
        p.insert(p.begin()+0,'0');
    }
    reverse(s.begin(), s.end());
    reverse(p.begin(), p.end());

    for(int i=0; i<2; i++){
        if(s[i]!='0' && s[i]!='1' && s[i]!='2' && s[i]!='5' and s[i]!='8')return false;
        if(p[i]!='0' && p[i]!='1' && p[i]!='2' and p[i]!='5' && p[i]!='8')return false;
    }
    for(int i=0; i<2; i++){
        if(s[i]=='2')
            s[i]='5';
        else if(s[i]=='5')
            s[i]='2';
        if(p[i]=='2')
            p[i]='5';
        else if(p[i]=='5')
            p[i]='2';
    }

    int hh, mm;
    ss<<p;
    ss>>hh;
    ss.clear();
    ss<<s;
    ss>>mm;

    if(hh<h && mm<m){
        return true;
    }
    return false;   
}

void solve(){

    char ch;
    int a,b, n, i,j,h,m;
    cin>>h>>m;
    cin>>a>>ch>>b;

    while(true){
        if(check(a,b, h, m)){
            if(a<10)cout<<0;
            cout<<a;
            cout<<":";
            if(b<10)cout<<0;
            cout<<b<<endl;
            return ;
        }
        b++;
        if(b==m){
            b=0;
            a++;
            if(a==h){
                a=0;
            }
        }
    }
}

int main(){
    Fast;///using Fast I/O
    
    read(x); 
    write(x);

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

