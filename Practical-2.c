// Roll No : D24CE174
// Subject : CE365 – Compiler Construction

#include <stdio.h>

int main()
{
    int alphaCount, stateCount;
    int initial;
    int finalCount;
    int finalStates[10];
    int dfaTable[10][10];
    char alphabet[10];
    char testString[50];

    int state, x, y;
    int isAccepted = 0;

    printf("Number of input symbols : ");
    scanf("%d", &alphaCount);

    printf("Input symbols : ");
    for (x = 0; x < alphaCount; x++)
    {
        scanf(" %c", &alphabet[x]);
    }

    printf("Enter number of states : ");
    scanf("%d", &stateCount);

    printf("Initial state : ");
    scanf("%d", &initial);

    printf("Number of accepting states : ");
    scanf("%d", &finalCount);

    printf("Accepting states : ");
    for (x = 0; x < finalCount; x++)
    {
        scanf("%d", &finalStates[x]);
    }

    printf("Transition table :\n");
    for (x = 1; x <= stateCount; x++)
    {
        for (y = 0; y < alphaCount; y++)
        {
            printf("%d to %c -> ", x, alphabet[y]);
            scanf("%d", &dfaTable[x][y]);
        }
    }

    printf("\nInput string : ");
    scanf("%s", testString);

    state = initial;

    for (x = 0; testString[x] != '\0'; x++)
    {
        int match = 0;
        for (y = 0; y < alphaCount; y++)
        {
            if (testString[x] == alphabet[y])
            {
                state = dfaTable[state][y];
                match = 1;
                break;
            }
        }

        if (!match)
        {
            printf("Invalid String");
            return 0;
        }
    }

    for (x = 0; x < finalCount; x++)
    {
        if (state == finalStates[x])
        {
            isAccepted = 1;
            break;
        }
    }

    if (isAccepted)
        printf("Valid String");
    else
        printf("Invalid String");

    return 0;
}
