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
    int n;
    unsigned k;
    printf("n=? k=?\n");
    scanf("%d %d",&n,&k);
    int mask = 1<<k;
    n = n | mask;
    printf("n=%d",n);
}