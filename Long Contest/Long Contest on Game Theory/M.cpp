#include<iostream>
#include<algorithm>

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

int arr[1001];

void solve(int cs){

    int nim=0;
    int a,b, n,m, i,j;
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>arr[i];
    }

    sort(arr+1, arr+n+1);
    if(n%2){
        for(i=1; i<=n; i+=2){
            nim=nim^(arr[i]-arr[i-1]-1);
        }
    }
    else{
        for(i=2; i<=n; i+=2){
            nim=nim^(arr[i]-arr[i-1]-1);
        }
    }

    if(nim){
        cout<<"Georgia will win"<<endl;
    }
    else{

        cout<<"Bob will win"<<endl;
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

