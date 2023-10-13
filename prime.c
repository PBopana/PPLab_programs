#include<stdio.h>
#include<stdlib.>
#include<omp.h>

int isPrime(int n)
{
  if(n==0||n==1)
  {
      return 0;
  }

  for(int i=0;i<=n/2;i++)
  {
    if(n%i==0)
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  int x,n=50;
int primes[100];

double_start=omp_get_wtime();
#pragma omp parallel for
for(int i=0;i<=n;i++)
{
  if(isPrime(i))
  {
    int t= omp_get_thread_num();
    printf(" Process:%d, %d\n",t,i);
  }
}

double end=omp_get_wtime();
printf("Time taken is %lf", end-start);
}
