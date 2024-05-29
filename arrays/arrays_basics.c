
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[10]={1,2,3,4,5,20};
    printf("%d  %d  %d  %d",sizeof(arr),arr,*(arr),*(arr+1));

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,arr[10]={1,2,3,4,5,};
    int *p=arr;
    for(i=0;i<10;i++)
    {
        printf("*arr=%d   *p=%d\n",*arr,*p);
        p++;
    }

    return 0;
}



#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,arr[10]={1,2,3,4,5,};
    char arr2[40]={1,2,3,4,5,6,7,8,9,10,13,5,8,13,4,6,1,4,6,4,4};
    char *p=arr2;
    for(i=0;i<40;i++)
    {
        printf("*arr=%d   *p=%d\n",*arr,*p);
        p++;
    }

    return 0;
}



#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,arr[10]={300,2,3,4,5,20,37,37};
    char arr2[40];
    for(i=0;i<10;i++)
    {
        printf("%d %d\n",*(arr+i),arr[i]);

    }
    return 0;
}
