 /*****************************
  * a slow implementation of sum up to N.
  * function #1
  ****************************/

#include <stdio.h>
int sumUpToN(int);
int factorial(int);

int main(void)
{
  int n = 5;
  int sigmaX = sumUpToN(n);
  printf("%i",sigmaX);
}


/**
 * @param:  a positive integer n.
 * @return: integer that is the sum of all ints up to n.
 */

int sumUpToN(int n){
  int sum = 0;
  for(int i = 1; i <= n; i++){
    sum += i;  //sum = sum + i;
  }
  return sum;
}


int factorial(int n){
   int product = n;
   for(int i= 1;i < n;i++){
    product *= i;    //product = product*i;
   }
   return product;
}
