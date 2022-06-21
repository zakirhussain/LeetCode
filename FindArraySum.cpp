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
    v1 : [1,2,3,4]
    v2 : [1,2,3,4]
    O/P: [2,4,6,8]
*/

vector<int> findArraySum(vector<int>& v1, vector<int>& v2){
    int i = v1.size()-1;
    int j = v2.size()-1;
    vector<int> ans;
    int carry = 0;
    
    while(i>=0 && j>=0){
        int val = v1[i] + v2[j]  + carry;
        int sum = val%10 ;
        carry = val/10;
        ans.push_back(sum);
        i--; j--;
    }
    
    while(i>=0){
        int val = v1[i] + carry;
        int sum = val%10;
        carry = val/10;
        ans.push_back(sum);
        i--;
    }
    
    while(j>=0){
        int val = v2[j] + carry;
        int sum = val%10;
        carry = val/10;
        ans.push_back(sum);
        j--;
    }
    
    if (carry){
        ans.push_back(carry);
    }
    
    reverse(ans.begin(), ans.end());
    return ans;
}
    
int main ()
{
  vector < int >v1 = { 2,3,4};
  vector < int >v2 = { 2,3,4};
  vector < int >v3;
  
  v3 = findArraySum(v1, v2);
  
  for(auto x :  v3){
      std::cout << x << " " ;
  }

  return 0;
}
