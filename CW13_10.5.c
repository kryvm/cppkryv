/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int high;
  char name[20];
} Mountain;

#define N 10

int input(Mountain* mt){
  printf("Mountain(name, high):"); 
  scanf("%s",mt->name);
  scanf("%d",&(mt->high));
}

int print(Mountain mnt){
  printf("Mnt(%s, %d):",mnt.name,mnt.high); 
}

void highest(const Mountain* mnts, int n){
  int max = mnts[0].high;
  int k = 0;
  for(int i=1;i<n;++i){
       if(max < mnts[i].high)
       {
           max = mnts[i].high;
           k = i;
       }
  }
  printf("\nName of the highest mountain is %s\n", mnts[k].name);
}

void HeightByName(const Mountain* mnts, int n, const char * mname){
  
  for(int i=0;i<n;++i){
       if(strcmp(mname, mnts[i].name)==0)
       {
           printf("\nHeight of %s is %d\n",mname, mnts[i].high);
           return;
       }
  }
  printf("There is no mountain with name %s\n", mname);
}

int main(){

  int n;
  printf("N=");
  scanf("%d",&n);

  Mountain arr[N];
  for(int i=0;i<n;++i){
    input(&arr[i]);
  }

  highest(arr,n);
  printf("Name of the mountain:"); 
  char name[20]; 
  scanf("%s", name); 
  HeightByName(arr, n, name);
}
