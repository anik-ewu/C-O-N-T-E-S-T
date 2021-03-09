///Trie Tree + XOR

#include<bits/stdc++.h>
using namespace std;

int sz;
int fre[6410500];
int trie[6410500][2];

void init(){
	memset(trie, -1, sizeof(trie));
	memset(fre, 0, sizeof(fre));
}

void add_word(string s){
	int curr=0, next;
	for(int i=0; i<32; i++){
		next=trie[curr][s[i]-'0'];
		fre[curr]++;
		if(next==-1){
			trie[curr][s[i]-'0']=++sz;
		}
		curr=trie[curr][s[i]-'0'];
	}
	fre[curr]++;
}

void remove_word(string s){
	int curr=0, next;
	for(int i=0; i<32; i++){
		next=trie[curr][s[i]-'0'];
		fre[curr]--;
		curr=next;
	}
	fre[curr]--;
}

string query_word(string s){

	int curr=0, next;
	for(int i=0; i<32; i++){
		int next=trie[curr][s[i]-'0'];
		if(next != -1 && fre[next]){
			curr=next;
		}
		else{
			if(s[i]=='1'){
				s[i]='0';
				curr=trie[curr][s[i]-'0'];
			}
			else{
				s[i]='1';
				curr=trie[curr][s[i]-'0'];
			}
		}
	}
	return s;
}


int main(){

	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);

	init();

	char ch;
	string s;
	int t, x=0,y;
	bitset< 32 > bits(0);
	s=bits.to_string();
	
	add_word(s);///adding 0

	cin>>t;
	while(t--){
		cin>>ch>>x;
		bits=x;
		s=bits.to_string();
		if(ch=='+'){
			add_word(s);
		}
		else if(ch=='-'){
			remove_word(s);
		}
		else{
			for(int i=0; i<32; i++){
				if(s[i]=='0'){
					s[i]='1';
				}
				else{
					s[i]='0';
				}
			}
			///inverting bits of x to get the best xor valur
			s=query_word(s);

			y=0;
			for(int i=31; i>=0; i--){
				if(s[i]=='1'){
					y+=powl(2, 32-(i+1));
				}
			}
			cout<<(x^y)<<endl;
		}

	}

	return 0;
}