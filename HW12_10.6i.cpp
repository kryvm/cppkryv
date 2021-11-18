/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct vector{
    int size;
    int* arr;
};

void input(vector &v) {
    int size;
    int val;
    scanf("%d", &size);
    int *vals = new int[size];;
    for (int i=0; i < size; i++){
        std::cin >> val;
        vals[i] = val;
    }

    v.size = size;
    v.arr = vals;
}

void print(vector v){
    std::cout << v.size << std::endl;
    for (int i = 0; i < v.size; i++) {
        std::cout << v.arr[i] << std::endl;
    }
}

int main()
{
    vector v;
    
    input(v);
    print(v);

    return 0;
}