/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>

using namespace std;

struct Date
{
    int day,month,year;
};

struct Date input()
{
    int d,m,y;
    printf("day =");
    scanf("%d",&d);
    printf("month =");
    scanf("%d",&m);
    printf("year =");
    scanf("%d",&y);
    
    struct Date res = {d,m,y};
    return res;
}

void printDate(struct Date date)
{
    printf("%d.%d.%d \n",date.day,date.month,date.year);
}

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
    printf("%c%d",field.letter,field.number);
}

int main(){
    struct Date date;
    date = input();
    printDate(date);
    
    Chess field;
    input1(&field);
    print1(field);
}

