// Print all numbers between 1 and N that are divisible by the sum of their digits.

#include <stdio.h>

int sum (int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum = sum + n%10; // this gives us the last digit of the number and adds it to the sum variable.
        n = n / 10; // this removes the last digit from the number by dividing it by 10.
    }
    return sum;
}

int main ()
{
    int size;
    printf ("Enter a size: ");
    scanf ("%d", &size);

    // input elements in the array
    printf ("Enter %d numbers: ", size);
    int arr[size];
    for (int i = 1; i <= size; i++)
    {
       scanf ("%d", &arr[i]);
    }

// check if each number in array is divisible by the sum of its digits. if it is, we print the number.
    printf ("Numbers that are divisible by the sum of their digits: ");
    for (int i = 1; i <= size; i++)
    {
        if (arr[i] % sum(arr[i]) == 0)
        {
            printf ("%d ", arr[i]);
        }
    }
   


}