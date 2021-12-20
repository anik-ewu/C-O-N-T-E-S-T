#include<bits/stdc++.h>
using namespace std;

using namespace std;
#define Fast   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int      N =1e5+5;

string s;

string solve(int a, int b){

    int x=a;
    int y=b;

    int n=s.size();
    int cnt=0;
    ///check palindrome or not
    for(int i=0; i<n/2; i++){
        if(s[i]!=s[n-i-1] && (s[i]!='?' and s[n-i-1]!='?'))return "-1";
    }
    for(int i=0; i<n/2; i++){
        if(s[i]=='?' and s[n-i-1]!='?'){
            s[i]=s[n-i-1];
        }
        else if(s[i]!='?' and s[n-i-1]=='?'){
            s[n-i-1]=s[i];
        }
    }

    for(int i=0; i<n; i++){
        a-=(s[i]=='0');
        b-=(s[i]=='1');
        cnt+=(s[i]=='?');
    }

    bool ok=true;
    int mid=n/2;
    if(a<0 || b<0)ok=false;
    if(a%2 and b%2)ok=false;
    if(a%2==0 and b%2==0 and cnt%2)ok=false;
    else if(a%2){
        if(s[n/2]=='?')s[n/2]='0';
        else ok=false;
        a--;
    }
    else if(b%2){
        if(s[n/2]=='?')s[n/2]='1';
        else ok=false;
        b--;
    }
    if(!ok)return "-1";

    for(int i=0; i<n/2; i++){
        if(s[i]==s[n-i-1] and s[i]=='?'){
            if(a>=2){
                s[i]=s[n-i-1]='0';
                a-=2;
            }
            else if(b>=2){
                s[i]=s[n-i-1]='1';
                b-=2;
            }
        }
    }

    ///check palindrome or not
    for(int i=0; i<n/2; i++){
        if(s[i]!=s[n-i-1])return "-1";
    }

    for(int i=0; i<n; i++){
        x-=(s[i]=='0');
        y-=(s[i]=='1');
    }
    if(x!=0 || y!=0)return "-1";


    return s;

}

int main(){

    Fast;
    //freopen("in.txt", "r", stdin);

    int t, n, a, b, cnt;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cin>>s;
        cout<<solve(a, b)<<endl;
    }





    return 0;
}
