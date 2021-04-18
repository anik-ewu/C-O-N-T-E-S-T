#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define mod             1e9+7
#define sz              100005

double arr[sz];

void solve(){

    double a,b,c;
    int n,m, i,j;
    cin>>n;
    for(i=1; i<=n; i++)cin>>arr[i];

    for(int i=2; i<=n; i++){
        if(arr[i]>arr[i-1]){
            j=50;
            while(j--){
                c=(arr[i]+arr[i-1])/2.0;
                if(c>arr[i-1] && c<arr[i] and (arr[i]-c)>=0.0001){
                    arr[i]=c;
                }
            }
        }
        else if(arr[i]<arr[i-1]){

            int cnt=7;
            while(cnt--){
                j=50;
                while(j--){
                    c=(arr[i-1]+arr[i])/2.0;
                    if(c<arr[i-1] && c>arr[i-2]){
                        arr[i-1]=c;
                    }
                }

                j=50;
                while(j--){
                    c=(arr[i]+arr[i+1])/2.0;
                    if(c>arr[i] && (arr[i+1]-c>=0.0001)){
                        arr[i]=c;
                    }
                }

                j=50;
                while(j--){
                    c=(arr[i-1]+arr[i])/2.0;
                    if(c>arr[i]){
                        arr[i]=c;
                    }
                }
            }
        }
    }
    for(i=2; i<=n; i++){
        if(arr[i]<=arr[i-1]){
            cout<<"NO"<<endl;
            return ;
        }
    }
    cout<<"YES"<<endl;

}

int main(){
    Fast;///using Fast I/O
    
    //read(x); write(x);

    int multitest=1;
    if(multitest){
        int tc;
        cin>>tc;
        while(tc--)
            solve();
    }
    else
        solve();

    return 0;
}

