/*
*   To find all the numbers that are multiples of 3 or 5, we can first find all the multiples of 3, add all the multiples of 5, and then subtract the multiples of both (multiples
*   of 15) as we have counted them twice.  Note that the sum of the first n multiples of x can be written as x*(n * (n+1))/2
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int sum_mult_3, sum_mult_5, sum_mult_15, ans;
    clock_t begin, end;

    // Start the timer
    begin = clock();

    // Calculate the individual sums of multiples
    sum_mult_3 = 3*(333 * 334)/2;
    sum_mult_5 = 5*(199 * 200)/2;
    sum_mult_15 = 15*(66 * 67)/2;

    // Calculate the final sum
    ans = sum_mult_3 + sum_mult_5 - sum_mult_15;

    printf("The answer is: %d\n",ans);

    // Calculate running time
    end = clock();
    printf("Runtime: %f seconds.\n", (double)(end - begin) / CLOCKS_PER_SEC);

    return 0;
}
