#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    struct tm date1,date2,date3,date4,date5;
    date1 = input();
    printf("Date1 : \n");
    print(date1);
    printf("Next to date1 : \n");
    print(Next(date1));
    printf("Previous to date1 : \n");
    print(Previous(date1));
    date3 = Next(date1);
    Comparision(date1,date3);
    WhichDay(date1);
    date4 = AddDays(date1,1);
    printf("date4 (date1 + 1 day) = ");
    print(date4);
    int dat1dat4 = daysbetween(date1,date4);
    printf("days between date1 and date4 = %d\n",dat1dat4);
    date5 = AddDate(date1,date4);
    printf("Date1 + Date4 :");
    print(date5);
    date2 = SubtractDate(date5,date4);
    printf("Date5 - date4 should be equal to date1 : ");
    print(date2);
    printf("days from zero to date1 : %d\n",daysfromzero(date1));

    struct tm time1,time2,time3,time4,time5,time6;
    time1 = inputTime();
    printTime(time1);

    time2 = inputTime();
    struct tm dat1,dat2;
    dat1 = addtimetodate(date1,time1);
    printf("date1 + time1 :\n");
    print(dat1);

    printf("dat1 - time1 (should be equal to date1):\n");
    dat2 = Subtracttimefromdate(dat1,time1);
    print(dat2);

    printf("time1 - time2 :\n");
    time6 = subtracttime(time1,time2);
    printTime(time6);

    time3 = addtime(time1,time2);
    printf("time2 + time1 :\n");
    printTime(time3);



    time4 = datetotime(dat1);
    printf("dat1 to time4\n :");
    printTime(time4);

    ComparisionTime(time1,time2);
}
