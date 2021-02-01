///Trie Tree
///27-1-2021

#include<bits/stdc++.h>
using namespace std;

#define sz 100001
int trie[sz][26];
bool endword[sz];

vector< char> process(string s){
    vector< char> vc;
    for(int i=0; i<s.size(); i++){
     if(s[i]>='a' && s[i]<='z'){
        vc.push_back(s[i]);
     }
     else if(s[i]>='A' && s[i]<='Z'){
        vc.push_back(s[i]-'A'+'a');
     }
    }
    return vc;
}

int main(){

    freopen("in.txt", "r", stdin);

    string s, p;
    int t, cs=1;
    cin>>t;

    //getline(cin, s);
    while(t--){
        getline(cin, s);
        getline(cin, p);
        cout<<s<<endl;
        vector < char > vs=process(s);
        vector < char > vp=process(p);

        for(int i=0; i<vs.size(); i++){
            cout<<vs[i]<<' ';
        }

    }


    return 0;
}
