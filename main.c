#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n = 92;
   _Bool boolValue = 1;

   while(boolValue) {

       printf("Please Enter a Number between 1-100: ");
       scanf("%i",&n);

       if((n > 0) && (n < 92)) {
        printf("Your answer is too Low\n");
       }else if((n <= 100) && (n > 92)) {
        printf("Your answer is too High\n");
       }else if( n == 92) {
        printf("You guessed the number\n");
       }else if((n <= 0) || (n > 100)) {
        printf("You an entered a incorrect value\n");
       }

    }
}
