#include "main.h"
#include <stdio.h>

/**
*main - Fizz for multiples of 3 and Buzz for multiples of 5 FizzBuzz for both

*
*
*
* Return: Always 0

*/


int main(void) {

    int x = 1;

    for (x = 1; x < 101; x++){
        if (x % 3 == 0)
        {
            printf("%s", "Fizz");
        }else if (x % 5 == 0)    
        {
            printf("%s", "Buzz");
        }else if (x % 5 == 0 || x % 3 == 0)    
        {
            printf("%s", "Buzz");
        }else{
            printf(%d, x);
        }
        
    }
   prinf("\n")
    return(0);
}
