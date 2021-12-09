#include <stdio.h>
#include <time.h>

struct tm input();
struct tm Next(struct tm date);
struct tm Previous(struct tm date);
int daysfromzero(struct tm date1);
struct tm AddDays(struct tm date,int days);
struct tm SubtractDays(struct tm date1,int days);
struct tm AddDate(struct tm date1,struct tm date2);
struct tm SubtractDate(struct tm date1,struct tm date2);
int daysbetween(struct tm date1, struct tm date2);
void WhichDay(struct tm date);
void print(struct tm date);
void Comparision(struct tm date1, struct tm date2);
struct tm inputTime();
void printTime(struct tm time1);
int daysintime(struct tm time1);
struct tm datetotime(struct tm date);
struct tm addtime(struct tm time1, struct tm time2);
struct tm subtracttime(struct tm time1, struct tm time2);
struct tm addtimetodate(struct tm date, struct tm time1);
struct tm Subtracttimefromdate(struct tm date, struct tm time1);
void ComparisionTime(struct tm time1, struct tm time2);

