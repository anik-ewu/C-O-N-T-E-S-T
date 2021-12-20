#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

ll arr[N];

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>arr[i];

        }

        bool flag= true;
        for(int i=1; i<=min(n, 25); i++){

            int cnt = 0;
            for(int j=2; j<=i+1; j++){
                if(arr[i]%j==0)cnt++;
            }

            if(cnt==i){
                flag = false;
                break;
            }
        }

        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }

    return 0;
}
