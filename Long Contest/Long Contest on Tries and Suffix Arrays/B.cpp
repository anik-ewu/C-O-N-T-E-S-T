#include<bits/stdc++.h>
using namespace std;
#define sz 10001

int cnt;
int freq[26][sz];
int trie[sz][26];
bool endword[sz];

void init(){
    cnt=1;
    memset(trie, -1, sizeof(trie));
    memset(endword, 0, sizeof(endword));
}

void addWord(string s){
    int curr=0, nxt;
    for(int i=0; i<s.size(); i++){
        nxt=trie[curr][s[i]-'a'];
        freq[curr]++;
        if(nxt==-1){
            trie[curr][s[i]-'a']=cnt++;
        }
        curr=trie[curr][s[i]-'a'];
    }
    freq[curr]++;
    endword[curr]=true;

}
void removeWord(string s){
    int curr=0, nxt;
    for(int i=0; i<s.size(); i++){
        freq[curr]--;
        nxt=trie[curr][s[i]-'a'];
        if(nxt==-1){
            return ;
        }
        curr=trie[curr][s[i]-'a'];
    }
    freq[curr]--;
    endword[curr]=false;

}

bool queryWord(string s){
    int curr=0, nxt;
    for(int i=0; i<s.size(); i++){
        nxt=trie[curr][s[i]-'a'];
        if(nxt==-1){
            return false;
        }
        curr=trie[curr][s[i]-'a'];
    }
    return endword[curr]==true;

}


int main(){

    string s;
    int q, tt, k, l;

    cin>>q;
    init();
    while(q--){
        cin>>tt;
        if(tt==1){
            addWord(s);
        }
        else if(tt==2){
            if(queryWord(s))cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            removeWord(s);
        }
    }

    return 0;
}
