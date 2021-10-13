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
    int x1 = 2;
    int n1 = 3;
    int x2 = 1;
    int y2 = 2;
    int n2 = 4;
    int sum1,sum2;
    sum1 = 1;
    printf("a)\ny=");
    for(int i = n1;i>0;i--)
    {
        sum1 = sum1 + pow(x1,i);
    }
    printf("%d\n",sum1);
    sum2 = 1;
    printf("b)\ny=");
    for(int i = n2;i>0;i--)
    {
        sum2 = sum2 + pow(x2,pow(2,i))*pow(y2,i);
    }
    printf("%d",sum2);
}
