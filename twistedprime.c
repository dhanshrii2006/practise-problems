// A number is called a twisted prime if the number and its reverse are both
// prime.Check whether a given number satisfies this property.

// input n -> reverse n -> pass to prime -> if both are prime, then n is a twisted prime -> print the result.


#include <stdio.h>
#include <math.h>

int prime(int num)
{
    if (num <= 1) // <= 1 are not prime numbers, so we return 0 in that case.
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++) // this loop checks for factors of the number from 2 to the square root of the number. if we find any factor, then the number is not a prime number.
    {
        if (num % i == 0) // this checks if the number is divisible by i. if it is, then it is not a prime number.
        {
            return 0; // if the condition is true, we return 0, indicating that the number is not a prime number.
        }
    }
    return 1; // if we do not find any factors, then we return 1, indicating that the number is a prime number.
}
int main ()
{
    int original;
    printf ("Enter a number: ");
    scanf ("%d", &original);

    int reverse = 0;

  // original to reverse
   int temp = original;
   while (temp > 0)
   {
       reverse = reverse * 10 + temp % 10; 
       // for example, if temp is 123,
       // rev will be 0*10 + 3 = 3, 
       //then rev will be 3*10 + 2 = 32, 
       //and finally rev will be 32*10 + 1 = 321.

       temp /= 10; // this removes the last digit from temp by dividing it by 10.
       // for example, if temp is 123, after the first iteration temp will be 12,   after the second iteration temp will be 1,   and after the third iteration temp will be 0.
   }

   if (prime(original) == 1 && prime(reverse) == 1) // this checks if both the original number and its reverse are prime numbers. if they are, then the number is a twisted prime.
   {
       printf("The number is a twisted prime.\n");
   }
   else
   {
       printf("The number is not a twisted prime.\n");
   }
   
return 0;

}