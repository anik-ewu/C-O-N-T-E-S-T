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
int brr[N];
int swapPos[N];

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n;
        for(int i=1; i<=n; i++)cin>>arr[i];
        for(int i=1; i<=n; i++)cin>>brr[i];

        memset(swapPos, 0, sizeof(swapPos));
        priority_queue< pair< int , int > >pq;

        a=b=0;
        for(int i=1; i<=n; i++){
            pq.push({abs(arr[i]-brr[i]),i});
        }
        while(!pq.empty()){
            int pos = pq.top().second;
            int x = arr[pos];
            int y = brr[pos];

            pq.pop();
            if(a==b || x==y){
                a+=x;
                b+=y;
            }
            else if(a<b){
                a+=max(x, y);
                b+=min(x, y);
                if(x<y)
                    swapPos[pos] = 1;
            }
            else{
                a+=min(x, y);
                b+=max(x, y);
                if(x>y)
                    swapPos[pos] = 1;
            }
        }

        for(int i=1; i<=n; i++){
            if(swapPos[i]){
                swap(arr[i], brr[i]);
            }
        }

        ll sum = 0;
        for(int i=1; i<=n; i++){
            for(int j=i+1; j<=n; j++){
               sum+=((arr[i]+arr[j])*(arr[i]+arr[j]));
               sum+=((brr[i]+brr[j])*(brr[i]+brr[j]));
            }
        }
        cout<<sum<<endl;

    }

    return 0;
}
