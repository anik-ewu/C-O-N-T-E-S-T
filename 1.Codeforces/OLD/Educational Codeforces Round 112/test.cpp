#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    while(getline(cin,s)){
        transform(s.begin(), s.end(), s.begin(),::toupper);
        string p="{{";
//        string p="";
        p+="'";
        for(int i=0; i<s.size(); i++)
            if(s[i]==' ')
                p+='_';
            else
                p+=s[i];
          p+="'";
        p+=" | translate}}";
        cout<<p<<endl;
    }

    return 0;
}
