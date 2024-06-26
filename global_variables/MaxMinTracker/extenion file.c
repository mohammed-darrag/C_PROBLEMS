int max;
int min;

void take_num(int n)
{
    static char flag=0;
    if(flag==0)
    {
        max=n;
        min=n;
        flag=1;
    }
    if(n>max)
    {
        max=n;
    }
     if(n<min)
    {
        min=n;
    }
}

int get_max(void)
{
    return max;
}
int get_min(void)
{
    return min;
}
