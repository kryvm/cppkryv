/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    float k;
    do{
    cout << "enter k :";
    cin >> k;
    }while(abs(k)>10000);
    cout << k << endl;
    
    int n;
    do{
    cout << "enter n :";
    cin >> n;
    }while(abs(n)>10);
    cout << n << endl;
    
    long double res;
    res = pow(k,n);
    cout << fixed << showpoint;
    cout.precision(4);
    cout << res << endl;
}