#include <stdio.h>   //to import library

int main() {  // Main function

    int x = 12, y = 7, z = 12, a = 3, total = 0, price = 10, quantity = 2, discount = 1, rate = 5, score = 100, penalty = 2, mistake = 0;   // Declare integer variables x, y, z, a,
    printf("x = 12, y = 7, z = 12, a = 3, total = 0, price = 10, quantity = 2, discount = 1, rate = 5, score = 100, penalty = 2, mistake = 0\n");     // Display values of variables
    printf("+-----------------------------------------------+--------------------------------+\n");
    printf("|    Full Expression                            |         Result                 |\n");
    printf("+-----------------------------------------------+--------------------------------+\n"); 
    printf("|x -= 4.0                                       |%32d|\n", x -= 4.0);                            // Calculate x as x minus 4.0
    printf("|-----------------------------------------------|--------------------------------|\n");
    printf("|x *= 6.5                                       |%32d|\n",x *= 6.5);                           // Calculate x as 6.5 multiply x
    printf("|-----------------------------------------------|--------------------------------|\n");
    printf("|x %%= (y + z * a)                               |%32d|\n",x %= (y + z * a));                   // Calculate x as x modulo (y plus z times a)
    printf("|-----------------------------------------------|--------------------------------|\n");
    printf("|x /= (2.0 * x);                                |%32d|\n",x /= (2.0 * x));                     // Calculate x as x divided by (2.0 times x)
    printf("|-----------------------------------------------|--------------------------------|\n");
    printf("|total += (price * quantity - discount);        |%32d|\n",total += (price * quantity - discount));  // Calculate total as total plus (price times quantity minus discount)
    printf("|-----------------------------------------------|--------------------------------|\n");
    printf("|x *= (1 + rate / 100);                         |%32d|\n",x *= (1 + rate / 100));               // Calculate x as x times (1 plus rate divided by 100)
    printf("|-----------------------------------------------|--------------------------------|\n");
    printf("|score -= (penalty * (mistake + 1));            |%32d|\n",score -= (penalty * (mistake + 1)));   // Calculate score as score minus (penalty times (mistake plus 1))
    printf("+-----------------------------------------------+--------------------------------+\n");

    return 0;                                                                                     // the program is running successfully
}


