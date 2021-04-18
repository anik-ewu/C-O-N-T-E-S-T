///misere nim
/*If player 1 starts with an xor value of zero, player 1 loses unless the piles are: [1,1], [1,1,1,1], etc.
If player 1 starts with an xor value other than zero, player 1 wins unless the piles are: [1], [1,1,1], etc.
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll                inf = 1e9;

#define all(x)          (x).begin(), (x).end()
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int               mod=1e9+7;
const int               sz =1e1+5;

int arr[201];

void solve(int cs){

    bool ok=true;
    int a,b, n,m, i,j;
    cin>>n;
    int nim=0;
    for(i=1; i<=n; i++){
        cin>>a;
        nim=nim^a;
        if(a!=1)ok=false;
    }
    if((!ok and nim) || (ok and !nim)){
        cout<<"Case "<<cs<<": Alice"<<endl;
    }
    else{

        cout<<"Case "<<cs<<": Bob"<<endl;
    }

}

int main(){
    
    Fast;   
    read(x); write(x);

    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        solve(i);
    }

    return 0;
}

