#include <stdio.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%a",&a);
    if( (a>='a' && a<='z') || (a>='A' && a<='Z'))
        printf("%a is an alphabet.",a);
    else
        printf("%a is not an alphabet.",a);
    return 0;
}
