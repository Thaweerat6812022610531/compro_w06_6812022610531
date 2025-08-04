#include <stdio.h>  //to import library

int main() {    // Main function

    int a = 5, b = 2;                       // Declare integer variables a and b
    float x = 3.0, y = 4.5;                 // Declare float variables x and y
    float r1, r2, r3, r4;                   // Declare float variables r1, r2, r3, r4
    printf("+-----------------------------------------------+--------------------------------+\n");
    printf("|                Expression                     |              Result            |\n");
    printf("+-----------------------------------------------+--------------------------------+\n"); 
    printf("|int r1 = a++ * b + (int)y %% 3;                 |%32.2f|\n", r1 = a++ * b + (int)y % 3);                 // Calculate r1 as a incremented by 1 multiply b plus the integer part of y modulo 3
    printf("|-----------------------------------------------|--------------------------------|\n");
    printf("|int r2 = (a > b) && ((int)x / b < 2);          |%32.2f|\n", r2 = (a > b) && ((int)x / b < 2));        // Calculate r2 as true if a is greater than b and the integer part of x divided by b is less than 2
    printf("|-----------------------------------------------|--------------------------------|\n");
    printf("|float r3 = ++x * y - a / 2;                    |%32.2f|\n", r3 = ++x * y - a / 2);                    // Calculate r3 as the incremented value of x multiplied by y minus a divided by 2
    printf("|-----------------------------------------------|--------------------------------|\n");
    printf("|float r4 = ((x += 1.5) > y) || (b--> 0);       |%32.2f|\n", r4 = ((x += 1.5) > y) || (b-- > 0));    // Calculate r4 as true if the incremented value of x 
                                                                                                                //is greater than y or b decremented by 1 is greater than 0
    printf("+-----------------------------------------------+--------------------------------+\n");

    return 0;             //the program is running successfully
}


