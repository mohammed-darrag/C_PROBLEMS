int array_search(int*arr,int size,int num)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==num)
        {
             return i;
        }
    }
    return -1;
}

int main()
{

    int arr[10]={2,3,4,5,6,7,8,9,10,11};
    int x=array_search(arr,10,8);
    if(x==-1)
    {
        printf("this number not found\n");

    }
    else
    {
       printf("this number found in index %d\n",x);

    }

    return 0;
}