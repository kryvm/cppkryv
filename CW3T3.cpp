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
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(abs(a)<pow(2,10) && abs(b)<pow(2,10) && abs(c)<pow(2,10))
    {
        int dobutok1 = a*b*c;
        printf("%d\n",dobutok1);
    }
    else
    {
        printf("Числа больше 2^10\n");
    }
    
    if(abs(a)<pow(2,21) && abs(b)<pow(2,21) && abs(c)<pow(2,21))
    {
        long long int dobutok2 = a*b*c;
        printf("%lld\n",dobutok2);
    }
    else
    {
        printf("Числа больше 2^21");
    }
}
