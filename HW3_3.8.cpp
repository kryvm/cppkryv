/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
#include <limits.h>

using namespace std;
int main()
{
    uint32_t x,y;
    printf("Введите два числа для добавления\n");
    scanf("%d %d",&x,&y);
    uint32_t sum;
    if(x < abs(pow(2,32)-1 - y))
    {
        sum = x+y;
        printf("%d\n",sum);
    }
    else
    {
        printf("будет переполнение типа\n");
    }
    int32_t a,b;
    int32_t mult;
    printf("Введите два числа для умножения\n");
    scanf("%d %d",&a,&b);
    if( abs(a) < (pow(2,32)-1)/abs(a))
    {
        mult = a*b;
        printf("%d\n",mult);
    }
    else
    {
        printf("будет переполнение типа");
    }
}
