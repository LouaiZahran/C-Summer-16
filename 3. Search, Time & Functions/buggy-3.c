/******************************
 * incorrectly divides two numbers.
 *******************************/


#include <stdio.h>

int main(void)
{
  int x;
  printf("give me an int:");
  scanf("%i",&x);

  int y;
  printf("give me an int:");
  scanf("%i",&y);

  double xOverY = x/y;
  printf("%i/%i = %.2f",x,y,xOverY);

}
