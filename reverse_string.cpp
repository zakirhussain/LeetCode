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
    v1 : ['h','e','l','l','o']
    O/P: ['o','l','l','e','h']
*/

    void reverseString(vector<char>& s) {
        int st = 0;
        int e = s.size()-1;
        
        while(st<=e){
            swap(s[st++], s[e--]);
        }
        
    }
    
int main ()
{
  vector < char >v1 = { 'h','e','l','l','o', '\0'};
 
  for(auto x :  v1){
      std::cout << x << " " ;
  }
  reverseString(v1);
  cout<<endl;
  for(auto x :  v1){
      std::cout << x << " " ;
  }  
  return 0;
}
