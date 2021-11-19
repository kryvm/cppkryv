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
    int n, osn=2;
    scanf("%d",&n);
    int k = 0;
    for(int i=1;i<=n;i++)
    {
        if(pow(2,i)<=n)
        {
            k++;
        }
    }
    k++;
    printf("%d\n",k);
    int mas[k];
    int c = 0;
    while(n>0)
    {
        mas[c]= n%osn;
        n/=osn;
        c++;
    }
    for(int i=k-1;i>=0;i--)
    {
        if(mas[i]==1)
        {
            printf("X");
        }
        else
        {
            printf("Y");
        }
    }
}
