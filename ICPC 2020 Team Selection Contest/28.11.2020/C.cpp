#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              1000

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

map< int, int > mp;
string s;

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    int x=1,y=1;

    while(true){
        if(x+1<=sz){
            cout<<"LOOK DOWN"<<endl;
            cin>>s;
            if(s=="YES"){
                return 0;
            }
            if(s=="SAFE"){
                x++;
                continue;
            }
        }
        if(x-1>=1)
    }







    return 0;
}

