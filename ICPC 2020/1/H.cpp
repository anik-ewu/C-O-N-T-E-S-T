#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;
string s, p;
int main(){


    Fast;
    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>s;

        if(s=="ikimasu"){
            cout<<"itte"<<endl;
            continue;
        }


        vector< char > v;
        for(int i=0; i<s.size()-6; i++)v.push_back(s[i]);
        char y;
        char x=s[s.size()-6];
        if(s.size()>=7){
            y=s[s.size()-7];
        }
        if(x=='h' )v.pop_back();
        if(x=='r' || (x=='h' and y=='c')){
            v.push_back('t');
            v.push_back('t');
        }
        else if(x=='m' || x=='b' || x=='n' ){
            v.push_back('n');
            v.push_back('d');
        }
        else if(x=='k'){
            v.push_back('i');
            v.push_back('t');
        }
        else if(x=='g'){
            v.push_back('i');
            v.push_back('d');
        }
        else if(x=='h'){
            v.push_back('s');
            v.push_back('h');
            v.push_back('i');
            v.push_back('t');
        }
        v.push_back('e');

        for(int i=0; i<v.size(); i++)
            cout<<v[i];
        cout<<endl;


    }

    return 0;
}
