#include <stdio.h>    //to import library

 int main() {                  // Main function

    printf("+-----------+-------+-------+---------+\n");                      // Print the header of the table
    int i = 1, j = 2, k;                                                      // Declare integer variables i, j, k
    printf("|           |  i = %d|  j = %d|  k = %d|\n", i , j , k);          //display initial values of i, j, k
    printf("+-----------+-------+-------+---------+\n");
    k = i + j;                                                                // Calculate k as the sum of i and j
    printf("|k=i+j      |%7d|%7d|%9d|\n",i, j, k);                            // Print the result of k
    printf("|-----------|-------|-------|---------|\n");
    i = i + ( k * j );                                                        // Calculate i by adding the product of k and j
    printf("|i=i+(k*j)  |%7d|%7d|%9d|\n",i, j, k);                            // Print the result of i
    printf("|-----------|-------|-------|---------|\n");
    j = i/2;                                                                  // Calculate j as half of i
    printf("|j=i/2      |%7d|%7d|%9d|\n",i, j, k);                            // Print the result of j
    printf("|-----------|-------|-------|---------|\n");
    k = i % 2;                                                           // Calculate k as the remainder of i divided by 2
    printf("|k=i%%2      |%7d|%7d|%9d|\n",i, j, k);                      // Print the result of k
    printf("|-----------|-------|-------|---------|\n");
    i = (j + k) * 3;                                                       // Calculate i as three times the sum of j and k
    printf("|i=(j+k)*3  |%7d|%7d|%9d|\n",i, j, k);                         // Print the result of i
    printf("+-----------+-------+-------+---------+\n");


    return 0;                                                              // Return 0 to indicate successful execution
 }