///Rolling Hash
///28-12-2020

#include<bits/stdc++.h>
using namespace std;

#define mod   179424673
#define Base  1000007

string s, pat;
vector < char > text_char;
vector < char > pattern_char;
vector < long long int > pat_char_len;
vector < long long int > text_char_len;

int big_mod(long long int base, long long int power){
    if(power==0)
        return 1;
    else if(power%2==1){
        long long int p1 = base % mod;
        long long int p2 = (big_mod(base,power-1))%mod;
        return (p1*p2)%mod;
    }
    else if(power%2==0){
        long long int p1 = (big_mod(base,power/2))%mod;
        return (p1*p1)%mod;
    }
}

long long find_ans(){

    long long int cnt=0;
    if(pat_char_len.size()==1){
        for(int i=0; i<text_char_len.size(); i++){
            if(text_char[i]==pattern_char[0] && text_char_len[i]>=pat_char_len[0]){
                 cnt+=(text_char_len[i]-pat_char_len[0]+1);
            }
        }
        return cnt;
    }
    if(pat_char_len.size()==2){
        for(int i=1; i<text_char_len.size(); i++){
            if(text_char[i-1]==pattern_char[0] && text_char[i]==pattern_char[1] && text_char_len[i-1]>=pat_char_len[0] && text_char_len[i]>=pat_char_len[1]){
                 cnt+=1;
            }
        }
        return cnt;
    }

    long long int pow,i,x,ans=0;
    long long int h_value=0,match_value=0;
    long long int h_value2=0,match_value2=0;

    int pat_len=pat_char_len.size();
    pow=pat_len-3;

    for(i=1; i+1<pat_len; i++){

        x=pat_char_len[i];
        x*=big_mod(Base,pow);
        h_value=(h_value+(x%mod))%mod;

        x=pattern_char[i];
        x*=big_mod(27,pow--);
        h_value2=(h_value2+(x%mod))%mod;
    }

    pow=pat_len-3;
    int str_len=text_char_len.size();
    int sub=big_mod(Base,pow);
    int sub2=big_mod(27,pow);

    for(i=1; i<str_len; i++){
        if(i+1<pat_len){
            x=text_char_len[i];
            x*=big_mod(Base,pow);
            match_value=(match_value+(x%mod))%mod;

            x=text_char[i];
            x*=big_mod(27,pow--);
            match_value2=(match_value2+(x%mod))%mod;
        }
        else{
            bool ok=true;
            if(text_char[i-pat_len+1]!=pattern_char[0] || text_char[i]!=pattern_char[pat_len-1])ok=false;
            if(text_char_len[i-pat_len+1]<pat_char_len[0]  || text_char_len[i]<pat_char_len[pat_len-1])ok=false;
            if(match_value==h_value && match_value2==h_value2 && ok)ans++;

            x=text_char_len[i-pat_len+2];
            x*=sub;
            match_value=((match_value+mod)-(x%mod))%mod;
            match_value=(((match_value*Base)%mod)+text_char_len[i])%mod;

            x=text_char[i-pat_len+2];
            x*=sub2;
            match_value2=((match_value2+mod)-(x%mod))%mod;
            match_value2=(((match_value2*27)%mod)+text_char[i])%mod;
        }
    }
    return ans;
}

int main(){
    int a;
    char c, ch;
    int n, m;
    cin>>n>>m;
    getchar();
    getline(cin, s);
    getline(cin, pat);

    ///compressing input file

    stringstream ss;
    ss<<s;

    int len=0;
    while(ss>>a>>c>>ch){
        if(len==0){
            text_char_len.push_back(a);
            text_char.push_back(ch);
            len++;
        }
        else if(text_char[len-1]==ch){
            text_char_len[len-1]+=a;
        }
        else{
            text_char_len.push_back(a);
            text_char.push_back(ch);
            len++;
        }
    }

    ss.clear();
    ss<<pat;

    int i=0;
    while(ss>>a>>c>>ch){
        if(i==0){
            pat_char_len.push_back(a);
            pattern_char.push_back(ch);
            i++;
        }
        else if(pattern_char[i-1]==ch){
            pat_char_len[i-1]+=a;
        }
        else{
            pat_char_len.push_back(a);
            pattern_char.push_back(ch);
            i++;
        }
    }

    cout<<find_ans()<<endl;



    return 0;
}
