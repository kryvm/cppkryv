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
    unsigned m;
    printf("m=?\n");
    scanf("%d",&m);
    int res;
    for(int i = 1;i<m/4;i++)
    {
        if(pow(4,i)<=m)
        {
            res = i;
        }
        else
        {
            break;
        }
    }
    printf("k=%d",res);
}
