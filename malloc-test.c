#include<stdio.h>

int main()
{
  int i = 500;
  char *c;
  
  for(i = 0; i <= 50000; i++)
    c = (char *)malloc(5000 * sizeof(char));
  int t = 6;
  int y = 0;
  int z = t/y;
}