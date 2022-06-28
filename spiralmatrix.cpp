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
    
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int sRow = 0;
        int eCol = matrix[0].size()-1;
        int eRow = matrix.size()-1;
        int sCol = 0;
        
        vector<int> ans;
        
        int cnt = 0;
        int total = (eCol+1)*(eRow+1);
        
        while(cnt < total){
            
            // first row
            for(int i = sCol; i <= eCol && cnt < total; i++){
                ans.push_back(matrix[sRow][i]);
                cnt++;
            }
            sRow++;
            print(ans);
            
            // end Col
            for(int i = sRow; i <= eRow && cnt < total; i++){
                ans.push_back(matrix[i][eCol]);
                cnt++;
            }
            eCol--;
            print(ans);
            
            // end Row
            for(int i = eCol; i >= sCol && cnt < total; i--){
                ans.push_back(matrix[eRow][i]);
                cnt++;
            }
            eRow--;
            print(ans);
            
            // first Col
            for(int i = eRow; i >= sRow && cnt < total; i--){
                ans.push_back(matrix[i][sCol]);
                cnt++;
            }
            sCol++;
            print(ans);
        }
        return ans;
    }
int main (){
    vector<vector<int>> v1= {{1,2,3},{4,5,6},{7,8,9}};
    
    vector<int> v2 = spiralOrder(v1);
    print(v2);
  return 0;
}
