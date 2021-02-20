#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll sz=5005;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    string s;
    s="CcDdEFfGgAaBCcDdEFfGgAaBCcDdEFfGgAaB";
    int t;
    cin>>t;
    while(t--)
    {
        string n1,n2,n3,M;
        cin>>n1>>n2>>n3;
        if(n1.size()>1)
        {
            n1[1]=NULL;
            n1[0]=n1[0]-'A'+'a';
        }
        if(n2.size()>1)
        {
            n2[1]=NULL;
            n2[0]=n2[0]-'A'+'a';
        }
        if(n3.size()>1)
        {
            n3[1]=NULL;
            n3[0]=n3[0]-'A'+'a';
        }
        int pos1=-1,pos2=-1,pos3=-1;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==n1[0])
            {
                pos1=i;
                break;
            }
        }
        for(int i=pos1+1; i<s.size(); i++)
        {
            if(s[i]==n2[0])
            {
                pos2=i;
                break;
            }
        }
        for(int i=pos2+1; i<s.size(); i++)
        {
            if(s[i]==n3[0])
            {
                pos3=i;
                break;
            }
        }
        if(pos1==-1||pos2==-1||pos3==-1)
        {
            cout<<"Dissonance"<<endl;
        }
        else
        {
            if(pos2-pos1==4&&pos3-pos2==3)
            {
                cout<<"Major triad"<<endl;
            }
            else if(pos2-pos1==3&&pos3-pos2==4)
            {
                cout<<"Minor triad"<<endl;
            }
            else
                cout<<"Dissonance"<<endl;
        }
        //cout<<pos1<<pos2<<pos3<<endl;
        //cout<<n1<<n2<<n3<<endl;
    }
    return 0;
}