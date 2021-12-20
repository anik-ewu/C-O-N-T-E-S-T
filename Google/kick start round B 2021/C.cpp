#include<bits/stdc++.h>
using namespace std;
#define S 300002
#define Fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


bool mark[S+7];
vector < int > v;
void  sieve(){
    memset(mark,0,sizeof(mark));
    for(int i=4; i<=S; i+=2)mark[i]=1;
    for(int i=3; i*i<=S; i+=2){
        if(mark[i]==0){
            for(int j=i*i; j<S; j+=(i*2))
                mark[j]=1;
        }
    }
    v.push_back(2);
    for(int i=3; i<=S; i+=2){
        if(mark[i]==0)
            v.push_back(i);
    }
}

int main(){

    Fast;
    sieve();
    int a, b, t, n , m;
    cin>>t;
    m=v.size();
    for(int tc=1; tc<=t; tc++){
        cin>>n;
        int i=0;
        while((v[i]*1LL*v[i+1])<=n)i++;
        i--;
        cout<<"Case #"<<tc<<": "<<(v[i]*1LL*v[i+1]);cout<<endl;
    }



    return 0;
}
