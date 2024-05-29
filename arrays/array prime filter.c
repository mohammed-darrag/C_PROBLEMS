int array_findprime(int*arr2,int size,int*prime_arr)
{
    int i,j=0;
    for(i=0; i<size; i++)
    {

        if(isprime(arr2[i]))
           {
                 prime_arr[j]=arr2[i];
                 j++;
           }



    }
    return j;

}

int isprime(int n)
{
    if(n<2)
    {
        return(0);
    }
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;

}

int main()
{

    int arr1[100]= {0};
    int arr2[100]= {1,2,3,4,5,6,7,8,9,10,11,12,13,15,16,17,18,19,43};
    array_print(arr2,100);
    int x=array_findprime(arr2,100,arr1);
    printf("after filteration \n");
    array_print(arr1,x);

    return 0;
}