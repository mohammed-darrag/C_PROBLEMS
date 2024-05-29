#include <stdio.h>
#include <stdbool.h>

int is_prime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
        
    return true; 
}

void print_prime_numbers(int count)
{
    printf("%d prime numbers:\n", count);
    int num = 2;
    int printed_count = 0;
    while (printed_count < count)
    {
        if (is_prime(num))
        {
            printf("%d ", num);
            printed_count++;
        }
        num++;
    }
    printf("\n");
}

int main()
{
    int num;
    printf("Enter the number of prime numbers you want to print: ");
    scanf("%d", &num);
    print_prime_numbers(num);
    return 0;
}
