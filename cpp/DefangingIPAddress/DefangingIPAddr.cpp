#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::vector;
using std::cout;

class Solution {
public:
    string defangIPaddr(string address) {
        
        vector<string> sections;
        int secondPt = 0;
        string currentSection;
        for(int i=0;i<address.length();i++){
            if(address[i] == '.'){
                currentSection = address.substr(secondPt, i-secondPt);
                sections.push_back(currentSection);
                secondPt = i+1;
            }
            else if(address[i+1] =='\0'){
                string lastSection = address.substr(secondPt, (i+1)-secondPt);
                sections.push_back(lastSection);
            }
        }

        string fangerTings = "[.]";
        int test8bit;
        string defangedString;
        for(int i=0;i<sections.size();i++){
            test8bit = stoi(sections[i]);
            
            cout<<"It's not illegible for conversion\n";
            
            if(test8bit>255 || test8bit<0){
                cout<<"You don goofed with the numbers pal, a section is not 8bits\n";
            }
            else{
                defangedString.append(sections[i]);
                if(i<3)
                    defangedString.append(fangerTings);
            }
        }
        return defangedString;
    }
    
};