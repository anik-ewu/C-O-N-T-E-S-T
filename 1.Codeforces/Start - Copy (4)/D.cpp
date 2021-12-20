#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 105;
ll arr[N];

int main(){

    int a, b, t=1, n , m, k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1; i<=n; i++)
            cin>>arr[i];

        sort(arr+1, arr+n+1);

        int start = n-(k*2)+1;
        ll total = 0 ;
        for(int i=start; i<=n; i++){
            if(!arr[i])
                continue;
            int idx;
            for(int j=i+1; j<=n; j++){
                if(arr[j]>=arr[i]){
                    idx = j;
                }
                if(arr[j]>arr[i]){
                    break;
                }
            }
            total += (arr[i]/arr[idx]);
            arr[i]=0;
            arr[idx]=0;
        }

        for(int i=1; i<=n; i++)
            total += arr[i];


        cout<<total<<endl;


    }

    return 0;
}
