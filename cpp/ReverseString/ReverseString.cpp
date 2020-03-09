#include <iostream>
#include <vector>
using std::vector;
using std::cout;


void reverseString(vector<char>& s){
    
    for(char a : s){
        cout<<a<<" ";
    }

    char temp;
    int vSize = s.size()-1;

    for(int i=0;i<(s.size())/2;i++){
        temp = s[i];
        s[i] = s[vSize-i];
        s[vSize-i] = temp;

    }

    cout<<"\n";
    for(char a : s){
        cout<<a<<" ";
    }
}