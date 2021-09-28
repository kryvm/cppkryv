/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;
double sigmoid(double x)
{
    return 1/(1 + exp((-1)*x));
}
double sigmoid_derivative(double x)
{
    return (exp((-1)*x))/pow((1+exp((-1)*x)),2);
}

int main()
{
    double x = 0;
    double a = sigmoid(x);
    printf("%lf\n",a);
    double b = sigmoid_derivative(x);
    printf("%lf",b);
}
