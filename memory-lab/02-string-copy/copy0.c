// Capitalizes a string — the WRONG way
//
// Run this. Enter a lowercase word.
// Notice that BOTH s and t get capitalized, even though we only changed t.
//
// TODO: Write a comment below explaining WHY this happens:
// ANSWER: ...

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string
    string s = get_string("s: ");

    // This does NOT copy the string!
    // It only copies the address — s and t now point to the same memory.
    string t = s;

    // Capitalize first letter of t
    t[0] = toupper(t[0]);

    // Print both — are they different?
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
// ANSWER: This happens because when we do "string t = s" it does not make a copy of the string.

// It just copies where the string is stored in the computers memory.

// Both s and t are like two names for the string, in memory

// so when we change the letter of t0 we are also changing the first letter of s0