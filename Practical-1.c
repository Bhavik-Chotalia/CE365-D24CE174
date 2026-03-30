// Roll No : D24CE174
// Subject : Compiler Construction (CE365)

#include <stdio.h>

int main()
{
    char inputStr[100];
    int index = 0;

    // Read input string
    scanf("%s", inputStr);

    // Skip all leading 'a' characters
    while (inputStr[index] == 'a')
    {
        index++;
    }

    // Check for exactly two 'b' characters at the end
    if (inputStr[index] == 'b' &&
        inputStr[index + 1] == 'b' &&
        inputStr[index + 2] == '\0')
    {
        printf("Valid String");
    }
    else
    {
        printf("Invalid String");
    }

    return 0;
}
