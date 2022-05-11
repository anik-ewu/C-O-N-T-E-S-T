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

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

      string s;
      cin>>s;
      a = 0;
      b = 0;
      for(int i=0; i<3; i++) {
        a+=(s[i]-'0');
      }
      for(int i=3; i<6; i++) {
        b+=(s[i]-'0');
      }
      if(a==b){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }




    }

    return 0;
}
