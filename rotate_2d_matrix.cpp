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

void print(vector<vector<int>> v){
        for(int i = 0; i < v.size(); i++){
            for(int j = 0; j < v[0].size(); j++){
                cout<< v[i][j] <<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    
    void rotate(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        
        for (int i = 0; i < r; i++){
            for (int j = 0; j < i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        for (int i = 0; i < r; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        } 
    }
int main (){
    vector<vector<int>> v1= {{1,2,3},{4,5,6},{7,8,9}};
    print(v1);
    rotate(v1);
    print(v1);
  return 0;
}
