#include <stdio.h>
#include <stdlib.h>

void string_print(char* str)
{
    int i;
    for (i = 0; str[i]; i++)
    {
        printf("%c", str[i]);
    }
}

void string_longest_word(char* str, char* word)
{
    int i, j, max = 0, c = 0, index = 0;
    for (i = 0; str[i] ; i++)
    {
        if (str[i] == ' ')
        {
            if (c > max)
            {
                max = c;
                index = i ;
            }
            c = 0;
        }
        else
        {
            c++;
        }
    }

    j = 0;
    i = index - max;
    while(j<max)
    {
        word[j] = str[i];
        printf("%d \n",i);
        i++;
        j++;

    }

}

int main()
{
    char str[] = "iam an embedded softwareee engineer";
    char word[100] = {0};
    string_longest_word(str, word);
    string_print(word);
    return 0;
}