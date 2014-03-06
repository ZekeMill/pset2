// include libraries
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// declare main program
int main(int argc, string argv[ ])
{
    string key;
    string plaintext;
    

// step 1 - get non-negative integer k to use as encryption key
    
    if (argc != 2)
    {
        printf("Dude, wtf?\n");
        return 1;
    }
    
    key = argv[1];

    // verify input
    for (int j = 0, m_string = strlen(key); j < m_string ; j++)
    {
        if (!isalpha(key[j]))
        {
            // exit if invalid
            printf("Survey says....nope!\n");
            return 1;
        }
        
    }

// step 2 - get plaintext
    
    plaintext = GetString();
    
// step 3 - rotate and display ciphertext
    
    int key_position = 0; 
        
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        key_position = key_position % strlen (key);
        int k_val = tolower(key[key_position]);
        if (isupper(plaintext[i]))
        {
            printf("%c", ((((plaintext[i] - 'A') + k_val - 'a') % 26) + 'A'));
            key_position++;                
            }
            else if (islower(plaintext[i]))
        {
            printf("%c", ((((plaintext[i] - 'a') + k_val - 'a') % 26) + 'a'));
            key_position++;
            }
            else
        {
            printf("%c", plaintext[i]);
            }
        }
    printf("\n");
        
    return 0;
}
