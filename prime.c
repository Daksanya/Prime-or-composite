#include <stdio.h>

int prime(int, int);

int main()
{
    int num, check;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num==1||num==0)
        printf("Neither prime nor composite.");

    else
    { check = prime(num, num / 2);
    if (check == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    }
    return 0;
}

int prime(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return prime(num, i - 1);
       }
    }
}
