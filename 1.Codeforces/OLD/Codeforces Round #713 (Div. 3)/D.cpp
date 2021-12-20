#include<bits/stdc++.h>
using namespace std;

using namespace std;
#define Fast   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

typedef long long ll;
const int      N =2e5+5;

ll arr[N];
ll cum[N];


int main(){

    Fast;
    //freopen("in.txt", "r", stdin);

    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        n+=2;
        for(int i=1; i<=n; i++)cin>>arr[i];
        sort(arr+1, arr+n+1);

        memset(cum, 0, sizeof(cum));
        for(int i=1; i<=n; i++)cum[i]+=(arr[i]+cum[i-1]);

        bool ok=false;
        if(cum[n-2]==arr[n-1] || cum[n-2]==arr[n]){
            ok=true;
        }
        if(!ok){
            for(int i=1; i<=n-2; i++){
                if((cum[n-2]-arr[i]+arr[n-1])==arr[n]){
                    swap(arr[i], arr[n-1]);
                    ok=true;
                    break;
                }
            }
        }
        if(!ok){
            cout<<-1<<endl;
        }
        else{
            for(int i=1; i<=n-2; i++){
                cout<<arr[i]<<' ';
            }
            cout<<endl;
        }
    }





    return 0;
}
