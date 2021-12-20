#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int main(){

    //Fast;
    int a, b, t=1, n , m;
    cin>>t;
    while(t--){
        string p, s = "";
        cin>>n;
        getchar();
        getline(cin, p);
        for(int i=0; i<p.size(); i++){
            if((i+1)%3==0)
                continue;
            if(i<2){
                s+=p[i];
                s+=p[i+1];
            }
            else{
                if(s[s.size()-1]==p[i]){
                    s+=p[i+1];
                }
                else{
                    s+=p[i];
                    s+=p[i+1];
                }
            }
            i++;
        }
        if(s.size()<n){
            s+='a';
        }
        cout<<s<<endl;
    }

    return 0;
}
