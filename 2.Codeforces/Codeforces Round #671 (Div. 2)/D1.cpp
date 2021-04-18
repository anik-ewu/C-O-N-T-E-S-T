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

int arr[sz];

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    k=n/2;
    if(n%2==0)k--;
    cout<<k<<endl;

    i=1;
    j=n;
    int turn=1;
    while(n--){
        if(turn){
            cout<<arr[j--]<<' ';
            turn=0;
        }
        else{
            cout<<arr[i++]<<' ';
            turn=1;
        }
    }
    cout<<endl;

    return 0;
}

