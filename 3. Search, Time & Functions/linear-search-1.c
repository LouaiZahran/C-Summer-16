#include <stdio.h>
#include <stdbool.h>

bool found(int,int[],int);

int main(void)
{
   int haystack[] = {2,4,6,7,20,2567,3000};
   int size = 7;
   int needle = 2567;

   if(found(needle,haystack,size)){
    printf("found");
   }
   else printf("no luck");
}

/**
 * @param:  "needle" to look for in "haystack[]" of size "size"
 * @return:  true if needle is found & false if not.
 */
bool found(int needle, int haystack[], int size)
{
    for(int i = 0; i < size; i++){
        if(haystack[i] == needle){
            return true;
        }
    }
    return false;
}
