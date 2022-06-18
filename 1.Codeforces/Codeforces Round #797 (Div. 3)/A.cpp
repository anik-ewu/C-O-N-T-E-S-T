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

    int t=1, n , m;

    cin>>t;
    while(t--){

           cin>>n;
           int a = 2;
           int b = 3;
           int c = 1;
           n-=6;
           m = n/3;
           a+=m;
           b+=m;
           c+=m;

           n -= (m*3);

           if(n)
            b++, n--;
           if(n)
            a++, n--;
           cout<<a<<' '<<b<<' '<<c<<endl;


    }

    return 0;
}
