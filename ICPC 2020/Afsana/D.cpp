///Problem No : 4
///Language   : C++

#include<bits/stdc++.h>
using namespace std;


int main(){

    string s="", p="";
    string stemp, ptemp;

    cin>>stemp>>ptemp;

    for(int i=0; i<stemp.size(); i++){
        if(stemp[i]>='1' and stemp[i]<='9')
            continue;
        s+=stemp[i];
    }

    for(int i=0; i<ptemp.size(); i++){
        if(ptemp[i]>='1' and ptemp[i]<='9')
            continue;
        p+=ptemp[i];
    }

    bool flag=false;
    for(int i=1; i<s.size(); i++){
        if(s[i]=='(' and s[i-1]=='-')
            flag=true;
        if(s[i]==')')
            flag=false;

        if(flag and s[i]=='-')s[i]='+';
        else if(flag and s[i]=='+')s[i]='-';
    }
    flag=false;
    for(int i=1; i<p.size(); i++){
        if(p[i]=='(' and p[i-1]=='-')
            flag=true;
        if(p[i]==')')
            flag=false;

        if(flag and p[i]=='-')p[i]='+';
        else if(flag and p[i]=='+')p[i]='-';
    }

    stemp=ptemp="";

    for(int i=0; i<s.size(); i++){
        if(s[i]=='(' || s[i]==')')
            continue;
        stemp+=s[i];
    }

    for(int i=0; i<p.size(); i++){
        if(p[i]=='(' || p[i]==')')
            continue;
        ptemp+=p[i];
    }

    if(stemp==ptemp){
        cout<<"Two expressions are identical"<<endl;
    }
    else{
        cout<<"Two expressions are different"<<endl;
    }


    return 0;
}

