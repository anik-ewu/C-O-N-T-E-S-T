#include<bits/stdc++.h>
using namespace std;

#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);

int main() {

    read(x);
    write(x);

    int t, n, k, caseCounter = 1;

    cin>>t;
    while(t--) {
        cin>>n>>k;

        int arr[101];
        memset(arr, 0, sizeof(arr));

        bool ok = true;
        if(k*2 < n) {
            ok = false;
        }

        int a;
        for(int i=1; i<=n; i++) {
            cin>>a;
            arr[a]++;
            if(arr[a] > 2)
                ok = false;
        }

        cout<<"Case #"<<caseCounter++<<": ";
        if(ok){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
