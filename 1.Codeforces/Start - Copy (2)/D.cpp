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

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        vector< int > v;

        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a;
            v.push_back(a);
        }

        string s;
        vector< int > red;
        vector< int > blue;
        cin>>s;

        for(int i=0; i<n; i++) {
            if(s[i]=='B')
                blue.push_back(v[i]);
            else
                red.push_back(v[i]);
        }

        if(blue.size())
            sort(blue.begin(), blue.end());
        if(red.size())
            sort(red.begin(), red.end());

        bool flag=true;
        int counter = 1;
        for(int i=0; i<blue.size(); i++){
            if(blue[i]<counter)
                flag=false;
            counter++;
        }

        for(int i=0; i<red.size(); i++){
            if(red[i]>counter)
                flag=false;
            counter++;
        }


        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

    return 0;
}
