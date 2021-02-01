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
map< string , int >mp;



int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;
    cin>>n;

    int ans=0;
    for(i=1; i<=n; i++){
        cin>>s;
        if(s=="red")ans+=1;
        if(s=="yellow")ans+=2;
        if(s=="green")ans+=3;
        if(s=="brown")ans+=4;
        if(s=="blue")ans+=5;
        if(s=="pink")ans+=6;
        if(s=="black")ans+=7;
        mp[s]++;
    }
    if(mp["black"]){
        ans+=(mp["red"]*7);
    }
    else if(mp["pink"]){
        ans+=(mp["red"]*6);
    }

    else if(mp["blue"]){
        ans+=(mp["red"]*5);
    }

    else if(mp["brown"]){
        ans+=(mp["red"]*4);
    }

    else if(mp["green"]){
        ans+=(mp["red"]*3);
    }

    else if(mp["yellow"]){
        ans+=(mp["red"]*2);
    }
    if(mp["red"]==n){
        ans=1;
    }


    cout<<ans<<endl;


    return 0;
}

