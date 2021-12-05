/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#define N 100

int main() {
    const char* fname="F.dat";
    FILE* F=fopen(fname, "rb");
    int mas[N];
    int item;
    int k=0;
    while (!feof(F)) {
        int res=fread(&item, sizeof(item),1, F);
        if(res!=1) break;
        mas[k++]=item;
    }

    printf("last element = %d",mas[k]);
    fclose(F);
}