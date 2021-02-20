#include<bits/stdc++.h>
using namespace std;

int arr[500005];
int cumodd[500005];

map< int, int > mp;

int main(){

    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    int n, m, a;

    while(scanf("%d%d", &n, &m)==2){

        mp. clear();
        int odd=0 ,even=0;
        for(int i=1; i<=n; i++){
            scanf("%d" , &a);
            odd=odd^a;
            cumodd[i]=odd;
        }
        
        int l, r, res;
        while(m--){
            scanf("%d%d", &l, &r);
            res=cumodd[r]^cumodd[l-1];
            res=cumodd[r]^res;
            
            printf("%d\n", res);

        }

    }

    return 0;

}