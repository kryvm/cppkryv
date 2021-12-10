/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <sstream>

using namespace std;

class Number
{
    public:
    int n1; //0
    double n2; //1 
    unsigned n3; //2 
    bool inf; //3
    bool undef; //4
    double cont[5] = {0,0,0,0,0};
    int input();
    int printnum();
    Number add(const Number& x); //x.add(y);
	Number mult(const Number& x);
	Number division(const Number& x);
	Number subtract(const Number& x);
};

int Number::input(){
   
    cout<<"Input number:";
    string num;
    cin>>num;
    if(num == "inf")
    {
        cont[3] = 1;
        return 0;
    }
    stringstream s(num);
    double num1 = 0;
    s >> num1;
    if(num1 != (int)num1)
    {
        cont[1] = num1;
    }
    else if(num1>0 && num1==(int)num1)
    {
        cont[2] = num1;
    }
    else if(num1<=0 && num1==(int)num1)
    {
        cont[0] = num1;
    }
    else
    {
        cont[3] = 1;
    }
    return 0;	
}

int Number::printnum(){
    for (int i = 0; i < 5; i++) {
        if(cont[i]!=0)
        {
            if(i == 3)
            {
                if(cont[i]==1)
                {
                    printf("Infinity\n");
                    return 0;
                }
                else
                {
                    printf("-Infinity\n");
                    return 0;
                }
            }
            else if(i==4)
            {
                printf("NaN\n");
                return 0;
            }
            else
            {
                printf("%lf\n",cont[i]);
                return 0;
            }
        }
    }
    printf("0\n");
    return 0;
}
Number Number::add(const Number& x)
{
    Number sum;
    if(x.cont[4] == 1 || this->cont[4] == 1)// NaN in num1 or num2
    {
        sum.cont[4] = 1;
    }
    else
    {
        if(x.cont[3] == 1 || this->cont[3] == 1)// inf in num1 or num2
        {
            sum.cont[3] = 1;
        }
        else
        {
            if(x.cont[1] != 0 || this->cont[1] != 0)
            {
                double s = 0;
                for (int i = 0; i < 3; i++) {
                    if(this->cont[i] != 0)
                    {
                        s+=this->cont[i];
                    }
                    if(x.cont[i] != 0)
                    {
                        s+=x.cont[i];
                    }
                }
                sum.cont[1] = s;
            }
            else if(x.cont[0] != 0 || this->cont[0] != 0)
            {
                double s1 = 0;
                for (int i = 0; i < 3; i++) {
                    if(this->cont[i] != 0)
                    {
                        s1+=this->cont[i];
                    }
                    if(x.cont[i] != 0)
                    {
                        s1+=x.cont[i];
                    }
                }
                sum.cont[0] = s1;
            }
            else
            {
                sum.cont[2] = this->cont[2]+x.cont[2];
            }
        }
    }
    return sum;
}

Number Number::mult(const Number& x)
{
    Number sum;
    double sum1 = 0;
    double sum2 = 0;
    for (int i = 0; i < 5; i++) {
        sum1+=this->cont[i];
        sum2+=x.cont[i];
    }
    if(x.cont[4] == 1 || this->cont[4] == 1)// NaN in num1 or num2
    {
        sum.cont[4] = 1;
    }
    else
    {
        if(x.cont[3] == 1 || this->cont[3] == 1)// inf in num1 or num2
        {
            if(sum1 == 0 || sum2  == 0) // inf*0==NaN
            {
                sum.cont[4] = 1;
            }
            else
            {
                sum.cont[3] = 1;
            }
        }
        else
        {
            if(x.cont[1] != 0 || this->cont[1] != 0)
            {
                if(sum1 != 0 && sum2  != 0)
                {
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            if(this->cont[j]!=0 && x.cont[i]!=0)
                            {
                                double s = x.cont[i]*this->cont[j];
                                sum.cont[1] = s;
                            }
                        }
                        
                    }
                }
                
            }
            else if(x.cont[0] != 0 || this->cont[0] != 0)
            {
                if(sum1 != 0 && sum2  != 0)
                {
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            if(this->cont[j]!=0 && x.cont[i]!=0)
                            {
                                int s = x.cont[i]*this->cont[j];
                                if(s>0)
                                {
                                    sum.cont[2] = s;
                                }
                                else
                                {
                                    sum.cont[0] = s; 
                                }
                            }
                        }
                        
                    }
                }
                
                
            }
            else
            {
                if(sum1 != 0 && sum2  != 0)
                {
                    sum.cont[2] = this->cont[2]*x.cont[2];
                }
            }
        }
    }
    return sum;
}

Number Number::division(const Number& x)
{
    Number sum;
    double sum1 = 0;
    double sum2 = 0;
    for (int i = 0; i < 5; i++) {
        sum1+=this->cont[i];
        sum2+=x.cont[i];
    }
    
    if(sum2 == 0) //znamennyk = 0 => NaN
    {
        sum.cont[4] = 1;
        return sum;
    }
    
    if(sum1 == 0)  // chyslivnik = 0 => 0
    {
        return sum;   
    }
    
    if(this->cont[3] == 1)
    {
        if(x.cont[3] == 1) // inf/inf = NaN
        {
            sum.cont[4] = 1;
            return sum;
        }
        else //inf/n = inf
        {
            sum.cont[3] =1;
            return sum;
        }
    }
    if(x.cont[3] == 1 && this->cont[3] != 1) // n/inf = NaN
    {
        sum.cont[4] = 1;
        return sum;
    }
    double d = this->cont[1]/x.cont[1];
    if(d == (int) d)
    {
        if(d>0)
        {
            sum.cont[2] = d;
            return sum;
        }
        else
        {
            sum.cont[0] = d;
            return sum;
        }
    }
    else
    {
        sum.cont[1] = d;
        return sum;
    }
}

Number Number::subtract(const Number& x)
{
    Number sum;
    if(this->cont[4] == 1 || x.cont[4] == 1)
    {
        sum.cont[4] = 1;
        return sum;
    }
    else
    {
        if(this->cont[3] == 1 && x.cont[3] == 1)
        {
            sum.cont[4] = 1;
            return sum;
        }
        else if(this->cont[3] == 1 && x.cont[3] != 1)
        {
            sum.cont[3] = 1;
            return sum;
        }
        else if(this->cont[3] != 1 && x.cont[3] == 1)
        {
            sum.cont[3] = -1;
            return sum;
        }
        else
        {
            double d = 0;
            for (int i = 0; i < 3; i++)
            {
                if(this->cont[i]!=0)
                {
                    d+=this->cont[i];
                }
                if(x.cont[i]!=0)
                {
                    d-=this->cont[i];
                }
            }
            if(d == (int) d)
            {
                if(d>0)
                {
                    sum.cont[2] = d;
                    return sum;
                }
                else
                {
                    sum.cont[0] = d;
                    return sum;
                }
            }
            else
            {
                sum.cont[1] = d;
                return sum;
            }
        }
    }
}

int main()
{
    Number num1,num2,sum,mult1,div1,subtr1;
    num1.input();
    num1.printnum();
    num2.input();
    num2.printnum();
    printf("sum =\n");
    sum = num1.add(num2);
    sum.printnum();
    printf("mult =\n");
    mult1 = num1.mult(num2);
    mult1.printnum();
    printf("div =\n");
    div1 = num1.division(num2);
    div1.printnum();
    printf("subtr =\n");
    subtr1 = num1.subtract(num2);
    subtr1.printnum();
}
