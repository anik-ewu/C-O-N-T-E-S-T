/*
Algo:Trie Tree+ Game Theory + Dfs
Date:03-02-2021
Idea: If first player can win && lose -> first player wins
Else If first player can win only and k%2==1-> first player  wins
Else -> Secon Player wins
*/


#include<bits/stdc++.h>
using namespace std;

const int N=1e5+100;

int sz;
int win[N];
int lose[N];
int trie[N][26];

void init(){
	sz=1;
	memset(trie, -1, sizeof(trie));
}

void insert(string s){
	int n=s.size();
	int curr=1, next;
	for(int i=0; i<n; i++){
		next=trie[curr][s[i]-'a'];
		if(next==-1){
			trie[curr][s[i]-'a']=++sz;
		}
		curr=trie[curr][s[i]-'a'];
	}
}

void dfs(int curr){

	int leaf=1;
	for(int i=0; i<26; i++){
		int next=trie[curr][i];
		if(next!=-1){
			leaf=0;
			dfs(next);
			///game theory
			win[curr]|=!win[next];
			lose[curr]|=!lose[next];
		}
	}
	if(leaf){
		lose[curr]=1;
	}
}

int main(){

	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w", stdout);

	int n,k;
	string s;

	init();

	cin>>n>>k;
	for(int i=1; i<=n; i++){
		cin>>s;
		insert(s);
	}

	dfs(1);
	int  x=win[1];
	int  y=lose[1];

	if(x and y)cout<<"First"<<endl;
	else if(x) cout<<(k%2 ?"First":"Second")<<endl;
	else cout<<"Second"<<endl;

	return 0;
}
