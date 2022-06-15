/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
/*
    FirstAndLastOccurance
    I/P: 
*/

int
firstOccurence (vector < int >&nums, int target)
{

  int s = 0, e = nums.size () - 1;
  int ans = -1;
  int mid = (s + e) / 2;

  while (s <= e)
    {

      if (nums[mid] == target)
	{
	  ans = mid;
	  e = mid - 1;
	}
      else if (nums[mid] > target)
	{
	  e = mid - 1;
	}
      else
	{
	  s = mid + 1;
	}
      mid = (s + e) / 2;
    }
  return ans;
}

int
lastOccurence (vector < int >&nums, int target)
{

  int s = 0, e = nums.size () - 1;
  int ans = -1;
  int mid = (s + e) / 2;

  while (s <= e)
    {

      if (nums[mid] == target)
	{
	  ans = mid;
	  s = mid + 1;
	}
      else if (nums[mid] > target)
	{
	  e = mid - 1;
	}
      else
	{
	  s = mid + 1;
	}

      mid = (s + e) / 2;
    }
  return ans;
}

vector < int >
FirstAndLastOccurance (vector < int >&nums, int target)
{
  vector < int >v;
  int first = firstOccurence (nums, target);
  int last = lastOccurence (nums, target);

  v.push_back (first);
  v.push_back (last);
  return v;
}

int
main ()
{
  vector < int >v = { 10, 11, 3, 14, 18, 3, 30 };

  vector <int> v2 = FirstAndLastOccurance (v, 3);
  for(auto x : v2){
      cout << x <<" ";
  }
 
  return 0;
}
