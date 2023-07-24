#include <stdio.h>

int main()
{
    char ch;

    /* Input an alphabet from user */
    printf("Enter any alphabet: ");
    scanf("%c", &ch);

    /* Switch value of ch */
    switch(ch)
    {
        case 'a': 
            printf("Supplied Alphabet is vowel.");
            break;
        case 'e': 
         printf("Supplied Alphabet is vowel.");
            break;
        case 'i': 
            printf("Supplied Alphabet is vowel.");
            break;
        case 'o': 
            printf("Supplied Alphabet is vowel.");
            break;
        case 'u': 
            printf("Supplied Alphabet is vowel.");
            break;
        case 'A': 
           printf("Supplied Alphabet is vowel.");
            break;
        case 'E': 
           printf("Supplied Alphabet is vowel.");
            break;
        case 'I': 
           printf("Supplied Alphabet is vowel.");
            break;
        case 'O': 
        printf("Supplied Alphabet is vowel.");
            break;
        case 'U': 
            printf("Supplied Alphabet is vowel.");
            break;
        default: 
            printf(" Supplied Alphabet is Consonant.");
    }

    return 0;
}
