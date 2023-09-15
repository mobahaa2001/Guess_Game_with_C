#include <stdio.h>
#include <stdlib.h>

int main()
{
   int secret_num;
   int guess_num;

   secret_num = 5;
   int i;
   int guess_limit;
   guess_limit = 3;

   for(i=1; i <= guess_limit; i++)
   {
       printf("Guess Number %d :", i);
       scanf("%d", &guess_num);

       if(guess_num == secret_num)
       {
           printf("Congratulation, You Win");
           break;
       }
   }
   if(guess_num != secret_num)
   {
       printf("Sorry, You Lost");

   }
   return 0;
}
