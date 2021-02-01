#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              1000005

bool vis[sz];
int D[1000010];
vector< int > primes;

void sieve(){

    for(int i=4; i<sz; i+=2)vis[i]=1;
    for(int i=3; i*i<sz; i++){
        if(vis[i]==0){
            for(int j=i*i; j<sz; j+=(i*2)){
                vis[j]=1;
            }
        }
    }
    primes.push_back(2);
    for(int i=3; i<sz; i+=2){
        if(vis[i]==0)primes.push_back(i);
    }
}

void DivisorGenerate()
{
    int i,j,val,N,M,count;
    D[1]=1;
    for(i=2; i<=1000000; i++)
    {
        N=M=i;
        val=sqrt(N)+1;
        for(j=0; primes[j]<val; j++)
        {
            if(M%primes[j]==0)
            {
                count=0;
                while(M%primes[j]==0)
                {
                    M/=primes[j];
                    count++;
                }
                D[N]=(count+1)*D[M];
                break;
            }
        }
        if(M==N) //Special Case if N equal prime{
            D[N]=2;
    }
}

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;
    sieve();
    DivisorGenerate();
    cin>>n;

    ll sum=0;
    for(i=1; i<=n; i++){
        sum+=D[n-i];
    }
    cout<<sum<<endl;


    return 0;
}

