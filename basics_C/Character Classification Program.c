int main()
{
    while (1)
    {
        char c;
        fflush(stdin);
        scanf("%c",&c);
        if( c>='a' && c<='z')
        {
            printf("%c the letter is small \n",c);
        }
        else if( c>='A' && c<='Z')
        {
            printf("%c the letter is capital \n",c);
        }
        else
        {
            printf("%c is not the letter \n",c);
        }
    }

    return 0;
}