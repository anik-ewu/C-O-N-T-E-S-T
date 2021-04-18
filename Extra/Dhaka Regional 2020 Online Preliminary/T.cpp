#include<bits/stdc++.h>
using namespace std;
int n=100;
int mark[100];
int prime[100];

void sieve(){

    for(int i=1; i<=n; i++)
        mark[i]=0;
    mark[0]=1;
    mark[1]=1;

    for(int i=4; i<=n; i+=2)
    {
        mark[i]=1;
    }
    for(int i=3; i<=sqrt(n)+1; i++)
    {
        if(mark[i]==0)
        {
            for(int j=i*i; j<=n; j+=(i*2))
            {
                mark[j]=1;
            }
        }
    }

    int j=1;
    for(int i=2; i<=n; i++)
    {
        if(mark[i]==0)
        {
            prime[j++]=i;
            //cout<<i<<endl;
        }
    }
}

int f(int num){

    int res=1;
    for(int i=1; prime[i]*prime[i]<=num; i++){

        if(num%prime[i]==0){
            int cnt=0;
            while(num%prime[i]==0){
                cnt++;
                num/=prime[i];
            }
            res=res*(cnt+1);
        }
    }
    if(num>1){
        res=res*2;
    }
    return res;
}

int main(){
    sieve();
    int num;
    cin>>num;
    int nod=f(num);

    cout<<num<< ' '<<nod<<endl;
}
