// 12.Determine whether a number is a circular prime.
// A circular prime is a prime number that remains prime under all rotations of its digits. For example, 197 is a circular prime because 197, 971, and 719 are all prime numbers. 

// input n -> generate all rotations of n -> check if all rotations are prime -> if they are, then n is a circular prime -> print the result.

#include <stdio.h>
#include <math.h>

int prime(int num)
{
    if (num <= 1) 
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++) 
    {
        if (num % i == 0) 
        {
            return 0; 
        }
    }
    return 1; 
}
int rotate(int num)
{
 // dry run 123
    int divisor = 1;
    while (divisor <= num)
    {
        divisor *= 10; // this calculates the divisor to understand how many digits we need to rotate. for example, if num is 123, divisor will be 1000, which means we need to rotate 3 digits of the number.
    }
    divisor /= 10; // we divide the divisor by 10 to get the correct divisor for the number. for example, if divisor is 1000, after dividing by 10, divisor will be 100, which is the correct divisor for rotating the digits of the number.
};

int main ()
{
    int num;
    printf ("Enter a number: ");
    scanf ("%d", &num);

    if (prime(num) == 1 && rotate(num) == 1) // this checks if the original number is prime and if all its rotations are prime. if both conditions are true, then the number is a circular prime.
    {
        printf("The number is a circular prime.\n");
    }
    else
    {
        printf("The number is not a circular prime.\n");
    }