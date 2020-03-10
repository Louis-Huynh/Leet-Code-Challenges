#include <iostream>
#include <string>
using std::cout;
using std::string;


class numbah392{

    bool isSubsequence(string s, string t) {
       
        int indexS = 0;

        
    if(s==t){
        cout<<"They the same\n";
        return true;
    }

    else{
    
        for(int i=0;i<t.length();i++){
            if(t[i] == s[indexS])
                indexS++;
            if(s[indexS] == '\0'){
                cout<<"is valid!\n";
                return true;
            }
        }
    }
        cout<<"not valid\n";
        return false;
    

    }



};


