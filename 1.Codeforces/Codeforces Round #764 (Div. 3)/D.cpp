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
        bool ok = false;
        if(a==max(a, max(b,c))){
            if((a-c)%b==0) ok = true;
            if((b-(a-b))%c==0) ok = true;
        }
        else if(b==max(a, max(b,c))){
            if((b+(b-a))%c==0) ok = true;
            if((b+(b-c))%a==0) ok = true;
        }
        else{
            if((c-a)%b==0) ok = true;
            if((b-(c-b))%a==0) ok = true;
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }



    }

    return 0;
}
