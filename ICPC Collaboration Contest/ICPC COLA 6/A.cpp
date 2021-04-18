#include<bits/stdc++.h>
using namespace std;

int arr[2000005];
int cum[2000005];

int main(){

    int t, n, k, q;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d", &n, &q, &k);
        for(int i=1; i<=n; i++){
            scanf("%d", &arr[i]);
            cum[i]=cum[i-1]|arr[i];
        }
        int l, r, x, y, res;
        while(q--){
             scanf("%d%d", &l, &r);
            x=(cum[r]&cum[l-1]);
            y=(cum[r]^cum[l-1]);
            y=y^x;
            res=k|y;
            printf("%d\n", res);
        }
    }
    return 0;
}
