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

    int a,b, n,m, i,j;
    cin>>n;
    int nim=0;
    for(i=1; i<=n; i++){
        cin>>a>>b;
        nim=nim^(b-a-1);
    }

    if(nim){
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

