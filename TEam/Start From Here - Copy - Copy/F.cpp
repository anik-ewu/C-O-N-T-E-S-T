#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;
#define sz              401

int n, k;
int visited[sz][sz];
double dp[sz][sz];

double cal(int HEAD, int moves){

    if(moves==0)return HEAD;
    if(visited[HEAD][moves])return dp[HEAD][moves];
    visited[HEAD][moves]=true;

    double x=0, y=0;
    if(HEAD){
        x=cal(HEAD-1, moves-1)*0.5+cal(HEAD, moves-1)*0.5;
    }
    if(n-HEAD>=1){
        y=cal(HEAD+1, moves-1)*0.5+cal(HEAD, moves-1)*0.5;
    }
    return dp[HEAD][moves]=max(x, y);

}

int main(){
    cin>>n>>k;
    memset(visited, 0, sizeof(visited));
    printf("%0.9f\n", cal(0, k));

    return 0;
}

