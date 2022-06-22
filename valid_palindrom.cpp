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
    v1 : "A man, a plan, a canal: Panama"
    O/P: true
*/

    bool checkSpecialChar(char ch){
        if((ch >='a'&& ch <= 'z') || (ch >='A'&& ch <= 'Z') || (ch >='0'&& ch <= '9'))
            return false;
        return true;
    } 
    
    char toLowerCase(char ch){
        if ( (ch>='a' && ch<='z') || (ch>='0' && ch<='9') )
            return ch;
    
        return ch-'A'+'a';
    }
    
    string removeNonAlphaAndConvertIntoLowerCase(string s){
        string str="";
        for(int i = 0; i < s.length(); i++){
            if( !checkSpecialChar(s[i]) ) {
                str.push_back(toLowerCase(s[i]));
            }    
        }
        //str.push_back('\0');
        
        return str;
    }
    
    bool isPalindrome(string s) {
        
        string str = removeNonAlphaAndConvertIntoLowerCase(s);
        int st = 0;
        int e = str.length()-1;
       
        while(st<=e){
            if (str[st++] != str[e--])
                return 0;
        }
        return 1;
    }
int main ()
{
  string str = "A man, a plan, a canal: Panama";

  bool isPalindrom = isPalindrome(str);
  cout<<endl<<"isPalindrom: "<<isPalindrom<<endl;
    
  return 0;
}
