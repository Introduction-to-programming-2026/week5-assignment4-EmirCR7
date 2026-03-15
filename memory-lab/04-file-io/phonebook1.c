#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Open "phonebook.csv" in append mode
    FILE *file = fopen("phonebook.csv", "a");

    // Check if fopen failed
    if (file == NULL)
    {
        return 1;
    }

    // Get name and number from user
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    // Write to file in CSV format
    fprintf(file, "%s,%s\n", name, number);

    // Close the file
    fclose(file);

    return 0;
}