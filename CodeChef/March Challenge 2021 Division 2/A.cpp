#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll                inf = 1e9;

#define all(x)          (x).begin(), (x).end()
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int               mod=1e9+7;
const int               sz =1e1+5;

ll po[35];

void pre(){

   ll j=1; 
   for(int i=0; i<32; i++){
        po[i]=j;
        j=j*1LL*2;
   } 
}

void solve(){

    ll d, c, i;
    cin>>c;
    bitset< 32 > num=c;
    bitset< 32 > A=0;
    bitset< 32 > B=0;

    for(i=0; i<32; i++){
        if(po[i]>c){
            d=po[i];
            break;
        }
    }
    bool a_is_set=0;
    for(i=31; i>=0; i--){
        if(po[i]<d){
            if(num[i]==0){
                A[i]=B[i]='1';
            }
            else {
                if(a_is_set){
                    B[i]='1';
                }
                else {
                    A[i]='1';
                    a_is_set=true;
                }
            }
        }
    }
    ll a=A.to_ulong();
    ll b=B.to_ulong();
    cout<<(a*b)<<endl;;



}

int main(){
    
    Fast;  
    read(x); write(x);
    pre();
    int multitest=1;
    if(multitest){
        int tc;
        cin>>tc;
        while(tc--)
            solve();
    }
    else
        solve();

    return 0;
}

