///Faltu ekta problem

#include<bits/stdc++.h>
using namespace std;

#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

char str[1000005];
char tstr[1000005];

int len;

void get_data(){
    scanf("%s", str);
    len=strlen(str);
}
void insert(){
    scanf("%s", tstr);
    int sz=strlen(tstr);

    int pos;
    scanf("%d", &pos);
    for(int i=len-1; i>=pos; i--){
        str[i+sz]=str[i];
    }
    len=len+sz;
    str[len]=0;
    for(int i=0; i<sz; i++){
        str[i+pos]=tstr[i];
    }

}
void display(){
    int l, r;
    scanf("%d%d", &l, &r);
    for(int i=l; i<=r; i++){
        printf("%c",str[i]);
    }
    printf("\n");
}

int main(){
    
    read(x);
    write(x);
    get_data();
    

    char com[4];
    int l, r;
    while(scanf("%s", com),  com[0]!='E'){

        if(com[0]=='P'){
            display();
        }
        else if(com[0]=='I'){
           insert();
        }
    }
    return 0;
}