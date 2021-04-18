#include<bits/stdc++.h>
using namespace std;

using namespace std;
#define Fast   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int      N =105;

int arr[N];
int brr[N];

int main(){

    Fast;
    //freopen("in.txt", "r", stdin);

    int t, n, a;
    cin>>t;
    while(t--){
        cin>>n;
        memset(brr, 0, sizeof(brr));
        for(int i=1; i<=n; i++){
            cin>>arr[i];
            brr[arr[i]]++;
        }
        for(int i=1; i<=n; i++){
            if(brr[arr[i]]==1){
                cout<<i<<endl;
                break;
            }
        }
    }





    return 0;
}
