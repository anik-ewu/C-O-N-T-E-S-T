#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

pair < int , int > coutMoves(string s) {

    int moves = 0;
    int deletedChar = 0;
    for(int i = 1; i<s.size(); i++) {
        if(s[i-1] == s[i] || s[i-1]=='(')
            moves++, deletedChar+=2, i++;
        else {
            int cnt = 1;
            while(i<s.size() and s[i]!=')') {
                i++;
                cnt++;
            }
            if(s[i] == ')')
                moves++, deletedChar+=cnt+1;
            i++;
        }
    }
    return {moves, s.size()-deletedChar};
}

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){
      string s;
      cin>>n>>s;
      pair<int, int> x = coutMoves(s);
      cout<<x.first<<' '<<x.second<<endl;
    }

    return 0;
}
