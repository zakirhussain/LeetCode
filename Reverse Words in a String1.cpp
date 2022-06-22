/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
    Rotate
    I/P: 
    v1 : "  hello world  "
    O/P: "world hello"
*/

    string removeMultipleSpaces(string s){
        string optStr = "";
        bool isSpace = false;
        for (int i= 0; i < s.length(); i++){
            if(s[i] != ' '){
                optStr.push_back(s[i]);
                isSpace = true;
                continue;
            }
            
            if(isSpace){
                 optStr = optStr + ' ';
                 isSpace = false;
            }
        }
    
        if(optStr[optStr.length()-1] == ' ')
            optStr.pop_back();
        
        
        return optStr;
    }
    
    string reverseWords(string s) {
        s = removeMultipleSpaces(s);
        int i = s.length()-1;
        string outStr = "";
        string temp="";
        for(;i >= 0; i--){
            
            if(s[i] == ' '){
                reverse(temp.begin(), temp.end());
                outStr += temp + " ";
                temp="";
                continue;
            }
            
            temp.push_back(s[i]);
        }
        reverse(temp.begin(), temp.end());
        outStr += temp;
        
        return outStr;
    }
    
int main ()
{
  string str = "  hello world  ";

  string str2 = reverseWords(str);
  cout<<endl<<"string: "<<str2<<endl;
    
  return 0;
}
