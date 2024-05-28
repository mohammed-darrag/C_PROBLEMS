int main()
{
    while(1)
    {
        char let;
        printf("Enter a letter: ");
        fflush(stdin);
        scanf("%c", &let);

        if (let >= 'a' && let <= 'z')
        {
            printf("%c\n", let);
        }
        else if (let >= 'A' && let <= 'Z')
        {

            printf("%c\n", let + 32);
        }
        else
        {
            printf("You did not enter a letter.\n");
        }
    }
     return 0;
}