#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)    freopen("in.txt","r",stdin);
#define what_is(x) cerr<<#x<<" is "<<x<<"\n";
#define Fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int main(){

    ll a=0, b=0, t, n , m;
    for(int i=1 ;i<=5; i++){
        cin>>m;
        a+=m;
    }
    for(int i=1 ;i<=5; i++){
        cin>>m;
        b+=m;
    }
    if(a>b){
        cout<<"Blue"<<endl;
    }
    else{
        cout<<"Red"<<endl;
    }



    return 0;
}
