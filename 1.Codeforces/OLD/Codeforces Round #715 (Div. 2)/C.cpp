#include<bits/stdc++.h>
using namespace std;

#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

typedef long long ll;
const int N = 2e3+5;
int arr[N];
ll  mem[N][N];

ll dp(int l, int r){
    if(l==r)return 0;
    if(mem[l][r]!=-1)return mem[l][r];
    return mem[l][r]=arr[r]-arr[l]+min(dp(l+1, r), dp(l, r-1));
}

int main(){

    int n;
    cin>>n;
    for(int i=1; i<=n; i++)cin>>arr[i];
    sort(arr+1, arr+n+1);
    memset(mem, -1, sizeof(mem));
    cout<<dp(1, n)<<endl;


    return 0;
}
