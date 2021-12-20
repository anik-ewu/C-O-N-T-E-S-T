#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

vector< int > v;

void pre(){

    int i=1;
    int k=0;
    while(k<1000){
        if(i%3!=0 and i%10!=3){
            k++;
            v.push_back(i);
        }
        i++;
    }
}

int main(){

    int a, b, t=1, n , m;
    pre();
    cin>>t;
    while(t--){
        cin>>n;
        cout<<v[n-1]<<endl;
    }

    return 0;
}
