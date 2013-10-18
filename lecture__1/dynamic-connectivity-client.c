/* 
 * Dynamic connectivity client
 * - Reads the number of objects N from stdin
 * - Repeats:
 *      - reads in pair of integers from stdin
 *      - if they are not yet connected, connect them and print out pair
 */

#include <stdio.h>

int main(void) {
    int a;
    printf("Enter number for N:\n");
    scanf("%d", &a);
    printf("You entered: %d\n\n", a);

    return 0;
}
