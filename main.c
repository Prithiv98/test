#include <stdio.h>
#include <stdlib.h>

int prime(int , int);

int main()
{
    int l, h, i, f;
    printf("Enter two first number: ");
    scanf("%d", &l);
    printf("Enter the highest number");
    scanf("%d", &h);
    printf("Prime numbers between %d and %d are: ", l, h);
    
    prime(l,h);
}

int prime(int l,int h)
{
    while (l < h)
    {
        f = 0;
        for(i = 2; i <= l/2; ++i)
        {
            if(low % i == 0)
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
            return l;
        ++l;
    }
    
}
