struct Date
{
    int day;
    int month;
    int year;
};

struct Date input();

struct Date Next(struct Date date);

struct Date Previous(struct Date date);

int daysfromzero(struct Date date1);

struct Date AddDays(struct Date date,int days);

struct Date SubtractDays(struct Date date1,int days);


struct Date AddDate(struct Date date1,struct Date date2);

struct Date SubtractDate(struct Date date1,struct Date date2);



int daysbetween(struct Date date1, struct Date date2);

void WhichDay(struct Date date);

void print(struct Date date);
void Comparision(struct Date date1, struct Date date2);


struct Time{
    int days,hours,minutes,seconds;
};

struct Time inputTime();
void printTime(struct Time time1);

int daysintime(struct Time time1);

struct Time datetotime(struct Date date);

struct Time addtime(struct Time time1, struct Time time2);
struct Time subtracttime(struct Time time1, struct Time time2);

struct Date addtimetodate(struct Date date, struct Time time1);

struct Date Subtracttimefromdate(struct Date date, struct Time time1);
void ComparisionTime(struct Time time1, struct Time time2);
