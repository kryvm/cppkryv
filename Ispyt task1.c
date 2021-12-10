/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define N 100

void printarr(int arr[N], int n) // приклад використання масиву як аргумента функції для його виводу
{
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    printf("\n");
}

int *inparray(int n)   //вивід динамічного масиву як результат функції 
{  
    int *p = (int*) calloc(n, sizeof *p); 
    for(int i=0;i<n;i++)  
    {
        printf("arr[%d] = ",i);
        scanf("%d",&p[i]);  
    }
    printf("\n");
    return p;  
}  

int main()
{
    int size = 5;
    int arr[] = {1,2,3,4,5};//визначення та ініціалізація масиву
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    double* a = (double*) calloc(size, sizeof *a);  // визначення динамічного масиву за допомогою вказівника на місце в пам'яті
    if (a)
    {
        double s = 0;
        for (int i = 0; i < size; i++) // приклад використання динамічного масиву щоб рахувати суму його елементів
        {
            scanf("%lf",&a[i]);
            s += a[i];
        }
        printf("%lf\n",s);
        free(a);
    }
    
    printarr(arr,5); // arr - масив і аргумент функції
    printf("\n");
    
    int *f;  
    f=inparray(3);  //ввод динамічного масиву як результат функції
    for(int i=0;i<3;i++)  
    {
       printf("f[%d] = %d\n",i,f[i]);  
    }  
    free(f);
}
