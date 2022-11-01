#include <stdio.h>
int main()
{
    char ch[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char c;
    int check;

    printf("Enter character ( a-z | A-Z ): ");
    scanf("%c", &c);

    check = 0;
    for (int i = 0; i < sizeof(ch) / sizeof(ch[0]); i++)
    {
        if (ch[i] == c)
        {
            check = 1;
        }
    }
    if (check == 1)
    {
        printf("-> %c vowel", c);
    }
    else
    {
        printf("-> %c consonant", c);
    }
}