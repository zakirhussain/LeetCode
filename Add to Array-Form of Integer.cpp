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
    v1 : [1,2,0,0]
    num : 34
    O/P: [1,2,3,4]
*/

    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        int i = num.size()-1;
        int carry = 0;
        vector<int> ans;
        
        while(i>=0 && k>0){
            int val = num[i] + k%10 + carry;
            int sum = val%10;
            carry = val/10;
            k = k /10;
            i--;
            ans.push_back(sum);
        }
        
        while(i>=0){
            int val = num[i] + carry;
            int sum = val%10;
            carry = val/10;
            i--;
            ans.push_back(sum);
        }
        
        while(k>0){
            int val = k%10 + carry;
            int sum = val%10;
            carry = val/10;
            k = k /10;
            ans.push_back(sum);
        } 
        
        if(carry){
            ans.push_back(carry);
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
    
int main ()
{
  vector < int >v1 = { 1,2,0,0};
  vector <int> v2;
  int num = 34;
  
  v2 = addToArrayForm(v1, num);
  
  for(auto x :  v2){
      std::cout << x << " " ;
  }

  return 0;
}
