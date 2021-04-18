///27-01-2021
///Trie Tree
///Notes: Sort the input if size is greater than 2. then use the rule of combinatorics

#include<bits/stdc++.h>
using namespace std;
#define sz 100005

int cnt;
int trie[sz][55];
int endword[sz];

void init(){
    cnt=1;
    memset(trie, -1, sizeof(trie));
    memset(endword, 0, sizeof(endword));
}

int idx(char x){
    if(isupper(x))return x-'A';
    return x-'a'+26;
}

void addWord(string s){
    int curr=0, nxt;
    for(int i=0; i<s.size(); i++){
            nxt=trie[curr][idx(s[i])];
            if(nxt==-1){
                trie[curr][idx(s[i])]=cnt++;
            }
            curr=trie[curr][idx(s[i])];
        }
    endword[curr]++;
}

int queryWord(string s){
    int curr=0, nxt;
    for(int i=0; i<s.size(); i++){
            nxt=trie[curr][idx(s[i])];
            if(nxt==-1){
                return 0;
            }
            curr=trie[curr][idx(s[i])];
        }
    return endword[curr];
}

int main(){

    string s;
    int i, t, n, m, cs=1;
    cin>>t;
    while(t--){
        cin>>n;
        init();
        getline(cin,s);///avoiding extra characters
        for(i=1; i<=n; i++){
            getline(cin, s);
            if(s.size()>2){
                sort(s.begin()+1, s.end()-1);
            }
            addWord(s);
        }

        stringstream ss;
        cout<<"Case "<<cs++<<":"<<endl;
        cin>>m;
        getline(cin,s);///for avoiding an extra char
        for(i=1; i<=m; i++){
            getline(cin, s);
            ss.clear();
            ss<<s;
            long long ans=1;
            while(ss>>s){
                if(s.size()>2){
                    sort(s.begin()+1, s.end()-1);
                }
                ans=ans*1LL*queryWord(s);
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}
