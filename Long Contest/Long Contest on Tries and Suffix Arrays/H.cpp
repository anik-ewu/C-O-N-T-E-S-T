#include<bits/stdc++.h>
using namespace std;
#define sz 2500005
#define ll long long

int cnt;
ll res;
int trie[sz][4];
int prefix[sz*4];
map< char, char > mp;



void init(){
    cnt=1;
    res=0;
    mp['A']='A'; mp['C']='B';
    mp['G']='C'; mp['T']='D';
    memset(trie, -1, sizeof(trie));
    memset(prefix, 0, sizeof(prefix));
}

void addWord(string s){
    int curr=0, nxt, len;
    len=s.size();
    for(int i=0; i<len; i++){
        s[i]=mp[s[i]];
        prefix[curr]++;
        res=max(res, (prefix[curr]*1LL*i));
        nxt=trie[curr][s[i]-'A'];
        if(nxt==-1){
            trie[curr][s[i]-'A']=cnt++;
        }
        curr=trie[curr][s[i]-'A'];
    }
    prefix[curr]++;
    res=max(res, (prefix[curr]*1LL*len));
}

int main(){

    ///freopen("in.txt.", "r", stdin);
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t,n, cs=1;
    string s;
    cin>>t;
    while(t--){
        init();
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>s;
            addWord(s);
        }
        cout<<"Case "<<cs++<<": "<<res<<endl;

    }

    return 0;
}
