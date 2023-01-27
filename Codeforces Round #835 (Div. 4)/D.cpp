#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 2e5+5;

int arr[N];

int main(){

    Fast;

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        vector<int>vrr;

        cin>>n;
        for(int i=1; i<=n; i++) {
            cin>>arr[i];
            if(arr[i]!=arr[i-1])
                vrr.push_back(arr[i]);
        }

        if(vrr.size() ==1) {
            cout<<"Yes"<<endl;
            continue;
        }

        int countVally = 0;

        for(int i=0; i<vrr.size(); i++) {
            if(i==0) {
                countVally += (vrr[i] < vrr[i+1]);
            } else if(i+1 == vrr.size()) {
                countVally += (vrr[i-1] > vrr[i]);
            } else {
                countVally += (vrr[i-1] > vrr[i] and vrr[i] < vrr[i+1]);
            }
        }

        countVally == 1 ? cout<<"Yes"<<endl : cout<<"NO"<<endl;




    }

    return 0;
}
