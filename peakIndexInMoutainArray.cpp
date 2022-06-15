/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
/*
    Find Peak Index in Mountain Array.
    I/P: 0, 1, 0
*/

    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0, e = arr.size()-1;
        int mid = (s+e)/2;
        while(s<e){
            
            if (arr[mid] < arr[mid+1]){
                s = mid+1;
            } else{
                e = mid;
            }
            mid = (s+e)/2;
        }
        
        return s;
    }
    
int
main ()
{
  vector < int >v = { 0,10,5,2 };

  int index = peakIndexInMountainArray (v);
  std::cout << "peakIndexInMountainArray: " << index << std::endl;
 
  return 0;
}
