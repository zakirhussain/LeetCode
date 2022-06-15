/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
/*
    Binary search
*/

int
binarySearch (vector < int >&nums, int target)
{

  int start = 0, end = nums.size () - 1;

  // divide by 2, to avoid overflow conditon 
  int mid = (start + end) / 2;

  while (start <= end)
    {

      if (nums[mid] == target)
	{
	  return mid;
	  break;
	}
      else if (nums[mid] < target)
	{
	  start = mid + 1;
	}
      else
	{
	  end = mid - 1;
	}

      mid = (start + end) / 2;
    }

  return -1;
}

int
main ()
{
  vector<int> v = {10,11,14,18,30};
  
  int index = binarySearch(v, 30);
  
  std::cout << "Element Index:" << index<< std::endl;

  return 0;
}
