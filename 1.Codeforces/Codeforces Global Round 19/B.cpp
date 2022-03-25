#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 105;

int arr[N];

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n;
        for(int i=1; i<=n; i++)
            cin>>arr[i];

        ll total = 0;
        for(int i=1; i<=n; i++){
            for(int j=i; j<=n; j++){
                ll sum = 0;
                int x = i;
                while(x<=j){
                    while(x<=j and arr[x]!=0){
                        x++;
                        sum++;
                    }
                    int cnt = 0;
                    while(x<=j and arr[x]==cnt){
                        cnt++;
                        x++;
                    }
                    if(cnt)sum+=(cnt+1);

                }
                total+=sum;
            }
        }
        cout<<total<<endl;

    }

    return 0;
}
