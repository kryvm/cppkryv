/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;
uint16_t mult(uint8_t x, uint8_t y)
{
    return x*y;
}

int main()
{
    uint8_t x,y;
    printf("Введите х и у через пробел\n");
    scanf("%hhu %hhu",&x,&y);
    uint16_t z = mult(x,y);
    printf("z=%hu",z);
}
