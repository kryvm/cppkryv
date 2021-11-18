/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>

using namespace std;

typedef struct Point{
    double x,y;
} Point;

typedef struct Rectangle{
    Point A;
    Point B;
} Rectangle;

int inputRect(Rectangle * r){
    printf("A(x,y)");
    int d = scanf("%lf %lf",&r->A.x, &r->A.y);
    if(d<2) return 4 -d;
    printf("B(x,y)");
    d += scanf("%lf %lf",&r->B.x, &r->B.y);
    return 4 -d;
}

void printRect(const Rectangle * r)
{
    if(r->A.x > r->B.x && r->A.y > r->B.y)
    {
        printf("(%lf %lf)",r->B.x, r->A.y);
        printf("(%lf %lf)\n",r->A.x, r->A.y);
        printf("(%lf %lf)",r->B.x, r->B.y);
        printf("(%lf %lf)",r->A.x, r->B.y);
    }
    else if(r->A.x > r->B.x && r->A.y < r->B.y)
    {
        printf("(%lf %lf)",r->B.x, r->B.y);
        printf("(%lf %lf)\n",r->A.x, r->B.y);
        printf("(%lf %lf)",r->B.x, r->A.y);
        printf("(%lf %lf)",r->A.x, r->A.y);
    }
    else if(r->A.x < r->B.x && r->A.y > r->B.y)
    {
        printf("(%lf %lf)",r->A.x, r->A.y);
        printf("(%lf %lf)\n",r->B.x, r->A.y);
        printf("(%lf %lf)",r->A.x, r->B.y);
        printf("(%lf %lf)",r->B.x, r->B.y);
    }
    else if(r->A.x < r->B.x && r->A.y < r->B.y)
    {
        printf("(%lf %lf)",r->A.x, r->B.y);
        printf("(%lf %lf)\n",r->B.x, r->B.y);
        printf("(%lf %lf)",r->A.x, r->A.y);
        printf("(%lf %lf)",r->B.x, r->A.y);
    }
}

int main(){
    Rectangle x;
    inputRect(&x);
    printRect(&x);
}


