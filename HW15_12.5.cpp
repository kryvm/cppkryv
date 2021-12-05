/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <fstream>
#define N 32

using namespace std;

int main() {
    unsigned long long *arr=new unsigned long long[N]; //create <256kb arr
    const char* fin="input.txt";
    ifstream f(fin); //create stream
    int n=0;
    while (!f.eof()) {
        f>>arr[n]; //filling array
        n++;
    }
    f.close();
    for (int i=1; i<n; i++)//output results 
    {
        cout.precision(3);
        cout<<fixed<<sqrt(arr[n-i-1])<<endl;
    }

    return 0;
}