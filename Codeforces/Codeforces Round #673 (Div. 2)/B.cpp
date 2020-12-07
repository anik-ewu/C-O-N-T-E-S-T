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

map < int , int > mpa;
map < int , int > mpb;
vector< int > v;

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n>>k;
        mpa.clear();
        mpb.clear();
        v.clear();
        for(i=1; i<=n; i++){
           cin>>a;
           c=k-a;
           if(mpa.find(c)==mpa.end()){
            mpa[a]++;
            v.push_back(0);
           }
           else if(mpb.find(c)==mpb.end()){
            mpb[a]++;
            v.push_back(1);
           }
           else{
              if(mpa[c]<=mpb[c]){
                mpa[a]++;
                v.push_back(0);
              }
              else{
                mpb[a]++;
                v.push_back(1);
              }

           }
        }
        for(i=0; i<v.size(); i++){
            cout<<v[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}

