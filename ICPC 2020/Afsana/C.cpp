///Problem No : 1
///Language   : C++

#include<bits/stdc++.h>
using namespace std;

void solve(int pos, string s){
    if(pos==s.size()){
        return ;
    }
    if(s[pos]>='a' and s[pos]<='z'){
        s[pos]=s[pos]-'a'+'A';
    }
    if(s[pos]>='A' and s[pos]<='Z'){
        if(s[pos]=='A' || s[pos]=='E' || s[pos]=='I' || s[pos]=='O' || s[pos]=='U'){
            solve(pos+1, s);
        }
        else{
            cout<<'*'<<s[pos];
            solve(pos+1, s);
        }
    }
    else{
        solve(pos+1, s);
    }
}

int main(){

    string s;
    cin>>s;

    solve(0, s);

    return 0;
}
