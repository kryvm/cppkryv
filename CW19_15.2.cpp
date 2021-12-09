/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Point
{
private:
    double x;
    double y;
public:
    Point()
    {
        this->x = 0;
        this->y = 0;
    }
    Point(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
    void show()
    {
        cout << "(" << this->x << "," << this->y << ")"<< endl;
    }

    int input()
    {
        cout << "x, y = ";
        cin >> this->x >> this->y;
    }

    double length(Point other)
    {
        return sqrt(pow(this->x - other.x, 2) + pow(this->y - other.y, 2));
    }
};


int main()
{
    Point current;
    Point before;
    Point starter;
    int counter=0;
    double perimeter;
    char input;
    do
    {
        counter += 1;
        current.input();
        current.show();
        if(counter == 1)
        {
            starter = current;
        }
        else
        {
            double dist = before.length(current);
            perimeter += dist;
        }
        before = current;
        cout << "Continue (y-yes, n-no): ";
        cin >> input;
    }
    while(input != 'n');
    perimeter += starter.length(current);

    cout << endl << "points - " << counter << endl;
    cout << "perimeter " << perimeter;
    return 0;
}