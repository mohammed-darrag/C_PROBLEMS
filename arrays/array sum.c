int array_sum(int*arr,int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{

    int i,arr[10]={2,3,4,5,6};
    int x=array_sum(arr,5);
    printf("%d \n",x);
    printf("%d  %d\n",array_sum(arr+2,2),array_sum(arr,3));

    return 0;
}