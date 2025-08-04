#include <stdio.h>       //to import library

int main() {            // Main function

    printf("+------------------------+--------------------------------+\n");             
    int x = 12, y = 7, z = 12;                                                    // Declare integer variables x, y, z
    printf("|      Expression        |              Result            |\n");
    printf("+------------------------+--------------------------------+\n"); 
    printf("|x>y                     |%32d|\n", x > y);                            // Check if x is greater than y 
    printf("|------------------------|--------------------------------|\n");
    printf("|x<z                     |%32d|\n",x < z);                            // Check if x is less than z 
    printf("|------------------------|--------------------------------|\n");
    printf("|x==z                    |%32d|\n",x == z);                           // Check if x is equal to z 
    printf("|------------------------|--------------------------------|\n");
    printf("|x!=y                    |%32d|\n",x != y);                           // Check if x is not equal to y 
    printf("|------------------------|--------------------------------|\n");
    printf("|!(2*5>=y)||(5!=(5/3))   |%32d|\n",!(2*5 >= y) || (5 != (5/3)));      // Check if 2*5 is not greater than or equal to y or if 5 is not equal to 5/3 
    printf("|------------------------|--------------------------------|\n");
    printf("|!(x < y)                |%32d|\n",!(x < y));                         // Check if x is not less than y    
    printf("|------------------------|--------------------------------|\n");
    printf("|(x+y)>(z*2)             |%32d|\n",(x + y) > (z * 2));                // Check if the sum of x and y is greater than twice z
    printf("|------------------------|--------------------------------|\n");
    printf("|(x%%2==0)||(y%%2==1)      |%32d|\n",(x % 2 == 0) || (y % 2 == 1));    // Check if x is even or y is odd
    printf("|------------------------|--------------------------------|\n");
    printf("|(x>y)&&(z<y)            |%32d|\n",(x > y) && (z < y));                // Check if x is greater than y and z is less than y
    printf("+------------------------+--------------------------------+\n");

    return 0;            //The program is running successfully
}