///Trie Tree
///27-1-2021

#include<bits/stdc++.h>
using namespace std;
#define sz 100005

int cnt;
int trie[sz][10];
bool endword[sz];

vector< string > vs;

void init(){
    cnt=1;
    vs.clear();
    memset(trie, -1, sizeof(trie));
    memset(endword, 0, sizeof(endword));
}

void addWord(string s){
    int curr=0, nxt;
    for(int i=0; i<s.size(); i++){
        nxt=trie[curr][s[i]-'0'];
        if(nxt==-1){
            trie[curr][s[i]-'0']=cnt++;
        }
        curr=trie[curr][s[i]-'0'];
    }
    endword[curr]=true;

}
bool queryWord(string s){
    int curr=0, nxt;
    for(int i=0; i<s.size(); i++){
        nxt=trie[curr][s[i]-'0'];
        if(nxt==-1){
            return false;
        }
        curr=trie[curr][s[i]-'0'];
    }
    return true;

}


int main(){

    string s;
    int t, n, cs=1;
    cin>>t;

    while(t--){
        init();
        cin>>n;
        priority_queue< pair< int, string > > pq;
        for(int i=0; i<n; i++){
            cin>>s;
            vs.push_back(s);
            pq.push({s.size(), s});
        }
        bool ok=true;
        while(!pq.empty()){
            if(queryWord(pq.top().second)){
                ok=false;
                break;
            }
            addWord(pq.top().second);
            pq.pop();
        }
        if(ok){
            cout<<"Case "<<cs++<<": YES"<<endl;
        }
        else{
            cout<<"Case "<<cs++<<": NO"<<endl;
        }
    }

    return 0;
}

