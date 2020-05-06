#include <stdio.h>
#include <stdlib.h>
#include <time.h> //to generate random number seed

int main()
{

   int askUser;
   _Bool boolValue = 1;

   //random  number generator
   srand((unsigned) time(0));
   int n;
   n = rand()%101;
   printf("%i\n",n);// The number you are trying to guess printed out.

    // a while loop to continue to ask the user until he guesses correctly
   while(boolValue) {

       printf("Please Enter a Number between 1-100: ");
       scanf("%i",&askUser);

       if((askUser > 0) && (askUser < n)) {
        printf("Your answer is too Low\n");
       }else if((askUser <= 100) && (askUser > n)) {
        printf("Your answer is too High\n");
       }else if(askUser == n) {
        printf("You guessed the number\n");
        break; // breaks out of the loop once the answer is correct. 
       }else if((askUser <= 0) || (askUser > 100)) {
        printf("You an entered a incorrect value\n");
       }

    }
}
