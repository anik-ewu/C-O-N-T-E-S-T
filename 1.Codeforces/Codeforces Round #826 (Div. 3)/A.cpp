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

    string s,p;
    int a, b, t=1, n , m;
    cin>>t;
    while(t--){
        cin>>s>>p;
        bool bigger = true;
        if(s==p) {
            cout<<"="<<endl;
        } else {
            char x = s[s.size()-1];
            char y = p[p.size()-1];

            if(x==y) {
                if(x=='L') {
                    if(s.size() < p.size()) {
                       bigger = false;
                    }
                }
                else {
                    if(s.size()>p.size()) {
                        bigger = false;
                    }
                }
            } else {
                int size1;
                int size2;
                if(x=='S')size1 = 1;
                if(x=='M')size1 = 2;
                if(x=='L')size1 = 3;

                if(y=='S')size2 = 1;
                if(y=='M')size2 = 2;
                if(y=='L')size2 = 3;

                bigger = size1 > size2;
            }

            if(bigger)
                cout<<">"<<endl;
            else
                cout<<"<"<<endl;
        }
    }

    return 0;
}
