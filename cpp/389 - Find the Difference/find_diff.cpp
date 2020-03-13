#include <iostream>
#include string
using std::string;

char findTheDifference(string s, string t){
    int stringValue1=0;
    int stringValue2=0;
    int temp;

    for(int i=0;i<s.size();i++){
        temp = s[i];
        stringValue1+=temp;
    }
    
    for(int i=0;i<t.size();i++){
        temp = t[i];
        stringValue2+=temp;
    }
    temp = -stringValue1 +  stringValue2;
    char tempo = temp;
    return tempo;

}