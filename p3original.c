#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter a number :\n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  for (int i = 2; i <= n/2; i++)
  {
    if (n%i != 0)
      return 1;
  }
  return 0;
}

void output(int n, int isPrime)
{
  if (isPrime)
    printf("%d is a  number\n", n);
  else 
    printf("%d is not a prime number\n", n);
}
int main()
{
  int num = input_number();
  int res = is_prime(num);
  output(num, res);
  return 0;
}