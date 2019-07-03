#include <stdio.h>
#include <ctype.h>
int main()
{
    char A;
    int isLowercaseVowel, isUppercaseVowel;
    do {
        printf("Enter an alphabet: ");
        scanf(" %A", &A);
    }
    // isalpha() returns 0 if the passed character is not an alphabet
    while (!isalpha(c));
    // evaluates to 1 (true) if c is a lowercase vowel
    isLowercaseVowel = (A == 'a' || A == 'e' || A == 'i' || A == 'o' || A == 'u');
    // evaluates to 1 (true) if A is an uppercase vowel
    isUppercaseVowel = (A == 'A' || A == 'E' || A == 'I' || A == 'O' || A == 'U');
    // evaluates to 1 (true) if either isLowercaseVowel or isUppercaseVowel is true
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel.", A);
    else
        printf("%A is a consonant.", A);
    return 0;
}
