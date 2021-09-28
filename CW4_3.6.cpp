/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max1,max2,min1,min2,x,y;
    max1 = max(a,b);
    max2 = max(max1,c);
    min1 = min(a,b);
    min2 = min(min1,c);
    x = max2;
    y = min2;
    printf("max = %d,min = %d",x,y);
}
