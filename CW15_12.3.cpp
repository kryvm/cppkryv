/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    unsigned long long summ=0;
    string digits;
    int n;
    cout.precision(3);
    cout << "Enter n: ";
    cin >> n;
    for(int i=1; i<n+1; i++)
    {
        cout.width(5);
        cout << i << " ";
    }
    cout << endl;
    for(int i=1; i<n+1; i++)
    {
        cout.width(6);
        double sqrt_n = sqrt(i);
        cout << sqrt_n << " ";
    }


    return 0;
}
