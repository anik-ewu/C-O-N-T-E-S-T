#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

ll arr[sz];

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n;
        for(i=1; i<=n; i++)cin>>arr[i];

        i=1;
        j=n;
        int cnt=0;
        while(i<j){
            if(arr[i]==arr[j]){
                i++;j--;
            }
            else if(arr[i]<arr[j]){
                arr[i+1]+=arr[i];
                i++;
                cnt++;
            }
            else {
                arr[j-1]+=arr[j];
                j--;
                cnt++;
            }
        }
        cout<<cnt<<endl;

    }



    return 0;
}

