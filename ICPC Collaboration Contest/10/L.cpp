#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)    freopen("in.txt","r",stdin);
#define what_is(x) cerr<<#x<<" is "<<x<<"\n";
#define Fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int main(){

    int a, b, t, n , m;
    string s, p;
    cin>>n;
    cin>>s;

    bool ok=true;
    for(int i=1; i<s.size(); i++){
        if(s[i]==s[0]){
            ok=false;
            break;
        }
    }
    if(ok)cout<<"Correct"<<endl;
    else cout<<"Wrong Answer"<<endl;



    return 0;
}

