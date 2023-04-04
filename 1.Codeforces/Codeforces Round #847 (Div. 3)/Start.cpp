#include<bits/stdc++.h>
using namespace std;

struct VersionInfo {
    int a, b, c, d;
    string title;
};
vector<VersionInfo> versionList;

bool cmp(VersionInfo versoinA, VersionInfo versoinB) {
    if(versoinA.a != versoinB.a) {
        return versoinA.a < versoinB.a;
    } else {
        if(versoinA.b != versoinB.b) {
            return versoinA.b < versoinB.b;
        } else {
            if(versoinA.c != versoinB.c) {
                return versoinA.c < versoinB.c;
            } else {
                if(versoinA.d != versoinB.d) {
                    return versoinA.d < versoinB.d;
                } else {
                    return versoinA.title < versoinB.title;
                }
            }
        }
    }
}

void breakVersionName(string version, string title) {
    
    for (int i = 0; i < version.size(); i++) {
        if (version[i] == '.' || version[i] == '-') {
            version[i] = ' ';
        }
    }

    int num;
    string word;
    stringstream ss;
    ss<<version;

    VersionInfo data;
    ss>>num;
    data.a = num;
    ss>>num;
    data.b = num;
    ss>>num;
    data.c = num;
    
    data.d = 3;
    ss>>word;

    if(word == "alpha")
        data.d = 1;
    else if(word == "beta") 
        data.d = 2;

    data.title = title;

    versionList.push_back(data);
}

int main(){

    int i = 0;
    string title;
    string versionName;
    
    while(cin>>versionName>>title) {
        breakVersionName(versionName, title);
    }

    //sorting the version list
    sort(versionList.begin(), versionList.end(), cmp);

    for (int i = 0; i < versionList.size(); i++) {
        cout<<versionList[i].title<<' ';
    }
    cout<<endl;
    
    return 0;
}
