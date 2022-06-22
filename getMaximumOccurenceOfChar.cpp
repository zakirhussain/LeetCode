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
    v1 : "output"
    O/P: t
*/

char getMaxOccurChar(string s){
    char ch[26] = {0};
    
    for (int i = 0; i < s.length(); i++){
        int index = s[i]-'a';
        ch[index]++;
    }
    
    int max = -1;
    int idx = 0;
    
    for (int i = 0; i < 26; i++){
        if(max < ch[i]){
            max = ch[i];
            idx = i;
        }
    }
    
    return 'a' + idx;
}
int main ()
{
  string str = "ooooqqqqq";

  char ch = getMaxOccurChar(str);
  cout<<endl<<"getMaxOccurChar: "<<ch<<endl;
    
  return 0;
}
