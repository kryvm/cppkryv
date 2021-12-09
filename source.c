#include <time.h>

struct tm input()
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

    struct tm res;
    res.tm_mday = d;
    res.tm_mon = m;
    res.tm_year = y;
    return res;
}

struct tm Next(struct tm date)
{
    int d = date.tm_mday;
    int m = date.tm_mon;
    int y = date.tm_year;
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
    struct tm res;
    res.tm_mday = d;
    res.tm_mon = m;
    res.tm_year = y;
    return res;
}

struct tm Previous(struct tm date)
{
    int d = date.tm_mday;
    int m = date.tm_mon;
    int y = date.tm_year;
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
    struct tm res;
    res.tm_mday = d;
    res.tm_mon = m;
    res.tm_year = y;
    return res;
}

int daysfromzero(struct tm date1)
{
    int count = 0;
    struct tm date;
    date.tm_year = 0;
    date.tm_mon = 0;
    date.tm_mday = 1;
    while(date.tm_year != date1.tm_year)
    {
        date = Next(date);
        count++;
    }
    while(date1.tm_mon != date.tm_mon)
    {
        date = Next(date);
        count++;
    }
    while(date1.tm_mday != date.tm_mday)
    {
        date = Next(date);
        count++;
    }
    return count;
}

struct tm AddDays(struct tm date,int days)
{
    struct tm res;
    res = Next(date);
    for (int i = 0; i < days - 1; i++) {
        res = Next(res);
    }
    return res;
}

struct tm SubtractDays(struct tm date1,int days)
{
    struct tm res;
    res = Previous(date1);
    for (int i = 0; i < days - 1; i++) {
        res = Previous(res);
    }
    return res;
}


struct tm AddDate(struct tm date1,struct tm date2)
{
    int count = daysfromzero(date2);
    struct tm res = AddDays(date1,count);
    return res;
}

struct tm SubtractDate(struct tm date1,struct tm date2)
{
    int count = daysfromzero(date2);
    struct tm res = SubtractDays(date1,count);
    return res;
}

int daysbetween(struct tm date1, struct tm date2)
{
    int res = daysfromzero(date1) - daysfromzero(date2);
    res = abs(res);
    return res;
}

void WhichDay(struct tm date)
{
    int d = date.tm_mday;
    int m = date.tm_mon;
    int y = date.tm_year;
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

void print(struct tm date)
{
    if(date.tm_mon == 1)
    {
        printf("%d.%d.%d TA %d January %d\n",date.tm_year,date.tm_mon,date.tm_mday,date.tm_mday,date.tm_year);
    }
    else if(date.tm_mon == 2){
        printf("%d.%d.%d TA %d February %d\n",date.tm_year,date.tm_mon,date.tm_mday,date.tm_mday,date.tm_year);
    }
    else if(date.tm_mon == 3){
        printf("%d.%d.%d TA %d March %d\n",date.tm_year,date.tm_mon,date.tm_mday,date.tm_mday,date.tm_year);
    }
    else if(date.tm_mon == 4){
        printf("%d.%d.%d TA %d April %d\n",date.tm_year,date.tm_mon,date.tm_mday,date.tm_mday,date.tm_year);
    }
    else if(date.tm_mon == 5){
        printf("%d.%d.%d TA %d May %d\n",date.tm_year,date.tm_mon,date.tm_mday,date.tm_mday,date.tm_year);
    }
    else if(date.tm_mon == 6){
        printf("%d.%d.%d TA %d June %d\n",date.tm_year,date.tm_mon,date.tm_mday,date.tm_mday,date.tm_year);
    }
    else if(date.tm_mon == 7){
        printf("%d.%d.%d TA %d July %d\n",date.tm_year,date.tm_mon,date.tm_mday,date.tm_mday,date.tm_year);
    }
    else if(date.tm_mon == 8){
        printf("%d.%d.%d TA %d August %d\n",date.tm_year,date.tm_mon,date.tm_mday,date.tm_mday,date.tm_year);
    }
    else if(date.tm_mon == 9){
        printf("%d.%d.%d TA %d September %d\n",date.tm_year,date.tm_mon,date.tm_mday,date.tm_mday,date.tm_year);
    }
    else if(date.tm_mon == 10){
        printf("%d.%d.%d TA %d October %d\n",date.tm_year,date.tm_mon,date.tm_mday,date.tm_mday,date.tm_year);
    }
    else if(date.tm_mon == 11){
        printf("%d.%d.%d TA %d November %d\n",date.tm_year,date.tm_mon,date.tm_mday,date.tm_mday,date.tm_year);
    }
    else if(date.tm_mon == 12){
        printf("%d.%d.%d TA %d December %d\n",date.tm_year,date.tm_mon,date.tm_mday,date.tm_mday,date.tm_year);
    }
    printf("\n");
}

void Comparision(struct tm date1, struct tm date2)
{
    if(date1.tm_year>date2.tm_year)
    {
        printf("date1>date2");
    }
    else if(date1.tm_year<date2.tm_year)
    {
        printf("date1<date2");
    }
    else
    {
        if(date1.tm_mon>date2.tm_mon)
        {
            printf("date1>date2");
        }
        else if(date1.tm_mon<date2.tm_mon)
        {
            printf("date1<date2");
        }
        else
        {
            if(date1.tm_mday>date2.tm_mday)
            {
                printf("date1>date2");
            }
            else if(date1.tm_mday<date2.tm_mday)
            {
                printf("date1<date2");
            }
        }
    }
    printf("\n");
}

struct tm inputTime(){
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

    struct tm res;
    res.tm_yday = d;
    res.tm_hour = h;
    res.tm_min = m;
    res.tm_sec = s;
    return res;
}

void printTime(struct tm time1){
    printf("%d.%d.%d.%d\n",time1.tm_yday,time1.tm_hour,time1.tm_min,time1.tm_sec);
}

int daysintime(struct tm time1){
    return time1.tm_yday;
}

struct tm datetotime(struct tm date){
    int d = daysfromzero(date);
    int h = 0;
    int m = 0;
    int s = 0;

    struct tm res;
    res.tm_yday = d;
    res.tm_hour = h;
    res.tm_min = m;
    res.tm_sec = s;
    return res;
}

struct tm addtime(struct tm time1, struct tm time2){
    int d,h,m,s;
    d = 0;
    m = 0;
    s = 0;
    h = 0;
    s = time1.tm_sec + time2.tm_sec;
    if(s>=60)
    {
        m=1;
        s = s - 60;
    }
    m = m + time1.tm_min + time2.tm_min;
    if(m>=60)
    {
        h=1;
        m = m - 60;
    }
    h = h + time1.tm_hour + time2.tm_hour;
    if(h>=24)
    {
        d=1;
        h = h - 24;
    }
    d = d + time1.tm_yday + time2.tm_yday;
    struct tm res;
    res.tm_yday = d;
    res.tm_hour = h;
    res.tm_min = m;
    res.tm_sec = s;
    return res;
}


struct tm subtracttime(struct tm time1, struct tm time2){
    int d,h,m,s,difd,difh,difm,difs;
    d = time1.tm_yday;
    h = time1.tm_hour;
    m = time1.tm_min;
    s = time1.tm_sec;
    struct tm res;
    if(time2.tm_yday>d)
    {
        printf("time1 < time2");
        res.tm_yday = 0;
        res.tm_hour = 0;
        res.tm_min = 0;
        res.tm_sec = 0;
        return res;
    }
    else
    {
        if(time2.tm_yday == d && time2.tm_hour>h)
        {
            printf("time1 < time2");
            res.tm_yday = 0;
            res.tm_hour = 0;
            res.tm_min = 0;
            res.tm_sec = 0;
            return res;
        }
        else
        {
            if(time2.tm_hour == h && time2.tm_yday == d && time2.tm_min>m)
            {
                printf("time1 < time2");
                res.tm_yday = 0;
                res.tm_hour = 0;
                res.tm_min = 0;
                res.tm_sec = 0;
                return res;
            }
            else
            {
                if(time2.tm_hour == h && time2.tm_yday == d && time2.tm_min == m && time2.tm_sec>s)
                {
                    printf("time1 < time2");
                    res.tm_yday = 0;
                    res.tm_hour = 0;
                    res.tm_min = 0;
                    res.tm_sec = 0;
                    return res;
                }
                else
                {
                    difd = d - time2.tm_yday;
                    difh = h - time2.tm_hour;
                    if(difh < 0)
                    {
                        difh+=24;
                        difd--;
                    }
                    difm = m - time2.tm_min;
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
                    difs = s - time2.tm_sec;
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
                    res.tm_yday = difd;
                    res.tm_hour = difh;
                    res.tm_min = difm;
                    res.tm_sec = difs;
                    return res;
                }
            }
        }
    }

}

struct tm addtimetodate(struct tm date, struct tm time1){
    int d,m,y;
    struct tm res = AddDays(date,time1.tm_yday);
    return res;
}

struct tm Subtracttimefromdate(struct tm date, struct tm time1){
    int d,m,y;
    struct tm res = SubtractDays(date,time1.tm_yday);
    return res;
}

void ComparisionTime(struct tm time1, struct tm time2){
    if(time1.tm_yday > time2.tm_yday)
    {
        printf("time1>time2");
    }
    else if(time1.tm_yday < time2.tm_yday)
    {
        printf("time1<time2");
    }
    else
    {
        if(time1.tm_hour>time2.tm_hour)
        {
            printf("time1>time2");
        }
        else if(time1.tm_hour<time2.tm_hour)
        {
            printf("time1<time2");
        }
        else
        {
            if(time1.tm_min>time2.tm_min)
            {
                printf("time1>time2");
            }
            else if(time1.tm_min<time2.tm_min)
            {
                printf("time1<time2");
            }
            else
            {
                if(time1.tm_sec>time2.tm_sec)
                {
                    printf("time1>time2");
                }
                else if(time1.tm_sec<time2.tm_sec)
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


