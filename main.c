#include <stdio.h>
#include <stdlib.h>
#include "structs.h"

struct Date input()
{
    int d,m,y;
    do{
    printf("year =");
    scanf("%d",&y);
    }while(y<0);

    do{
    printf("month =");
    scanf("%d",&m);
    }while(m>12 || m<0);

    int maxdays = 31;
    if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        maxdays = 30;
    }
    else if (m == 2)
    {
        maxdays = 28;
        if (y % 4 == 0)
        {
            maxdays = 29;
            if (y % 100 == 0)
            {
                maxdays = 28;
                if (y % 400 == 0)
                {
                    maxdays = 29;
                }
            }
        }
    }

    do{
    printf("day =");
    scanf("%d",&d);
    }while(d<0 || d>maxdays);

    struct Date res = {d,m,y};
    return res;
}

struct Date Next(struct Date date)
{
    int d = date.day;
    int m = date.month;
    int y = date.year;
    int maxdays = 31;
    if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        maxdays = 30;
    }
    else if (m == 2)
    {
        maxdays = 28;
        if (y % 4 == 0)
        {
            maxdays = 29;
            if (y % 100 == 0)
            {
                maxdays = 28;
                if (y % 400 == 0)
                {
                    maxdays = 29;
                }
            }
        }
    }
    d++;
    if(d>maxdays)
    {
        d=1;
        m++;
        if(m>12)
        {
            m=1;
            y++;
        }
    }
    struct Date res = {d,m,y};
    return res;
}

struct Date Previous(struct Date date)
{
    int d = date.day;
    int m = date.month;
    int y = date.year;
    int maxdays = 31;
    if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        maxdays = 30;
    }
    else if (m == 2)
    {
        maxdays = 28;
        if (y % 4 == 0)
        {
            maxdays = 29;
            if (y % 100 == 0)
            {
                maxdays = 28;
                if (y % 400 == 0)
                {
                    maxdays = 29;
                }
            }
        }
    }
    d--;
    if(d==0)
    {
        d=maxdays;
        m--;
        if(m==0)
        {
            m=12;
            y--;
        }
    }
    struct Date res = {d,m,y};
    return res;
}

int daysfromzero(struct Date date1)
{
    int count = 0;
    struct Date date;
    date.year = 0;
    date.month = 0;
    date.day = 1;
    while(date.year != date1.year)
    {
        date = Next(date);
        count++;
    }
    while(date1.month != date.month)
    {
        date = Next(date);
        count++;
    }
    while(date1.day != date.day)
    {
        date = Next(date);
        count++;
    }
    return count;
}

struct Date AddDays(struct Date date,int days)
{
    struct Date res;
    res = Next(date);
    for (int i = 0; i < days - 1; i++) {
        res = Next(res);
    }
    return res;
}

struct Date SubtractDays(struct Date date1,int days)
{
    struct Date res;
    res = Previous(date1);
    for (int i = 0; i < days - 1; i++) {
        res = Previous(res);
    }
    return res;
}


struct Date AddDate(struct Date date1,struct Date date2)
{
    int count = daysfromzero(date2);
    struct Date res = AddDays(date1,count);
    return res;
}

struct Date SubtractDate(struct Date date1,struct Date date2)
{
    int count = daysfromzero(date2);
    struct Date res = SubtractDays(date1,count);
    return res;
}



int daysbetween(struct Date date1, struct Date date2)
{
    int count = 0;
    if(date1.year > date2.year)
    {
        while(date1.year != date2.year)
        {
            date2 = Next(date2);
            count++;
        }
    }
    else if(date1.year < date2.year)
    {
        while(date1.year != date2.year)
        {
            date1 = Next(date1);
            count++;
        }
    }

    if(date1.month > date2.month)
    {
        while(date1.month != date2.month)
        {
            date2 = Next(date2);
            count++;
        }
    }
    else if(date1.month < date2.month)
    {
        while(date1.month != date2.month)
        {
            date1 = Next(date1);
            count++;
        }
    }

    if(date1.day > date2.day)
    {
        while(date1.day != date2.day)
        {
            date2 = Next(date2);
            count++;
        }
    }
    else if(date1.day < date2.day)
    {
        while(date1.day != date2.day)
        {
            date1 = Next(date1);
            count++;
        }
    }

    return count;
}



void WhichDay(struct Date date)
{
    int d = date.day;
    int m = date.month;
    int y = date.year;
    int weekday  = (d += m < 3 ? y-- : y - 2, 23*m/9 + d + 4 + y/4- y/100 + y/400)%7;
    if(weekday == 1)
    {
        printf("Monday");
    }
    else if(weekday == 2){
        printf("Tuesday");
    }
    else if(weekday == 3){
        printf("Wednesday");
    }
    else if(weekday == 4){
        printf("Thursday");
    }
    else if(weekday == 5){
        printf("Friday");
    }
    else if(weekday == 6){
        printf("Saturday");
    }
    else if(weekday == 0){
        printf("Sunday");
    }
    printf("\n");
}

void print(struct Date date)
{
    if(date.month == 1)
    {
        printf("%d.%d.%d TA %d January %d\n",date.year,date.month,date.day,date.day,date.year);
    }
    else if(date.month == 2){
        printf("%d.%d.%d TA %d February %d\n",date.year,date.month,date.day,date.day,date.year);
    }
    else if(date.month == 3){
        printf("%d.%d.%d TA %d March %d\n",date.year,date.month,date.day,date.day,date.year);
    }
    else if(date.month == 4){
        printf("%d.%d.%d TA %d April %d\n",date.year,date.month,date.day,date.day,date.year);
    }
    else if(date.month == 5){
        printf("%d.%d.%d TA %d May %d\n",date.year,date.month,date.day,date.day,date.year);
    }
    else if(date.month == 6){
        printf("%d.%d.%d TA %d June %d\n",date.year,date.month,date.day,date.day,date.year);
    }
    else if(date.month == 7){
        printf("%d.%d.%d TA %d July %d\n",date.year,date.month,date.day,date.day,date.year);
    }
    else if(date.month == 8){
        printf("%d.%d.%d TA %d August %d\n",date.year,date.month,date.day,date.day,date.year);
    }
    else if(date.month == 9){
        printf("%d.%d.%d TA %d September %d\n",date.year,date.month,date.day,date.day,date.year);
    }
    else if(date.month == 10){
        printf("%d.%d.%d TA %d October %d\n",date.year,date.month,date.day,date.day,date.year);
    }
    else if(date.month == 11){
        printf("%d.%d.%d TA %d November %d\n",date.year,date.month,date.day,date.day,date.year);
    }
    else if(date.month == 12){
        printf("%d.%d.%d TA %d December %d\n",date.year,date.month,date.day,date.day,date.year);
    }
    printf("\n");
}

void Comparision(struct Date date1, struct Date date2)
{
    if(date1.year>date2.year)
    {
        printf("date1>date2");
    }
    else if(date1.year<date2.year)
    {
        printf("date1<date2");
    }
    else
    {
        if(date1.month>date2.month)
        {
            printf("date1>date2");
        }
        else if(date1.month<date2.month)
        {
            printf("date1<date2");
        }
        else
        {
            if(date1.day>date2.day)
            {
                printf("date1>date2");
            }
            else if(date1.day<date2.day)
            {
                printf("date1<date2");
            }
        }
    }
    printf("\n");
}

struct Time inputTime(){
    int d,h,m,s;
    do{
    printf("days =");
    scanf("%d",&d);
    }while(d<0);
    do{
    printf("hours =");
    scanf("%d",&h);
    }while(h>23 || h<0);
    do{
    printf("minutes =");
    scanf("%d",&m);
    }while(m>59 || m<0);
    do{
    printf("seconds =");
    scanf("%d",&s);
    }while(s>59 || s<0);

    struct Time res = {d,h,m,s};
    return res;
}

void printTime(struct Time time1){
    printf("%d.%d.%d.%d\n",time1.days,time1.hours,time1.minutes,time1.seconds);
}

int daysintime(struct Time time1){
    return time1.days;
}

struct Time datetotime(struct Date date){
    int d = daysfromzero(date);
    int h = 0;
    int m = 0;
    int s = 0;

    struct Time res = {d,h,m,s};
    return res;
}

struct Time addtime(struct Time time1, struct Time time2){
    int d,h,m,s;
    d = 0;
    m = 0;
    s = 0;
    h = 0;
    s = time1.seconds + time2.seconds;
    if(s>=60)
    {
        m=1;
        s = s - 60;
    }
    m = m + time1.minutes + time2.minutes;
    if(m>=60)
    {
        h=1;
        m = m - 60;
    }
    h = h + time1.hours + time2.hours;
    if(h>=24)
    {
        d=1;
        h = h - 24;
    }
    d = d + time1.days + time2.days;
    struct Time res = {d,h,m,s};
    return res;
}

struct Time subtracttime(struct Time time1, struct Time time2){
    int d,h,m,s,difd,difh,difm,difs;
    d = time1.days;
    h = time1.hours;
    m = time1.minutes;
    s = time1.seconds;
    struct Time res;
    if(time2.days>d)
    {
        printf("time1 < time2\n");
        struct Time res = {0,0,0,0};
        return res;
    }
    else
    {
        if(time2.days == d && time2.hours>h)
        {
            printf("time1 < time2\n");
            struct Time res = {0,0,0,0};
            return res;
        }
        else
        {
            if(time2.hours == h && time2.days == d && time2.minutes>m)
            {
                printf("time1 < time2\n");
                struct Time res = {0,0,0,0};
                return res;
            }
            else
            {
                if(time2.hours == h && time2.days == d && time2.minutes == m && time2.seconds>s)
                {
                    printf("time1 < time2\n");
                    struct Time res = {0,0,0,0};
                    return res;
                }
                else
                {
                    difd = d - time2.days;
                    difh = h - time2.hours;
                    if(difh < 0)
                    {
                        difh+=24;
                        difd--;
                    }
                    difm = m - time2.minutes;
                    if(difm < 0)
                    {
                        if(difh==0)
                        {
                            difd--;
                            difh+=24;
                        }
                        difm+=60;
                        difh--;
                    }
                    difs = s - time2.seconds;
                    if(difs < 0)
                    {
                        if(difm==0)
                        {
                            difh--;
                            difm+=60;
                        }
                        difs+=60;
                        difm--;
                    }
                    struct Time res = {difd,difh,difm,difs};
                    return res;
                }
            }
        }
    }

}

struct Date addtimetodate(struct Date date, struct Time time1){
    int d,m,y;
    struct Date res = AddDays(date,time1.days);
    return res;
}

struct Date Subtracttimefromdate(struct Date date, struct Time time1){
    int d,m,y;
    struct Date res = SubtractDays(date,time1.days);
    return res;
}

void ComparisionTime(struct Time time1, struct Time time2){
    if(time1.days > time2.days)
    {
        printf("time1>time2");
    }
    else if(time1.days < time2.days)
    {
        printf("time1<time2");
    }
    else
    {
        if(time1.hours>time2.hours)
        {
            printf("time1>time2");
        }
        else if(time1.hours<time2.hours)
        {
            printf("time1<time2");
        }
        else
        {
            if(time1.minutes>time2.minutes)
            {
                printf("time1>time2");
            }
            else if(time1.minutes<time2.minutes)
            {
                printf("time1<time2");
            }
            else
            {
                if(time1.seconds>time2.seconds)
                {
                    printf("time1>time2");
                }
                else if(time1.seconds<time2.seconds)
                {
                    printf("time1<time2");
                }
                else
                {
                    printf("time1=time2");
                }
            }
        }
    }
    printf("\n");
}

