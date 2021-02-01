#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1e9+7
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

int arr[sz];
int brr[sz];

bool hill(int i){
    return (arr[i]>arr[i-1] && arr[i]>arr[i+1]);
}
bool vally(int i){
    return (arr[i]<arr[i-1] && arr[i]<arr[i+1]);
}

void solve(){

    bool ok=true;
    int n, m, i, j, k;

    cin>>n;
    for(i=1; i<=n; i++)cin>>arr[i];
    for(i=1; i<=n; i++)brr[i]=arr[i];

    for(i=2; i+2<n; i++){
        if(hill(i) && vally(i+1) && hill(i+2)){
         arr[i+1]=arr[i+2];
         brr[i+1]=brr[i];
         ok=false;
         break;
        }
        if(vally(i) && hill(i+1) && vally(i+2)){
         arr[i+1]=arr[i+2];
         brr[i+1]=brr[i];
         ok=false;
         break;
        }
    }

    for(i=2; i+1<n and ok; i++){
        if(hill(i) && vally(i+1)){
         arr[i]=arr[i+1];
         brr[i+1]=brr[i];
         ok=false;
         break;
        }
        if(vally(i) && hill(i+1)){
         arr[i]=arr[i+1];
         brr[i+1]=brr[i];
         ok=false;
         break;
        }
    }

    for(i=2; i<n and ok; i++){
        if(hill(i)){
         arr[i]=arr[i+1];
         brr[i+1]=brr[i];
         break;
        }
        if(vally(i)){
         arr[i]=arr[i+1];
         brr[i+1]=brr[i];
         break;
        }
    }

    int cnt=0;
    for(i=2; i<n; i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])cnt++;
        if(arr[i]<arr[i-1] && arr[i]<arr[i+1])cnt++;
    }

    int cnt2=0;
    for(i=2; i<n; i++){
        if(brr[i]>brr[i-1] && brr[i]>brr[i+1])cnt2++;
        if(brr[i]<brr[i-1] && brr[i]<brr[i+1])cnt2++;
    }


    cout<<min(cnt, cnt2)<<endl;


}

int main(){
    Fast;///using Fast I/O
    int multipletest=1;
    if(multipletest){
        int tc;
        cin>>tc;
        while(tc--)
            solve();
    }
    else
        solve();


    return 0;
}

