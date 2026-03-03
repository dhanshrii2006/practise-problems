// Find the number of trailing zeros in the factorial of a given number without actually computing the factorial.

// ex: 5! = 120, which has 1 trailing zero, so the output should be 1.
// ex: 10! = 3628800, which has 2 trailing zeros, so the output should be 2.

// for any number n if it has multiples of 5 in its factorial calculation, then it will contribute to the number of trailing zeros.
// ex: 5! has one multiple of 5 (5 itself), so it contributes 1 to the count of trailing zeros.
// ex: 10! has two multiples of 5 (5 and 10), so it contributes 2 to the count of trailing zeros.
// 30: 5, 10, 15, 20, 25, 30 -> 6 multiples of 5, but 25 contributes an extra 5 (since it is 5^2), so it contributes a total of 7 to the count of trailing zeros. 
// 50: 5, 10, 15, 20, 25, 30, 35, 40, 45, 50 -> 10 multiples of 5, but 25 contributes an extra 5 (since it is 5^2), so it contributes a total of 11 to the count of trailing zeros.

// input n -> count the number of times 5 is a factor in the numbers from 1 to n  -> then divide n by 5, then divide the result by 5 again, and so on until the result is less than 1. The sum of all these results will give the total number of trailing zeros in n!. 
// ex: n = 100 -> 100/5 + 100/25 + 100/125 + ... = 20 + 4 + 0 + ... = 24 trailing zeros in 100!
// Time complexity: O(log n) since we are dividing n by 5 repeatedly until it becomes less than 1.

#include <stdio.h>

int count(int n)
{
    int count = 0;
    while (n >= 5)
    {
count = count + n / 5; // gives quotient ie number of multiples of 5 in n
        n = n / 5; // gives the next power of 5 to check for multiples of 25, 125, etc.
    }
}

// n = 100 
// count = 0
// n >= 5 -> true
// count = 0 + 100/5 = 20
// n = 100/5 = 20
// 220 >= 5 -> true
// count = 20 + 20/5 = 24
// n = 20/5 = 4
// 4 >= 5 -> false
// return count = 24


int main ()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = count(n);
    printf("Number of trailing zeros in %d", result);
    return 0;
}

