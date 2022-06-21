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
    v1 : 1,2,3,0,0,0
    m : 3
    v2 : 2,5,6
    n :3
    O/P: 1,2,2,3,5,6
*/

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int k = m+n-1;
        
        int i = m-1, j = n-1;
        
        while(i >= 0 && j >= 0){
            
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                k--; i--;
            } else {
                nums1[k] = nums2[j];
                j--; k--;
            }
        }
        while(j>=0){
            nums1[k] = nums2[j];
            k--; j--;
        }
    }
int main ()
{
  vector < int >v1 = { 1,2,3,0,0,0};
  int m = 3;
  vector < int >v2 = { 2,5,6};
  int n = 3;
 merge(v1, m, v2, n);
  for(auto &x : v1){
    std::cout <<  x << " ";
  }
 
  return 0;
}
