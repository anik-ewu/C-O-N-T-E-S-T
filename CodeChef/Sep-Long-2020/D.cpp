#include<bits/stdc++.h>
using namespace std;

int arr[1001];

int main(){

    int t, n , i, j;

    cin>>t;
    while(t--){
        cin >>n;
        for (i=1; i<=n; i++){
            cin >> arr[i];
        }

        int mn=n;
        int mx=1;
        int c= 0;
        for(i=1; i<=n; i++){
            for(j=0; j<=100; j++){
                c=0;
                for(int k=1; k<=n; k++){
                    if(i+arr[i]*j==k+arr[k]*j){
                        c++;
                    }
                }
                mn=min(mn ,c );
                mx=max(mx, c );
            }
        }
        cout<<mn<<' '<<mx<<endl;
    }
    return 0;
}
