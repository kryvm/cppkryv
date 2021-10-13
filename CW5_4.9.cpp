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
    unsigned m;
    printf("m=?\n");
    scanf("%d",&m);
    int res;
    int i = 1;
    while(pow(2,i)<=m)
    {
        i=i+1;
    }
    res = pow(2,i);
    printf("2^r=%d\nr=%d",res,i);
}
