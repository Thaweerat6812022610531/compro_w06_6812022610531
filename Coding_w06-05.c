#include <stdio.h>   //to import library

int main() {  // Main function

    int A, B, C, D, E, F, G;  // Declare integer variables A to G
    printf("+-----------------------------------------------+--------------------------------+\n");
    printf("|                Expression                     |              Result            |\n");
    printf("+-----------------------------------------------+--------------------------------+\n"); 
    printf("|A = -2 + 5 * 2;                                |%32.2f|\n", A = -2 + 5 * 2);                         // Calculate A as -2 plus 5 times 2
    printf("|-----------------------------------------------|--------------------------------|\n");
    printf("|B = 10/2 * 3;                                  |%32.2f|\n", B = 10/2 * 3);                          // Calculate B as 10 divided by 2 times 3
    printf("|-----------------------------------------------|--------------------------------|\n");
    printf("|C = 6 / 2 + 3 * (4 %% 2);                       |%32.2f|\n", C = 6 / 2 + 3 * (4 % 2));              // Calculate C as 6 divided by 2 plus 3 times the remainder of 4 divided by 2
    printf("|-----------------------------------------------|--------------------------------|\n");
    printf("|D = (5+2) * 15 %% 4;                            |%32.2f|\n", D = (5+2) * 15 % 4);                   // Calculate D as the sum of 5 and 2 times 15 modulo 4
    printf("|-----------------------------------------------|--------------------------------|\n");
    printf("|E = 6 + 2 * 2 - 6 / 2;                         |%32.2f|\n", E = 6 + 2 * 2 - 6 / 2);                 // Calculate E as 6 plus 2 times 2 minus 6 divided by 2
    printf("|-----------------------------------------------|--------------------------------|\n");
    printf("|F = 5 + 3 * 2 -8 / 4 + (6 %% 5);                |%32.2f|\n", F = 5 + 3 * 2 -8 / 4 + (6 % 5));       // Calculate F as 5 plus 3 times 2 minus 8 divided by 4 plus the remainder of 6 divided by 5
    printf("|-----------------------------------------------|--------------------------------|\n");
    printf("|G = 1*(4 + 3) * 2 -10 / (2 + 3);               |%32.2f|\n", G = 1*(4 + 3) * 2 -10 / (2 + 3));       // Calculate G as 1 times the sum of 4 and 3 times 2 minus 10 divided by the sum of 2 and 3
    printf("+-----------------------------------------------+--------------------------------+\n");

    return 0;  // the program is running successfully
}