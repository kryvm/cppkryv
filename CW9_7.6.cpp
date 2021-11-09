#include <stdio.h>
#include <stdlib.h>
#define N 10

int input(double mas[], int size);
void output(const double mas[], int size);
void scal_sum(const double mas1[], const double mas2[],double sum[], int size);
double scal_mult(const double mas1[], const double mas2[], int size);

int main(){
    double mas1[N];
    double mas2[N];
    double sum[N];
    
    int n;
    printf("N=");
    scanf("%u",&n);
    input(mas1,n);
    input(mas2,n);
    double mult = scal_mult(mas1,mas2,n);
    scal_sum(mas1,mas2,sum,n);
    printf("Dobutok =%lf",mult);
    output(sum,n);
}

int input(double mas[], int size){
    for(int i=0;i<size;i++){
        printf("mas[%d]=",i);
        scanf("%lf",&mas[i]);
    }
    return size;
}

void output(const double mas[], int size){
    for(int i=0;i<size;i++){
        printf("\n mas[%d]=%lf",i,mas[i]);
    }
}

void scal_sum(const double mas1[], const double mas2[],double sum[], int size)
{
    for(int i=0;i<size;i++)
    {
        sum[i] = mas1[i] + mas2[i];
    }
}

double scal_mult(const double mas1[], const double mas2[], int size){
    double res = 0;
    for(int i=0;i<size;i++){
        res += mas1[i] * mas2[i];
    }
    return res;
}