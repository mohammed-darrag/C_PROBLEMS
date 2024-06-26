
void array_of_pointers_print(char**arr,int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;arr[i][j]!=0;j++)
        {
            printf("%c",arr[i][j]);
        }
        printf("\n");

    }
}
int main()
{
    char s1[]="fatma !!";
    char *arr[6]={"ahmed mo!sen","abd@llah","o%ar","abde&rahman","s1","ab+bakr"};
    array_of_pointers_print(arr,6);
    return 0;
}