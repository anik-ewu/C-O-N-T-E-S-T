///Stars and bars

#include<bits/stdc++.h>
#define i64 unsigned long long
using namespace std;

i64 dp[301][25];
i64 nCr(int n, int r){
    if(n==r) return dp[n][r] = 1;
    if(r==0) return dp[n][r] = 1;
    //if(n==0) return dp[n][r] = 0;
    if(r==1) return dp[n][r] = (i64)n;
    if(dp[n][r]) return dp[n][r];
    return dp[n][r] = nCr(n-1,r) + nCr(n-1,r-1);
}

int main(){
    int n;
    cin>>n;
    cout<<nCr(n-1,11)<<endl;

    return 0;
}
