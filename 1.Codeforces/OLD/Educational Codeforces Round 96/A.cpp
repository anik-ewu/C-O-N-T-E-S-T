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
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n;
        if(n%3==0){
         cout<<n/3<<' '<<0<<' '<<0<<endl;
        }
        else if(n%5==0){

         cout<<0<<' '<<n/5<<' '<<0<<endl;
        }
        else if(n%7==0){
         cout<<0<<' '<<0<<' '<<n/7<<endl;
        }
        else if(n%3==1 && (n/3)>=2){
            cout<<(n/3)-2<<' '<<0<<' '<<1<<endl;
        }
        else if(n%3==2 && (n/3)>=1){
             cout<<(n/3)-1<<' '<<1<<' '<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }





    return 0;
}

