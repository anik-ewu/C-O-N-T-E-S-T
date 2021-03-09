  
#include<bits/stdc++.h>
using namespace std;

#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);

int main(){

    read(x); write(x);
    string s;
    int c = 1;
    cin>>s;

    int i=0;
    while(s[i]!='\0'){
        if(s[i]==s[i+1]){
            c++;
        }
        else{
            cout<<s[i]<<c;
            c=1;
        }
        i++;
    }

    return 0;
}