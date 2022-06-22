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
    v1 : "Let's take LeetCode contest"
    O/P: "s'teL ekat edoCteeL tsetnoc"
*/

    string reverseWords(string s) {
        string str;
        string ans = "";
        for (int i = 0; i < s.length(); i++) {
            if(s[i] == ' '){
                reverse(str.begin(), str.end());
                ans += str + " ";
                str = "";
                continue;
            }
            str.push_back(s[i]);
        }
        
        reverse(str.begin(), str.end());
        ans += str;
        
        return ans;
    }
    
int main ()
{
  string str = "Let's take LeetCode contest";

  string str2 = reverseWords(str);
  cout<<endl<<"string: "<<str2<<endl;
    
  return 0;
}
