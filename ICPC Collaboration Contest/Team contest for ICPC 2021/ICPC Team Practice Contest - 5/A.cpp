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

int main(){
    Fast;///using Fast I/O
    int a,b,c, l,r,i,j,k, t,n,m;

    int sum=0;
    cin>>n;
    if(n>=648){
            sum+=(3820+198);
            n-=328;
            sum+=(1980+128);
            n-=198;
            sum+=(880+58);
            n-=88;
            sum+=(280+28);
            n-=28;
    }
    else{
        if(n>=328){
            sum+=(3820+198);
            n-=328;
        }
        if(n>=198){
            sum+=(1980+128);
            n-=198;
        }
        if(n>=88){
            sum+=(880+58);
            n-=88;
        }

        if(n>=28){
            sum+=(280+28);
            n-=28;
        }

        if(n>=6){
            sum+=(60+18);
            n-=6;
        }

        if(n>=1){
            sum+=(10+8);
            n-=1;
        }
    }
    if(n){
        sum+=(n*10);
    }
    cout<<sum<<endl;






    return 0;
}

