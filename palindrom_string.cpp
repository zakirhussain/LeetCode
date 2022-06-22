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
    v1 : ['a','b','c','b','a']
    O/P: true
*/

    bool palindromString(vector<char>& s) {
        int st = 0;
        int e = s.size()-1;
        
        while(st<=e){
           
            if(s[st++] != s[e--]){
                return 0;
            }
        }
        return 1;
    }
    
int main ()
{
  vector < char >v1 = { 'a','b','c','b','a'};
 
 /* for(auto x :  v1){
      std::cout << x << " " ;
  }*/
  bool isPalindrom = palindromString(v1);
  cout<<endl<<"isPalindrom: "<<isPalindrom<<endl;
    
  return 0;
}
