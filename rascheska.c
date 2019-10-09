#include <stdio.h>

int main ()
{
  printf ("Vvedite kolvo elem massiv\n");
  int n;
  int c;
  int input;
  scanf ("%d", &n);
  int* arr = malloc(sizeof(int) * n);
  printf("Vvedite massiv\n");
  for (int i=0; i<n; i++)
  {
      scanf("%d", &input);
      arr[i] = input;
  }
  float fakt = 1.2473309;
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
      printf("%d ", arr[i]);
  }
}
