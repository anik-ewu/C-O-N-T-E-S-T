#include<bits/stdc++.h>
using namespace std;
int main(){

    priority_queue < int > pq;

    pq.push(-5);
    pq.push(-1);
    pq.push(-9);
    pq.push(1);

//    while(!pq.empty()){
//
//        cout<<pq.top()*-1<<endl;
//        pq.pop();
//    }


    set < int > st;

    st.insert(3);
    st.insert(3);
    st.insert(9);
    st.insert(9);
    st.insert(7);

//    map<string, int>::iterator itr;
    set< int >::iterator itr;
    for(itr=st.begin(); itr!=st.end(); itr++){
        cout<<*itr<<endl;
    }


    cout<<st.front()<<endl;
    st.pop();
    cout<<st.top()<<endl;








    return 0;
}
