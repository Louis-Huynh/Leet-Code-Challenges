#include <iostream>
#include <string>
using std::string;
using std::cout;

class Solution {
public:
    int strStr(string haystack, string needle) {
        
    if(needle.length() > haystack.length())
        return -1;

    else if(needle == "")
        return 0;
        
    else if(needle.length() == haystack.length() && needle.back() != haystack.back())
        return -1;


    else{

        int pt_i;
        int j;
        string buildString;

        for(int i=0;i<haystack.length();i++){
            pt_i = i;
            j = 0;

            
            while(haystack[pt_i] == needle [j] && pt_i<haystack.length()){
                buildString += haystack[pt_i];
                pt_i++;
                j++;
            }
            
            if(buildString == needle){
                cout<<"Found em\n";
                return i;
            }
            buildString ="";
            
        }
        cout<<"Did not find the pattern\n";
        return -1;
    }
  
    }
};
