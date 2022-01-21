#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble.h"
#include "selection.h"
#include "insertion.h"

int main(int argc, char **argv){

int i,N,*a;
 N=argc-1  ;
 a=(int*) malloc(sizeof(int)*N);

 printf("argument= %d\n",argc-2);
 for(i=1;i<argc;i++){
    a[i-1]= atoi(argv[i]);
 }
 if(strcmp(argv[1],"bubble")==0)
  {
    BubbleSort(a,N);
    printf("\nFinish bubble sort\n");
  }
 else if(strcmp(argv[1],"selection")==0)
  {
    selection(a,N);
    printf("\nFinish selection sort\n");
  }
 else if(strcmp(argv[1],"insertion")==0)
  {
    InsertionSort(a,N);
    printf("\nFinish insertion sort\n");
  }
 else
 {
   printf("There is no this term!\n\n");
   return 0;
 }
 for(i=1;i<N;i++)
 {
    printf("%4d",a[i]);
 }
 printf("\n\n");
 free(a);
}
