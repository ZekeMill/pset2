#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[ ])
{
    // get int and string
    int k;
    string p;
    // check for number input
    if (argc != 2)
    // exit program if number is not found
    {
        printf("Enter a number next time!\n");
        return 1;
    }
    k = atoi(argv[1]);
    while (k < 0)
    // retry number input if less than 0
    {
        printf("Your number's not valid; try another! ");
        k = GetInt();
    }
    // input text
    p = GetString();
    // show cipher text
    for (int i = 0, n = strlen(p); i < n; i++)
    {
        if (isupper(p[i]))
        {
            printf("%c", ((p[i] - 'A') + k) % 26 + 'A');
        }
        else if (islower(p[i]))
        {
            printf("%c", ((p[i] - 'a') + k) % 26 + 'a');
        }
        else
            printf("%c", p[i]);
    }
    printf("\n");
    // end program
    return 0; 
}
