#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

map< int , int > mp;

bool palindrome(int h, int m) {
    string s="";
    string p="";
    string sp="";

    stringstream ss;
    ss<<h;
    ss>>s;

    if(s.size()<2){
        s.insert(s.begin()+0, '0');
    }
    ss.clear();
    ss<<m;
    ss>>p;

    if(p.size()<2){
        p.insert(p.begin()+0, '0');
    }

    sp=s+p;

    string revSP = sp;
    reverse(sp.begin(), sp.end());

    return (sp==revSP);


}


int main(){

    char ch;
    int a, b, t=1, n , m, h, x;

    cin>>t;
    while(t--){

        cin>>h>>ch>>m>>x;
        mp.clear();

        int cnt = 0;
        int addHour= x/60;
        int addMin = x%60;

        cnt = palindrome(h,m);
        mp[h*60 + m] = 1;

        while(true){

             m += addMin;
             h += m/60;
             m %= 60;

             h += addHour;
             h %= 24;

             int total = (h*60)+m;

             if(mp[total])
                    break;

             mp[total] = 1;

             if(palindrome(h, m))
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
