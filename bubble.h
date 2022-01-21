void swap(int * x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
void display(int x[],int n){
  int i;

  for(i=1; i<n; i++)
  printf("%3d",x[i]);
  printf("\n");
}
void BubbleSort(int x[],int n)
{
   int i,j,sorted;
   for(j=n-1; j>0; j--){
     sorted=0;
   for(i=0;i<j;i++)
   {
     if(x[i]>x[i+1]){
      swap(&x[i], &x[i+1]);
      sorted=1;}
      display(x,n);
   }
   printf("========================\n");
    if(sorted==0) break;
    
   }
}