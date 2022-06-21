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
    v1 : [1,2,3]
    O/P: true
*/

   bool check(vector<int>& nums) {
        
        int cnt = 0;
        int size = nums.size();
        for(int i = 1; i < nums.size(); i++){
            if (nums[i-1] > nums[i]) {
                cnt++;
            }
        }
        
        if (nums[size-1] > nums[0])
            cnt++;
        
        return cnt <= 1;
    
    }
    
int main ()
{
  vector < int >v1 = { 1,2,3};
  if (check(v1)) {
      std::cout << "Array is sorted and rotated" << std::endl;
  } else {
      std::cout << "Array is not sorted and rotated" << std::endl;
  }

 
  return 0;
}
