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

int checkday(Date date)
{
    int k = 0;
    if(date.month == 1 || date.month == 10)
    {
        k = 1;
    }
    else if(date.month == 5)
    {
        k = 2;
    }
    else if(date.month == 8)
    {
        k = 3;
    }
    else if(date.month == 2 || date.month == 3 || date.month == 11)
    {
        k = 4;
    }
    else if(date.month == 6)
    {
        k = 5;
    }
    else if(date.month == 12 || date.month == 9)
    {
        k = 6;
    }
    else
    {
        k = 0;
    }
    int code2 = 0;
    int twof = (int) date.year/100;
    twof = twof*100;
    int last2 = date.year-twof;
    int cel = (int) last2/4;
    code2 = (6+last2+cel)%7;
    return (date.day+k+code2)%7 - 1;
}
void tomorrow(Date today)
{
    struct Date tomorrow;
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (today.day==31 && today.month==12) {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year= today.year +1;

    }
    else if (today.day == days[today.month-1]) {
        tomorrow.day = 1;
        tomorrow.month = today.month +1;
        tomorrow.year = today.year;
    }
    else {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year= today.year;
    }
    printDate(tomorrow);
}

int main(){
    struct Date date;
    date = input();
    printDate(date);
    int check = checkday(date);
    tomorrow(date);
    printf("den` nedeli = %d",check);
}




