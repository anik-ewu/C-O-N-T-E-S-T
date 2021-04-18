#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1e9+7
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              305

int arr[sz];
int brr[sz];
int crr[sz];
int drr[sz];

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n;
        for(i=1; i<=n; i++)cin>>arr[i];
        for(i=1; i<=n; i++)cin>>brr[i];
        for(i=1; i<=n; i++)cin>>crr[i];

        drr[1]=arr[1];
        for(i=1; i<=n; i++){
            if(i==n){
                if(arr[i]!=drr[1] && arr[i]!=drr[i-1]){
                    drr[i]=arr[i];
                }
                else if(brr[i]!=drr[1] && brr[i]!=drr[i-1]){
                    drr[i]=brr[i];
                }
                else if(crr[i]!=drr[1] && crr[i]!=drr[i-1]){
                    drr[i]=crr[i];
                }
            }
            else{
                if(arr[i]!=drr[i-1]){
                    drr[i]=arr[i];
                }
                else if(brr[i]!=drr[i-1]){
                    drr[i]=brr[i];
                }
                else if(crr[i]!=drr[i-1]){
                    drr[i]=crr[i];
                }
            }
        }
        for(i=1; i<=n; i++){
            cout<<drr[i]<<' ';
        }
        cout<<endl;

    }
    return 0;
}

