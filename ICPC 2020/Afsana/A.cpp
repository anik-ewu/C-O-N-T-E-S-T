#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;

    cin>>a;

    string s="";
    s=s+a[0];
    s=s+a[1];
    for(int i=2; i<a.size(); i++)
    {
        if(a[i]==a[i-1] && a[i]==a[i-2])
        {
            ;
        }
        else
        {
            s=s+a[i];
        }
    }




    string s1="";
    //aallaa
    for(int i=0; i<s.size(); i++)
    {
        if(i<s.size()-1 && s[i]==s[i+1])
        {
            if(i<s.size()-3)
            {
                if(s[i+2]==s[i+3])
                {
                    s1=s1+s[i];
                    s1=s1+s[i+1];
                    s1=s1+s[i+2];
                    i=i+3;
                }
                else
                {
                    s1=s1+s[i];
                }
            }

            else
            {
                s1=s1+s[i];
            }
        }


        else
        {
            s1=s1+s[i];
        }
    }

    cout<<s1<<endl;

    return 0;
}
