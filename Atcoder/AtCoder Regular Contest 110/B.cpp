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
string s,p;
int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>n;
    cin>>s;
    p="110";
    bool invalid=false;
    j=0;
    for(i=0; i<s.size(); i++){
        if(j==p.size())j=0;
        if(s[i]!=p[j]){
            invalid=true;
        }
        j++;

    }
    if(invalid){
        cout<<0<<endl;

    }
    else{
        ///
        ll tot=powl(10, 10);
        ll len=(n/3)+n%3;

        cout<<tot/len<<endl;

    }







    return 0;
}

