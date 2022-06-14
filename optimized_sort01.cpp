/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
/*
    sorting of 0s and 1s
    I/P: 0,1,1,1,0,1,0,0,1
    O/P: 0 0 0 0 1 1 1 1 1
*/

void sort01(int ar[], int size){
    int start = 0, end = size-1;
    while ( start < end ){
        if (ar[start] == 0)
            start++;
            
        if (ar[end] == 1)
            end--;
        
        if (ar[start] == 1 && ar[end] == 0){
            ar[start] = 0;
            ar[end] = 1;
            start++;
            end--;
        }
    }
}

int main()
{
    //int ar[] = {0,1,1,1,0,1,0,0,1,0};
    int ar[] = {0,0,1,0, 0, 1,0, 1, 0, 0, 0, 0, 1, 1};
    int size = sizeof(ar)/sizeof(ar[0]);
    
    cout<<"Before Sorting\n";
    for (int i = 0; i < size; i++){
        cout<< ar[i] << " ";
    }    
    
    cout<<"\n";
    
    sort01(ar, size);
    
    cout<<"After Sorting\n";
    for (int i = 0; i < size; i++){
        cout<< ar[i] << " ";
    }    
    
    return 0;
}
