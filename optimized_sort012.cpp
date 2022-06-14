/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
/*
    sorting of 0s and 1s and 2nd
    I/P: 0,1,1,1,2,0,1,0,0,2,1
    O/P: 0 0 0 0 1 1 1 1 1 2 2
*/
/*
Dutch National Flag Algorithm
This algorithm says we will maintain three variables
low,mid and high
We will divide the array into three parts

0 to low-1 will only contain 0
high+1 to n will only contain 2
and rest elements are 1 only
Initally
low = 0 high = n-1 mid = 0
we will iterate and check the value of mid if
mid==0 then swap with element at low index and increase both.
mid==1 then increase mid.
mid==2 then swap elements of high and mid and decrease high.
*/
void sort012(int nums[], int n){
        int low=0;
        int mid = 0;
        int high = n-1;
        while(mid<=high){
            switch(nums[mid]){
                case 0: swap(nums[low++],nums[mid++]);
                        break;
                case 1: mid++;
                        break;
                case 2: swap(nums[high--],nums[mid]);
                        break;
                
            }
        }
}

int main()
{
    //int ar[] = {0,1,1,1,0,1,0,0,1,0};
    int ar[] = {0, 0, 1, 0, 0, 2, 1, 0, 1, 0, 0, 2, 0, 0, 1, 1, 2};
    int size = sizeof(ar)/sizeof(ar[0]);
    
    cout<<"Before Sorting\n";
    for (int i = 0; i < size; i++){
        cout<< ar[i] << " ";
    }    
    
    cout<<"\n";
    
    sort012(ar, size);
    
    cout<<"After Sorting\n";
    for (int i = 0; i < size; i++){
        cout<< ar[i] << " ";
    }    
    
    return 0;
}
