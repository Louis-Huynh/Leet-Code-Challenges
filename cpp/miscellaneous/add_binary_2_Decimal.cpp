#include <iostream>
#include <string>
#include <math.h>
using std::string, std::to_string;


int bin2dec(string a){
    int intA = stoi(a);
    int temp=0;
    for(int i=0;i<a.size();i++){
        temp += intA%10 * pow(2,i);
    }
    return temp;
}

string addBinary(string a, string b) {
    
    int sumDec = bin2dec(a) + bin2dec(b);
    return to_string(sumDec);
}