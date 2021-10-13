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
   unsigned n;
   printf("n=?\n");
   scanf("%d",&n);
   printf("a)\n");
   double sum1, sum2;
   sum1 = sqrt(2);
   for(int i = 0;i<n-1;i++)
   {
       sum1 = sqrt(2 + sum1);
   }
   printf("y1 = %lf\n",sum1);
   printf("b)\n");
   sum2 = 0;
   for(int i = n;i>0;i--)
   {
       sum2 = sqrt(3*i + sum2);
   }
   printf("y2 = %lf",sum2);
}
