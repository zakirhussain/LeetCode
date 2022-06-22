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
    I/P: 
    v1 : "daabcbaabcbc"
    part : "abc"
    O/P: "dab"
*/

    string removeOccurrences(string s, string part) {
        
        while(s.find(part) < s.length()){
            s.erase(s.find(part), part.length());
        }
        return s;
    }


int main ()
{
  string str = "daabcbaabcbc";

  string str1 = removeOccurrences(str, "abc");
  cout<<endl<<"removeOccurrences: "<<str1<<endl;
    
  return 0;
}
