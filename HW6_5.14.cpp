/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;
int inversion(int x)
{
    int len = 1;
    int k = 1;
    while(k!=0)
    {
        k = (int) x/pow(10,len);
        len++;
    }
    len--;
    int num,delta;
    int sum = 0;
    for(int i = 1; i<=len;i++)
    {
        delta = (int) x/10;
        printf("delta = %d\n",delta);
        delta = (x-delta*10);
        num = delta*pow(10,len-i);
        sum = sum + num;
        
        x = (int) x/10;
        printf("delta = %d, num = %d, sum = %d\n",delta,num,sum);
    }
    return sum;
}

int main()
{
    int x = 12342;
    int k = inversion(x);
    printf("inversion = %d",k);
}
