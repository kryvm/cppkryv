/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Rational{
int numerator; 
unsigned int denominator; 
};

void sum(Rational a, Rational b, Rational &sum)
{
    sum.numerator = b.denominator*a.numerator + a.denominator*b.numerator;
    sum.denominator = b.denominator*a.denominator;
}

void mult(Rational a, Rational b, Rational &sum)
{
    sum.numerator = a.numerator * b.numerator;
    sum.denominator = b.denominator * a.denominator;
}

void check(Rational a, Rational b)
{
    double num1 = ((1.0)*a.numerator)/a.denominator;
    double num2 = ((1.0)*b.numerator)/b.denominator;
    if(abs(num2 - num1) < 0.000000001)
    {
        printf("a==b");
    }
    else if(num1>num2)
    {
        printf("a>b");
    }
    else
    {
        printf("b>a");
    }
    printf("\n");
}

void toNormal(Rational &a)
{
    int num;
    if(a.numerator > a.denominator)
    {
        num = a.numerator;
    }
    else
    {
        num = a.denominator;
    }
    
    for(int i = num; i>0; i--)
    {
        if(a.numerator%i == 0 && a.denominator%i == 0)
        {
            a.numerator /= i;
            a.denominator /= i;
        }
    }
}

int main()
{
    Rational a;
    Rational sum1;
    Rational b;
    Rational res;
    a.numerator = 1;
    a.denominator = 2;
    b.numerator = 16;
    b.denominator = 40;
    printf("%d %d\n",a.numerator,a.denominator);
    printf("%d %d\n",b.numerator,b.denominator);
    sum(a,b,sum1);
    printf("%d %d\n",sum1.numerator,sum1.denominator);
    mult(a,b,sum1);
    printf("%d %d\n",sum1.numerator,sum1.denominator);
    check(a,b);
    toNormal(b);
    printf("%d %d\n",b.numerator,b.denominator);
}
