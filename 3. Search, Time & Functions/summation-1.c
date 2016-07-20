/*****************************
 * a fast implementation of sum up to N.
 * function #1
 ****************************/

#include <stdio.h>

int sumUpToN(int);
int main(void)
{
 int x = 5;
 int sigmaX = sumUpToN(x);
 printf("%i",sigmaX);
}


/**
 * @param:  a positive integer n.
 * @return: integer that is the sum of all ints up to n.
 */
int sumUpToN(int n){
  return (n*(n+1))/2;
}
