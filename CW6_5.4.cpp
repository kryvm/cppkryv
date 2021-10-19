/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;
int fact(int i)
{
	if (i <= 1)
	{
	    return 1;   
	} 
  	else 
  	{
  	    return i*fact(i-1);
  	}
}

int main()
{
    int n,k;
    printf("n=?\n");
    scanf("%d",&n);
    printf("k=?\n");
    scanf("%d",&k);
    double p1,p2;
    p1 = 1;
    p2 = 1;
    for(int i = 1;i<=n;i++)
    {
        p1 = p1*(1.0 + (1.0/fact(i)));
        p2 = p2*(1.0 + (pow(-1,k)/pow(i,2)));
        printf("p1 = %lf p2 = %lf n = %d i = %d\n",p1,p2,n,i);
    }
    printf("p1=%lf\n",p1);
    printf("p2=%lf",p2);
}
