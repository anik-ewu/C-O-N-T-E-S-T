#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)    freopen("in.txt","r",stdin);
#define what_is(x) cerr<<#x<<" is "<<x<<"\n";
#define Fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 5e4+5;
int arr[N];

int main(){

    Fast;
    int a, b, t, n , m;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        cin>>n;
        cin>>s;

        arr[0]=1;
        for(int i=1; i<n; i++){

            if(s[i]>s[i-1]){
                arr[i]=arr[i-1]+1;
            }
            else{
                arr[i]=1;
            }
        }
        cout<<"Case #"<<tc<<":";
        for(int i=0; i<n; i++){
            cout<<' '<<arr[i];
        }
        cout<<endl;
    }



    return 0;
}
