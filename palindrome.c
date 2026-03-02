// Generate all palindromic numbers between two given limits.
// A number is called a palindrome if it reads the same backward as forward. For example, 121 is a palindrome, while 123 is not.
// input L1 AND l2 -> generate array of palindromic numbers between L1 and L2 -> access each element -> check if it is palindrome -> if it is, save it in the array of palindromic numbers -> print the array of palindromic numbers.

#include <stdio.h>

int palindrome(int num)
{
    int temp = num;
    int reverse = 0;
    while (temp > 0)
    {
        reverse = reverse * 10 + temp % 10; // this calculates the reverse of the number by multiplying the current reverse by 10 and adding the last digit of temp.
        // for example, if temp is 123, rev will be 0*10 + 3 = 3, then rev will be 3*10 + 2 = 32, and finally rev will be 32*10 + 1 = 321.
        temp /= 10; // this removes the last digit from temp by dividing it by 10.
        // for example, if temp is 123, after the first iteration temp will be 12,   after the second iteration temp will be 1,   and after the third iteration temp will be 0.
    }

    if (reverse == num) // this checks if the reverse of the number is equal to the original number. if it is, then the number is a palindrome.
    {
        return 1; // if the condition is true, we return 1, indicating that the number is a palindrome.
    }
    else
    {
        return 0; // if the condition is false, we return 0, indicating that the number is not a palindrome.
    }
}

int main()
{
    int L1, L2;
    printf("Enter two limits: ");
    scanf("%d %d", &L1, &L2);

    int arr[100];
    int arr2[100]; // this array will store the palindromic numbers between L1 and L2.

    // generate array of numbers between L1 and L2
    int j = 0;
    for (int i = L1; i <= L2; i++)
    {
        arr[j] = i;
        j++;
    }

    // access each element in the array and check if it is a palindrome
    int temp = 0;
    for (int i = 0; i < j; i++)
    {
        if (palindrome(arr[i])) // this checks current element
        {
            arr2[temp] = arr[i]; // saved to arr2 if it is a palindrome

            temp++; // we increment temp to move to the next index in arr2 for the next palindromic number.
        }
    }

        // print
        printf("Palindromic numbers are:");
        for (int i = 0; i < temp; i++)
        {
            printf("%d ", arr2[i]);
        }
    return 0;
}