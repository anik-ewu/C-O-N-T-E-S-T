#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;
vector< string > v;
map< string, vector< string> > mp;

void allPossibleSubset(string s){
    int n=s.size();
	int  count = pow(2,n);
	for (int i = 0; i < count; i++){
        string p="";
		for (int j = 0; j < n; j++){
			if ((i & (1 << j)) > 0)
				p+=s[j];
		}
		mp[s].push_back(p);
	}
}


void pre(){
    for(ll i=0; i<35; i++){
        ll po=powl(2, i);
        stringstream ss;
        string s;
        ss<<po;
        ss>>s;
        v.push_back(s);
        allPossibleSubset(s);
    }
}


vector< string > arr;
void allPossibleSubset2(string s){
    int n=s.size();
	int  count = pow(2,n);
	for (int i = 0; i < count; i++){
        string p="";
		for (int j = 0; j < n; j++){
			if ((i & (1 << j)) > 0)
				p+=s[j];
		}
		arr.push_back(s);
	}
}


int cal(string s){

    int res=s.size()+1;
    allPossibleSubset2(s);
    for(int i=0; i<35; i++){
        for(int k=0; k<arr.size(); k++){
            for(int j=0; j<mp[v[i]].size(); j++){
                if(mp[v[i]][j]==arr[k]){
                    int x=s.size()-arr[k].size();
                    int y=mp[v[i]].size()-mp[v[i]][j].size();
                    res=min(res, x+y);
                }
            }
        }
    }
    return res;
}

int main(){

    pre();
    string s;
    int a, b, t=1, n , m;
    cin>>t;
    while(t--){
        cin>>s;
        cout<<cal(s)<<endl;
    }

    return 0;
}
