#include <stdio.h>

int main(int argc, char **argv) {
    int uninitialized_value;
    double y;
    double z;
    
    /* We see what happens when we specify an integer to be printed by %d
     * but forget to include an expression for that integer.
     */
    uninitialized_value = 2+2;
    printf("The answer is %d\n");

    /* Here is an example of dividing by two integers and expecting a float
     */

    y = 1/3;
    printf("You expected 0.33, but 'twas me, %f\n", y);

    /* Here, the problem is that the format specifier expects type int
     * but receives a value that is the product of dividing two floats.
     * It has similar behavior as in the first prtinf where the expression 
     * was altogether forgotten (2+2), in that it prints an unexpected integer
     * number.
     */
    z = 7.0 / 22.0;
    printf("7.0 div by 22.0 is %d\n", z);
    
    return 0;
}
