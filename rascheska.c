#include <stdio.h>
int main ()
{
  printf ("Vvedite kolvo elem massiva");
  int n;
  int c;
  scanf ("%n", n);
  int arr[n];
  for (int i=0; i<n; i++)
  {
      scanf("%n", arr[i]);
  }
  int fakt = 1.2473309;
  int step = n - 1;
  while (step>=1)
  {
      for (int i=0; i+step<n; i++)
      {
          if (arr[i]>arr[i+step])
          {
              c=arr[i];
              arr[i]=arr[i+step];
              arr[i+step]=c;
          }
          step/=fakt;
      }
  }
  for (int i=0; i<n; i++)
  {
      printf("%n", arr[i]);
  }
}
