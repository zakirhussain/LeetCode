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
    v1 : "abbaca"
    O/P: "ca"
*/

    string removeDuplicates(string s) {
        int i=0;
        
        while(i<s.length()) {
            if(s[i]==s[i+1])
            {
                s.erase(i,2);
                if(i >0)
                    i--;
            }
            else
                i++;
        }
        return s;
    }


int main ()
{
  string str = "abbaca";

  string str1 = removeDuplicates(str);
  cout<<endl<<"removeDuplicates: "<<str1<<endl;
    
  return 0;
}
