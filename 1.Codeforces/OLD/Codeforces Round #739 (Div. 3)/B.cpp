#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int main(){

    int a, b,c, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>a>>b>>c;
        if(a>b)
            swap(a,b);
        m=c;
        int x=1+(b-a);
        int mx=(x*2)-2;
        if(c>=x){
            c-=(b-a);
        }
        else{
            c+=(b-a);
        }

        if(a==1){
            if(c<=mx and c>0 and c!=a and c!=b && abs(c-m)==mx/2){
                cout<<c<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else{
            if(c<=mx and c>0 and c!=a and c!=b && abs(c-m)==mx/2){
                cout<<c<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }

    }

    return 0;
}
