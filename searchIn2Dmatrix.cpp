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
    I/P: 
    1,2,3
    4,5,6
    7,8,9
    O/P: 1,4,7,8,5,2,3,6,9
*/

void print(vector<int> v){
        for(int i = 0; i < v.size(); i++){
            cout<< v[i] <<" ";
        }
        cout<<endl;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        
        int start = 0, end = r*c-1;
        int mid = start+(end-start)/2;
        
        while(start <= end){
            int element = matrix[mid/c][mid%c];
            
            if (element == target){
                return 1;
            } else if(element < target){
                start = mid+1;
            } else{
                end = mid-1;
            }
            mid = start+(end-start)/2;
        }
     return 0;   
    }
int main (){
    vector<vector<int>> v1= {{1,2,3},{4,5,6},{7,8,9}};
    int target = 30;
    bool flag = searchMatrix(v1, target);
    cout<<"Flag: "<< flag <<endl;
  return 0;
}
