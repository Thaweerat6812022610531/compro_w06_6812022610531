#include <stdio.h>             //to import library

 int main() {                 // Main function

    printf("+-------------+----------+----------+----------+\n");
    float x = 1.0, y = 2.0, z;                                                         // Declare float variables x, y, z
    printf("|             |  x = %.2f|  y = %.2f|  z = %.2f|\n", x , y , z);           //display initial values of x, y, z
    printf("+-------------+----------+----------+----------+\n");
    x = y + 5.0;                                                                       // Calculate x as the sum of y and 5.0
    printf("|x=y+5.0      |%10.2f|%10.2f|%10.2f|\n",x, y, z);                          //display the result of x
    printf("|-------------|----------|----------|----------|\n");
    y = x / 2.0;                                                                       // Calculate y as half of x
    printf("|y=x/2.0      |%10.2f|%10.2f|%10.2f|\n",x, y, z);                          //display the result of y
    printf("|-------------|----------|----------|----------|\n");                         
    y = (x * 3.0) + 4.0;                                                               // Calculate y as three times x plus 4.0
    printf("|y=(x*3.0)+4.0|%10.2f|%10.2f|%10.2f|\n",x, y, z);                          //display the result of y
    printf("|-------------|----------|----------|----------|\n");
    x = -5.0 - y;                                                                      // Calculate x as -5.0 minus y
    printf("|x=-5.0-y     |%10.2f|%10.2f|%10.2f|\n",x, y, z);                          //display the result of x
    printf("|-------------|----------|----------|----------|\n");
    z = x = y;                                                                         // Assign the value of y to z and x
    printf("|z=x+y        |%10.2f|%10.2f|%10.2f|\n",x, y, z);                          //display the result of z
    printf("+-------------+----------+----------+----------+\n");


    return 0;                                               // the program is running successfully
 }