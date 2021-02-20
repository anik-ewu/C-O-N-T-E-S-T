#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;
#define sz              3000005
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string s,p;

int main(){
    Fast;
    ll a,b,c, i,j,k, n,m,t, cs=1;

    cin>>a>>b;

    ll sum=0;
     n=2;
    while(n<=b){
        sum+=n;
        sum-=2;
        n=n*1LL*2;
    }
    ll even=b/2;
    ll odd=b/2+(b%2);
    sum=sum+(even*2)+(odd);

    n=2;
    while(n<a){
        sum-=n;
        sum+=2;
        n=n*1LL*2;
    }
    a--;
    even=a/2;
    odd=a/2+(a%2);
    sum=sum-((even*2)+(odd));
    cout<<sum<<endl;






    return 0;
}

