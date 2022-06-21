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
    v1 : [0,1,0,3,12]
    O/P: [1,3,12,0,0]
*/

 void moveZeroes(vector<int>& nums) {
        int i = 0;
        
        for(int j = 0; j < nums.size(); j++){
            if(nums[j] != 0){
                swap(nums[j], nums[i++]);
            }
        }
        
    }
int main ()
{
  vector < int >v1 = { 0,1,0,3,12};
  moveZeroes(v1);
  for(auto &x : v1){
    std::cout <<  x << " ";
  }
 
  return 0;
}
