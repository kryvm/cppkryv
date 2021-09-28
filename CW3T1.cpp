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
    int sum = a1+a2+a3;
    int back = a3*100 + a2*10 + a1;
    printf("сотен - %d десятков - %d единиц - %d сумма цифр - %d обратное чтение - %d",a1,a2,a3,sum,back);
}
