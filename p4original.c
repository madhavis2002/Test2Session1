#include<stdio.h>
#include<math.h>
int input()
{
  int n;
  printf("Enter the nth number of fibbonacci sequence\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int i,j,k,a;
  for (i=0,j=1,k=0;k<n-2;k++)
      {
        if (n==1)
        {
          a=0;
        }
        else if(n==2)
        {
          a=1;
        }
        else
        {
          a=(i+j);
          i=j;
          j=a;
        }
      }
  return a;
}
void output(int n, int fibo)
{
  printf("The nth number of Fibonacci sequence is %d",fibo);
}
int main()
{
  int n;
  n=input();
  int f=find_fibo(n);
  output(n,f);
  return 0;
  
}
