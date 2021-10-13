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
    printf("Enter n:\n");
    scanf("%d",&n);
    printf("n! = 1");
    for(int i=2;i<n+1;i++)
    {
        printf("*%d",i);
    }
    printf("\n");
    printf("n! = %d",n);
    for(int i=n-1;i>0;i--)
    {
        printf("*%d",i);
    }
}
