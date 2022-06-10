/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;

/*

Decimal to Binary
*/
int main()

{

    int decNum = 4;
    int binNum = 0;
    int i = 0;
    while(decNum != 0){
        int bit = decNum&1;
        binNum = (bit*pow(10, i)) + binNum;
        decNum = decNum >> 1;
        i++;
    }
    std::cout << binNum << std::endl;
}
