#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
/*Write a C program that asks the user to find all the occurrence of a character, in the
string below, while counting the number of occurrence and printing it’s position, and
pointer address in the string.
String: “Future engineering focuses on sustainability, AI integration, renewable
energy, advanced materials, and personalized medicine, to enhance efficiency and
human well-being.”
STEPS:
• Include the necessary header files (string.h, ctype.h).
• Declare a character array for the string and a character variable for the target
character.
• Prompt the user to input the character.
• Use the strchr() function and a loop to iterate through the string, counting
occurrences of the character.
• Print the number of occurrence, it’s positions in the string, and the pointer
address of each position.*/


int main()
{
    char letter;
    char str[]= "Future engineering focuses on sustainability, AI integration, renewable energy, advanced materials, and personalized medicine, \t"
    "to enhance efficiency and human well-being.\t";
    printf("What character would you like to search for: ");
    scanf("%c", &letter);

    char* ptr1 = strchr(str, letter);
    char* ptr = &str;


    for(int i=0;i<strlen(str);i++)
    {
        if(*ptr1==letter)
        {
           printf("\nCharacter: %c | address: %p | position: %d",*ptr1,ptr1,ptr1-ptr);
        }

        ptr1++;
    }
}
