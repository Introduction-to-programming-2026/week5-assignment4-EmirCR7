#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_WORDS 5

int main(void)
{
   
    char *words[NUM_WORDS];

   
    for (int i = 0; i < NUM_WORDS; i++)
    {
        char *input = get_string("Enter word %i: ", i + 1);

        
        words[i] = malloc(strlen(input) + 1);

        
        if (words[i] == NULL)
        {
            printf("Memory error!\n");
            return 1;
        }

        
        strcpy(words[i], input);

        
        if (strlen(words[i]) > 0)
        {
            words[i][0] = toupper(words[i][0]);
        }
    }

    

    
    FILE *file = fopen("log.txt", "w");

    
    if (file == NULL)
    {
        printf("Could not open file!\n");
        return 1;
    }

    
    for (int i = 0; i < NUM_WORDS; i++)
    {
        fprintf(file, "%s\n", words[i]);
    }

    
    fclose(file);

    printf("\nWords saved to log.txt!\n");

   
    for (int i = 0; i < NUM_WORDS; i++)
    {
        free(words[i]);
    }

    return 0;
}