#include<bits/stdc++.h>
using namespace std;

string fourGArray[16] = {
                    "0000", "0001", "0010", "0011", "0100", "0101", "0110",
                    "0111", "1000", "1001", "1010", "1011", "1100", "1101",
                    "1110", "1111"};
string fiveGArray[16]= {
                    "11110", "01001", "10100", "10101", "01010", "01011",
                    "01110", "01111", "10010", "10011", "10110", "10111",
                    "11010", "11011", "11100", "11101"};

string result ="";

void getFourGIndex(string fourBit) {
    for(int i=0; i<16; i++) {
        if(fourGArray[i] == fourBit) {
            result += fiveGArray[i];
            break;
        }
    }
}


int main() {


    string inputString;
    string sixteenBitString;
    cin>>inputString;

    ///converting into 16 bit
    string tempStr = "";
    int addZeros = 16-inputString.size();
    while(addZeros--) {
        tempStr += '0';
    }
    sixteenBitString = tempStr + inputString;
    cout<<"16 Bit String : "<<sixteenBitString<<endl;

    string fourBit="";

    for(int i=0; i<sixteenBitString.size(); i++) {
        fourBit += sixteenBitString[i];
        if(fourBit.size()==4) {
            getFourGIndex(fourBit);
            fourBit = "";
        }
    }

    cout<<"Result : "<<result<<endl;

    return 0;
}
