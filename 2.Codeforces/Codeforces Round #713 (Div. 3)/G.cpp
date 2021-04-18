#include<bits/stdc++.h>
using namespace std;

using namespace std;
#define Fast   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define S 10000002

typedef long long ll;
bool mark[S+7];
int  ans[S+7];
vector < int > prime;
void  sieve(){
    int i,j,k,x;

    for(int i=1; i<S; i++)mark[i]=true;
    mark[1]=false;
    for(i=4; i<=S; i+=2)mark[i]=false;
    for(i=3; i*i<=S; i+=2){
        if(mark[i]==true){
            for(j=i*i; j<S; j+=i+i)
                mark[j]=false;
        }
    }
    prime.push_back(2);
    for(i=3; i<=S; i+=2){
        if(mark[i]==true)
            prime.push_back(i);
    }
}

int sod(ll n){
    ll i,val,con,sum,p,s;
    sum=1;
    for(i=0; (prime[i]*1LL*prime[i])<=n; i++){
        if(n%prime[i]==0){
            p=1;
            while(n%prime[i]==0){
                n/=prime[i];
                p*=prime[i];
            }
            p*=prime[i];
            s=(p-1)/(prime[i]-1);
            sum*=s;
        }
    }
    if(n>1){
        p=n*n;
        s=(p-1)/(n-1);
        sum*=s;
    }
    return sum;

}
int main(){

    Fast;
    //freopen("in.txt", "r", stdin);
    int t,n;
    cin>>t;
    sieve();
    memset(ans, -1, sizeof(ans));
    ans[1]=1;
    for(int i=2; i<=10000000; i++){
        int x=sod(i);
        if(x<S-1 and ans[x]==-1)ans[x]=i;
    }

    while(t--){
        cin>>n;
        cout<<ans[n]<<endl;
    }

    return 0;
}
