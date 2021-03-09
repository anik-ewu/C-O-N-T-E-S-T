#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;
 
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
#define mod             1e9+7
#define sz              3000005
 
int n,U, L, R, D;
 
int arr[101][101];
 
void init(){
    int i;
    if(U==0){
        for(i=1; i<=n; i++){
            if(arr[1][i]==0)arr[1][i]=-1;
        }
    }
    if(R==0){
        for(i=1; i<=n; i++){
            if(arr[i][n]==0)arr[i][n]=-1;
        }
    }
    if(D==0){
        for(i=1; i<=n; i++){
            if(arr[n][i]==0)arr[n][i]=-1;
        }
    }
    if(L==0){
        for(i=1; i<=n; i++){
            if(arr[i][1]==0)arr[i][1]=-1;
        }
    }


    if(U==n){
        for(i=1; i<=n; i++){
         arr[1][i]=1;
        }
        U=0;
        if(R)R--;
        if(L)L--;
    }
    if(R==n){
        for(i=1; i<=n; i++){
          arr[i][n]=1;
        }
        R=0;
        if(U)U--;
        if(D)D--;
    }
    if(D==n){
        for(i=1; i<=n; i++){
            arr[n][i]=1;
        }
        D=0;
        if(R)R--;
        if(L)L--;
    }
    if(L==n){
        for(i=1; i<=n; i++){
            arr[i][1]=1;
        }
        L=0;
        if(U)U--;
        if(D)D--;
    }
}


void sum(){
    int i;
    for(i=1; i<=n; i++){
        if(arr[1][i]==1)U++;
    }
    for(i=1; i<=n; i++){
        if(arr[i][n]==1)R++;
    }
    for(i=1; i<=n; i++){
        if(arr[n][i]==1)D++;
    }
    for(i=1; i<=n; i++){
        if(arr[i][1]==1)L++;
    }
} 
 
void solve(){
 
    int  i,j;
    memset(arr, 0, sizeof(arr));
    cin>>n>>U>>R>>D>>L;

    vector< int > v;
    v.push_back(U);
    v.push_back(R);
    v.push_back(D);
    v.push_back(L);

    init();
 
    if(arr[1][1]==0 && U && L){
        arr[1][1]=1;
        U--;L--;
        init();
    }
    if(arr[1][n]==0 && U && R){
        arr[1][n]=1;
        U--;R--;
        init();
    }
    if(arr[n][1]==0 && D && L){
        arr[n][1]=1;
        D--;L--;
        init();
    }
    if(arr[n][n]==0 && R && D){
        arr[n][n]=1;
        R--;D--;
        init();
    }
    for(i=1; i<=n; i++){
        if(arr[1][i]==0 && U)arr[1][i]=1, U--;
    }
    for(i=1; i<=n; i++){
        if(arr[i][n]==0 && R)arr[i][n]=1, R--;
    }
    for(i=1; i<=n; i++){
        if(arr[n][i]==0 && D)arr[n][i]=1, D--;
    }
    for(i=1; i<=n; i++){
        if(arr[i][1]==0 && L)arr[i][1]=1, L--;
    }
 
    U=R=D=L=0;
    sum();
 
    if(v[0]==U && v[1]==R && v[2]==D && v[3]==L){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
 
}
 
int main(){
    Fast;///using Fast I/O
    
    read(x); write(x);
 
    int multitest=1;
    if(multitest){
        int tc;
        cin>>tc;
        while(tc--)
            solve();
    }
    else
        solve();
 
    return 0;
}