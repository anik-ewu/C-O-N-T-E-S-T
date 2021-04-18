///Size of Trie nodes is equal to the size of the total string

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz 2001001
#define io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int cnt;
int dp[sz];
int trie[sz][27];
bool endword[sz];


void init(){
    cnt=1;
    memset(dp, -1, sizeof(dp));
    memset(trie, -1, sizeof(trie));
    memset(endword, 0, sizeof(endword));
}

void addWord(string s){
    int curr=0, nxt;
    for(int i=0; i<s.size(); i++){
        nxt=trie[curr][s[i]-'a'];
        if(nxt==-1){
            trie[curr][s[i]-'a']=cnt++;
        }
        curr=trie[curr][s[i]-'a'];
    }
    endword[curr]=true;
}

int queryWord(int pos, string s){

    if(pos==s.size())return 0;
    if(dp[pos]!=-1)return dp[pos];

    int ans=INT_MAX;
    int curr=0, nxt;
    int temp=ans;
    for(int i=pos; i<s.size(); i++){
        nxt=trie[curr][s[i]-'a'];
        if(nxt==-1)break;
        if(endword[nxt]==true){
            temp=1+queryWord(i+1, s);
        }
        curr=trie[curr][s[i]-'a'];
        ans=min(ans, temp);
    }
    return dp[pos]=ans;
}

int main(){

    io;
    //freopen("in.txt", "r", stdin);
    int t,n;
    string key, s, p;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        cin>>n;
        init();
        for(int i=1; i<=n; i++){
            cin>>key;
            addWord(key);
        }
        cin>>s;
        int x=queryWord(0,s);
        if(x==-1){
            cout<<"Case "<<tc<<": impossible"<<endl;
        }
        else{
            cout<<"Case "<<tc<<": "<<x<<endl;
        }
    }
    return 0;
}
