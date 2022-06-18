#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int arr[10];

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        memset(arr, 0, sizeof(arr));
        vector< int > v;
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>a;
            arr[a%10]++;

            if(arr[a%10]<=3)
                v.push_back(a%10);
        }

        bool flag = false;

        for(int i=0; i<v.size(); i++) {
            for(int j=i+1; j<v.size(); j++) {
                for(int k=j+1; k<v.size(); k++) {
                    if((v[i]+v[j]+v[k])%10==3)
                        flag = true;
                }
            }
        }

        if(flag) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }

    return 0;
}
