/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct Chess
{
    char letter;
    int number;
};

void input1(Chess* field)
{
    printf("letter(abcdefgh) = ");
    cin >> field->letter;
    printf("number(12345678) = ");
    cin >> field->number;
}

void print1(Chess field)
{
    printf("%c%d\n",field.letter,field.number);
}
int getnumbylet(Chess field)
{
    switch(field.letter)
    {
        case 'a':
            return 1;
        case 'b':
            return 2;
        case 'c':
            return 3;
        case 'd':
            return 4;
        case 'e':
            return 5;
        case 'f':
            return 6;
        case 'g':
            return 7;
        case 'h':
            return 8;
    }
}
bool ferz(Chess field1, Chess field2)
{
    int res1 = getnumbylet(field1);
    int res2 = getnumbylet(field2);
    if(field1.number == field2.number)
    {
        return true;
    }
    else if(field1.letter == field2.letter)
    {
        return true;
    }
    else if(abs(res1 - res2) == abs(field1.number - field2.number))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(){
    Chess field1;
    input1(&field1);
    print1(field1);
    
    Chess field2;
    input1(&field2);
    print1(field2);
    bool x = ferz(field1,field2);
    printf("%s\n", x ? "true" : "false");
}


