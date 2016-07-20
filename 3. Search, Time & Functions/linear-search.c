/*****************************
 * Linear Search. looks for number in a sorted list and finds its place (a.k.a. index)
 * function #2
 *****************************/

#include <stdio.h>

int find(int, int[],int );

int main(void)
{
  int numbers[] = {2, 4, 15, 26, 340, 502, 2000, 5023};
  int n = 23;

  int index = find(n, numbers, 4);
  if(index >= 0){
    printf("found %i at index %i",needle,index);
   }
   else printf("no lucks");
}

/**
 * finds int "needle" in  int array "haystack" of size "size"
 * @param: takes in the number to find, the array to find it in and the size of that array.
 * @return: the index of the number if found or -1 if it is not found.
 */

int find(int needle, int haystack[], int size)
{
  for(int i = 0; i < size; i++){
    if(haystack[i] == needle){
      return i;
    }
  }
  return -1;
}
