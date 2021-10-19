/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;
bool checkprost(int a, int b)
{
    for(int i=2; i<=a; i++)
    {
        if ((a%i==0) && (b%i==0)) {
           return false;
           break;
        }
    }
    return true;
}
int oiler(int n)
{
    int counter = 0;
    for(int i=0; i<n; i++)
    {
        if(checkprost(n,i))
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    printf("n=?\n");
    int n;
    scanf("%d",&n);
    printf("%d",oiler(n));
}