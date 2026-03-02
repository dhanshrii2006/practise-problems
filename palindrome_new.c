//.Given a number N, find the smallest number greater than N that is a palindrome.
// example: if the input is 123, the output should be 131. if the input is 99, the output should be 101.

// Input number -> check if it is a palindrome -> if it is, increment the number to find nearest palindrome  -> print the nearest palindrome.

#include <stdio.h>

int palindrome(int num)
{
    int temp = num;
    int reverse = 0;
    while (temp > 0)
    {
        reverse = reverse * 10 + temp % 10; 
        temp /= 10;
    }

    if (reverse == num) 
    {
        return 1; 
    }
    else
    {
        return 0; 
    }
}
int main ()
{
    int num;
    printf ("Enter a number: ");
    scanf ("%d", &num);

    while (1) // infinite loop to increment untill we find the nearest palindrome greater than the input number.
    {
        num++; 
        if (palindrome(num))
        {
            break;
        }
    }

    printf("The nearest palindrome greater than the input number is: %d\n", num);
}

// dry run: 119
// num ++ = 120, 
// palindrome(120) = 0, .
// num ++ = 121, palindrome,
// break loop and print 121 as output.