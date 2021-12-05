/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;
int intlog(double base, double x) {
    return (int)(log(x) / log(base));
}

void inp_arr(double* arr, int n)
{
    for (int i=0; i<n; i++)
    {
        printf("arr[%i] = ", i);
        cin >> arr[i];
    }
}

void print_arr(double* arr, int n)
{
    for (int i=0; i<n; i++)
    {
        printf("arr[%d] = %f\n", i, arr[i]);
    }
}

void write_file(char* filename, double* arr, int n)
{
    FILE* f = fopen(filename, "wb");
    fwrite(arr, sizeof(*arr), n, f);
    fclose(f);
}

int read_file(char* filename, double* arr)
{
    FILE* f = fopen(filename, "rb");
    int i = 0;
    while (!feof(f))
    {
        if (fread(&arr[i], sizeof(*arr), 1, f) != 1) break;
        i++;
    }
    fclose(f);
    return i;
}

void func1(char* fin_name, char* fout_name)
{
    FILE* fin = fopen(fin_name, "rb");
    FILE* fout = fopen(fout_name, "wb");

    double tmp;
    while (!feof(fin))
    {
        fread(&tmp, sizeof(tmp), 1, fin);
        if (tmp / 2 == (int) tmp/2) fwrite(&tmp, sizeof(tmp), 1, fout);
    }
    fclose(fin);
    fclose(fout);
}

int main()
{
    int n;
    cout << "enter n:" << endl;
    cin >> n;
    double arr[n];
    inp_arr(arr, n);
    char* fin="f", *fout="g";
    write_file(fin, arr, n);
    func1(fin, fout);
    double arr2[n];
    int k = read_file(fout, arr2);
    print_arr(arr2, k);
}