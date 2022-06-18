#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int arr[N];
int brr[N];

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n;
        for(int i=1; i<=n; i++)cin>>arr[i];
        for(int i=1; i<=n; i++)cin>>brr[i];

        int mx = 0;
        bool flag = true;
        for(int i=1; i<=n; i++){
            if(arr[i]<brr[i])
                flag=false;
            mx = max(mx, arr[i]-brr[i]);
        }

        for(int i = 1; i<=n; i++){
            if(arr[i]-brr[i]!=mx and brr[i]!=0){
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
