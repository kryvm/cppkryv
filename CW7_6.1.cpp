/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    uint8_t n;
    int x = 1;
    printf("n=?\n");
    scanf("%hhd",&n);
    if(n<64)
    {
        x <<= n;
        printf("x = %d",x);
    }
    else
    {
        printf("n>64");
    }
}
