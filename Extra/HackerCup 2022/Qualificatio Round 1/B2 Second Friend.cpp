#include<bits/stdc++.h>
using namespace std;

#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

char arr[3003][3003];

bool validPosition(int x, int y, int r, int c){
    return (x>=1 and x<=r and y>=1 and y<=c);
}

void processData(int r, int c){
    for(int i=1; i<=r; i++) {
        for(int j=1; j<=c; j++) {
            if(arr[i][j]=='$') {
                int cnt = 0;
                for(int k=0; k<4; k++) {
                    if(validPosition(i+dx[k], j+dy[k], r, c) and arr[i+dx[k]][j+dy[k]]!='#')
                        cnt++;
                }
                if(cnt<2)
                    arr[i][j]='.';
            }
        }
    }

    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++) {
            if(arr[i][j]=='$')
                arr[i][j]='^';
        }
    }
}

bool checkValidity(int r, int c) {
    for(int i=1; i<=r; i++) {
        for(int j=1; j<=c; j++) {
            if(arr[i][j]!='^')
                continue;

            int cnt = 0;
            for(int k=0; k<4; k++) {
                if(validPosition(i+dx[k], j+dy[k], r, c) and arr[i+dx[k]][j+dy[k]]=='^')
                    cnt++;
            }
            if(cnt<2)
                return false;
        }
    }
    return true;
}

int main(){

    Fast
    read(x);
    write(x);

    int t, r, c, caseCounter = 1;
    cin>>t;
    while(t--) {
        cin>>r>>c;

        bool noTree = true;
        for(int i=1; i<=r; i++) {
            for(int j=1; j<=c; j++) {
                cin>>arr[i][j];
                if(arr[i][j] =='^')
                    noTree = false;
            }
        }
        for(int i=1; i<=r; i++) {
            for(int j=1; j<=c; j++) {
                if(arr[i][j] == '.' and noTree==false)
                    arr[i][j] = '$';
            }
        }

        processData(r, c);

        bool possible = checkValidity(r, c);

        if(possible || noTree) {
            cout<<"Case #"<<caseCounter++<<": Possible"<<endl;
            for(int i=1; i<=r; i++) {
                for(int j=1; j<=c; j++) {
                    cout<<arr[i][j];
                }
                cout<<endl;
            }
        }
        else {
            cout<<"Case #"<<caseCounter++<<": Impossible"<<endl;
        }
    }

    return 0;
}
