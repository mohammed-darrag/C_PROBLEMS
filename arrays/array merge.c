int array_merg(int *arr1,int s1,int*arr2,int s2,int *arrnew)
{
    int i,j=0;
    int newsize=s1*2;
    for(i=0;i<newsize;i++)
    {
        if(i%2==0)
        {
            arrnew[i]=arr1[j];

        }
        else
        {
          arrnew[i]=arr2[j];
           j++;  //tricky here 
        }

    }
    return i;
}

int main()
{

    int arr1[]= {1,2,3,4,5,};
    int arr2[]= {11,12,13,14,15};
    int arr3[100]={0};
    int s1=sizeof(arr1)/sizeof(arr1[0]);
    int s2=sizeof(arr2)/sizeof(arr2[0]);
    int x=array_merg(arr1,s1,arr2,s2,arr3);
    array_print(arr3 ,x);

    return 0;
}