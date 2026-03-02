//  Given a character input, determine whether it is:
// o Uppercase letter
// o Lowercase letter
// o Digit
// o Special symbol

// ASCII is a character encoding standard that uses numerical codes to represent characters. Each character is assigned a unique code, which can be represented in binary, decimal, or hexadecimal form. The ASCII standard includes 128 characters, including uppercase letters (A-Z), lowercase letters (a-z), digits (0-9), and special symbols (such as !, @, #, etc.).

//using enum
// An enumeration (enum) is a user-defined data type in C that consists of a set of named integer constants. 

//It allows you to define a variable that can take on a limited set of values, which can make your code more readable and maintainable. example: uppercase will be represented as 0, lowercase as 1, digit as 2 and special symbol as 3.
// this means that when you declare a variable of type charType, it can only take on one of the four values defined in the enum (UPPERCASE, LOWERCASE, DIGIT, SPECIAL_SYMBOL).
// 


#include <stdio.h>
#include <ctype.h>

typedef enum
{
    UPPERCASE,
    LOWERCASE,
    DIGIT,
    SPECIAL_SYMBOL
}charType;

charType classify(char ch)
{
    if(isupper(ch)) //
        return UPPERCASE;
    else if(islower(ch))
        return LOWERCASE;
    else if(isdigit(ch))
        return DIGIT;
    else
        return SPECIAL_SYMBOL;
}

// The isupper(), islower(), and isdigit() functions are part of the C standard library and are used to check if a character is an uppercase letter, lowercase letter, or digit, respectively. They return a non-zero value (true) if the condition is met and zero (false) otherwise.

int main()
{
    char c;
    charType result;

    printf("Enter a character: ");
    scanf("%c", &c);

    result = classify(c);

    switch (result)
    {
    case UPPERCASE:
        printf("The character is an uppercase letter.\n");
        break;
    case LOWERCASE:
        printf("The character is a lowercase letter.\n");   
        break;
    case DIGIT:
        printf("The character is a digit.\n");  
        break;
    case SPECIAL_SYMBOL:
        printf("The character is a special symbol.\n");  
        break;
    
    }
return 0;
}