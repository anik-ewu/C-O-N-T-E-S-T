#include<bits/stdc++.h>
using namespace std;

int arr[15];

int main(){

    int a,b,c, i,j,k, n,m,t, cs=1;

    cin>>n;
    for(i=1; i<=n; i++){
        cin>>arr[i];
    }
    cin>>k;

    int res;
    int r=INT_MAX;
    for(i=1; i<=n;  i++){
        int temp=(k%arr[i]);
        if(temp<r){
            r=temp;
            res=arr[i];
        }
    }
    cout<<res<<endl;





    return 0;
}

