void selection(int x[],int n)
{
  int min,i,imin,j;

 for(j=0; j<n-1; j++)
 {
  imin=j;
  for(i=j+1; i<n; i++)
  {
    if(x[i]<x[imin])
    {
      imin=i;
    }
  }
  swap(&x[j],&x[imin]);
  display(x,n);
 }
 printf("========================\n");
}