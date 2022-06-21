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
    v1 : [1,2,3,4,5,6,7]
    rotate by: 3
    O/P: [5,6,7,1,2,3,4]
*/

    void rotate(vector<int>& nums, int k) {
    
        int size =  nums.size();
        vector<int> tmp(size);
        
        for(int i = 0; i < size; i++){
            int pos = (i+k)%size;
            
            tmp[pos] = nums[i];
        }
        
        nums = tmp;
    }
    
int main ()
{
  vector < int >v1 = { 1,2,3,4,5,6,7};
  int pos = 3;
  rotate(v1, pos);
  for(auto x :  v1){
      std::cout << x << " " ;
  }

  return 0;
}
