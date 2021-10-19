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
    unsigned long long m;
    unsigned j;
    printf("m=? j=?\n");
    scanf("%lld %d",&m,&j);
    int mask = ~(1<<j);
    m = m & mask;
    printf("m=%Lu %Lo",m,m);
}