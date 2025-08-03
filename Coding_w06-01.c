#include <stdio.h>        //to import library

int a = 5;                //declare int variable as 'a' and made it '5'
int b = 17;               //declare int variable as 'b' and made it '17'
float c = 8.5;            //declare float variable as 'c' and made it '8.5'
float d = 4.0;            //declare float variable as 'd' and made it '4.0'

int main(){                            //main function start here

    printf("a = %d, b = %d, c = %.2f, d = %.2f.\n" ,a , b ,c ,d);       //display all variable to user

    printf("d + a = %.2f\n", d + a);                //display the result of 'd + a' as float with 2 decimal and calculate d + a
    printf("a - b = %d\n", a - b);                  //display the result of 'a + b' as integer and calculate a + b
    printf("c * d = %.2f\n", c * d);                //display the result of 'c * d' as float with 2 decimal and calculate c * d
    printf("a * c = %.2f\n", a * c);                //display the result of 'a * c' as float with 2 decimal and calculate a * c
    printf("c / d = %.2f\n", c / d);                //display the result of 'c / d' as float with 2 decimal and calculate c / d
    printf("b / c = %.2f\n", b / c);                //display the result of 'b / c' as float with 2 decimal and calculate b / c
    printf("a %% b = %d\n", a % b);                 //display the result of ' a % b' as float with 2 decimal and calculate a % b, it errors 
    printf("c %% a = %d\n", c % a);                //display the result of 'c % a' as float with 2 dwcimal and calculate c % a, it errors because 'c' is float variable
    printf("c %% d = %d\n", c % d);                //display the result of 'c % d' as float with 2 decimal and calculate c % d, it errors because 'c' and 'd' are float variable

    return 0;                    //the program is runiing successfully

}

//1. In line 10th it display the value normally, which is "a = 5, b = 17, c = 8.50, d = 4.00."
//2. In line 12th it display the result of 'd + a' and calculate it, which is 9.00 because the 'd' is float variable
//3. In line 13th it display the result of 'a - b' and calculate it, which is -12 
//4. In line 14th it display the result of 'c * d' and calculate it, which is 34.00 because the 'c' and 'd' are float variable
//5. In line 15th it display the result of 'a * c' and calculate it, which is 42.50 because the 'c' is float variable
//6. In line 16th it display the result of 'c / d' and calculate it, which is 2.12 because the 'c' and 'd' is float variable
//7. In line 17th it display the result of 'b / c' and calculate it, which is 2.00 because the 'c' is float variable
//8. In line 18th it display the result of 'a % b' and calculate it, which is an error because in C language the '%' can only integer results
//9. In line 19th it display the result of 'c % a' and calculate it, which is an error because in C language the '%' can only use with integer
//10. In line 20th it display the result of 'c % d' and calculate it, which is an error because in C language the '%' can only use with integer 
//
