#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  return n;
}
void init_array(int n,int a[n])
{
  int i;
  for(i=0;i<n;i++)
    {
      a[i]=i+1;
    }
}
void erotosthenes_sieve(int n,int a[n])
{
  int i,j;
  for(i=1;i<n;i++)
    {
      if(a[i]==0)
        continue;
      for(j=a[i]+1;j<=n;j++)
        {
          if(j%a[i]==0)
            a[j-1]=0;
        }
    } 

  }
void output(int n,int a[n]) 
{
  
}

