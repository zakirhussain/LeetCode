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
    v1 : "aabbccc"
    O/P: "a2b2c3"
*/

    int compress(vector<char>& chars) {
        
        int i=0;
        int n=chars.size();
        int ansIdx=0;
        while(i<n){
            
            int j = i+1;
            while(j<n && chars[i] == chars[j]){
                j++;
            }
            chars[ansIdx++] = chars[i];
            int count = j-i;
            if(count>1){
                string cnt = to_string(count);
                cout <<count <<" "<< cnt<<endl;
                for(char x : cnt){
                    chars[ansIdx++] = x;
                }
            }
            i=j;
        }
        return ansIdx;
    }

int main ()
{
  vector<char> v = {'a','a','b','b','c','c','c'};

  cout<<endl<<"compress: "<<compress(v)<<endl;
    
  return 0;
}
