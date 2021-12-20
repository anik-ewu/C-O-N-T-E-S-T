
cin>>s;

i=0;
j=0;
flag=true;

while(i<len and j<n){
    if(flag == false){
        if(mp[s[i]==2)flag=true;
        mp[s[i]]--;
        i++;
    }
    else{
        mp[s[j]]++;
        j++;
        if(mp[s[i]==2)flag=false;
    }
    ans = max(ans, j-i+1);
}
