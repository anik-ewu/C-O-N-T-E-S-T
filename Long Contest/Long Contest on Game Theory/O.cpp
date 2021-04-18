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



int main(){
    
    Fast;   
    read(x); write(x);

    ll n, i=1;
    ll moves=1;
    while(cin>>n){
        moves=0;
        while(i<n){
            if(i*1LL*9<n){
                i=i*1LL*2;
            }
            else{
                i=i*1LL*9;
            }
            moves^=1;
        }
        if(moves){
            cout<<"Stan wins."<<endl;
        }
        else{
            cout<<"Ollie wins."<<endl;
        }
    }


    return 0;
}

