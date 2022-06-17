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
    I/P: 4,3,2,1
    I/P: 2
    O/P: 3,4,1,2
*/

void rotate(vector<int>& nums, int k) {
    
        k=k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
}

int main ()
{
  vector < int >v = { 1,2,3,4 };

  rotate (v, 2);
  for(auto &x : v){
    std::cout <<  x << " ";
  }
 
  return 0;
}
