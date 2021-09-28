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
    int a;
    scanf("%d",&a);
    int a1 = (int) (a/100);
    int a2 = (int) (a - a1*100)/10;
    int a3 = (int) (a - a1*100 - a2*10);
    if(a1!=a2 && a1!=a3 && a2!=a3)
    {
        int b;
        b = a1*100 + a2*10 + a3;
        printf("%d\n",b);
        b = a1*100 + a3*10 + a2;
        printf("%d\n",b);
        b = a2*100 + a1*10 + a3;
        printf("%d\n",b);
        b = a2*100 + a3*10 + a1;
        printf("%d\n",b);
        b = a3*100 + a2*10 + a1;
        printf("%d\n",b);
        b = a3*100 + a1*10 + a2;
        printf("%d\n",b);
    }
    else
    {
        printf("Числа не разные");
    }
}
