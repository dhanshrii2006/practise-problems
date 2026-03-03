//.Given two numbers A and B, determine whether they are friendly pairs
// (ratio of sum of divisors to the number is same).

// ex: 6 and 28 are friendly pairs because the sum of divisors of 6 is 1 + 2 + 3 + 6 = 12, and the sum of divisors of 28 is 1 + 2 + 4 + 7 + 14 + 28 = 56. The ratio for both numbers is the same (12/6 = 2 and 56/28 = 2), so they are friendly pairs.

// input n1 and n2 -> using total divisors function find divisors of n1 and n2 and save in array1 and array2 -> sum of array1 and array2 -> find ratio of array1/ n1 and array2/n2 -> if ratio1 == ratio2 -> print "Friendly pairs" else print "Not friendly pairs"

#include <stdio.h>

int divisors(int n, int arr[100])
{
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
           arr[count] = i; // store the divisor in the array
            count++; // increment the count of divisors
        }
    }
    return count;
}

int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);


    int array1[100], array2[100];

    int count1 = divisors(n1, array1);
    int count2 = divisors(n2, array2);

    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < count1; i++)
    {
        sum1 += array1[i]; // sum of divisors of n1
    }
    for (int i = 0; i < count2; i++)
    {
        sum2 += array2[i]; // sum of divisors of n2
    }

    float ratio1 = (float)sum1 / n1; // ratio of sum of divisors to n1
    float ratio2 = (float)sum2 / n2; // ratio of sum of divisors to n2

    if (ratio1 == ratio2)
    {
        printf("Friendly pairs");
    }
    else
    {
        printf("Not friendly pairs");
    }

    return 0;
}