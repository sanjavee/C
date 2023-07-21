      A Largest prime number within range
	Consider the following input:
	a = 4
	b = 13
	Following are the prime numbers between 4 and 13: 5, 7, 11, 4 and 13 are excluded from the check. The largest of these primes is 11.
	Output is:
	11


#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int prime = 0;
    int flag = 1;
    for(int i=a+1; i<b; i++)
    {
        flag = 1;
        for(int k=2; k<=i/2; k++)
        {
            if(i%k == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1 && i>prime)
        {
            prime = i;
        }
    }
    printf("%d",prime);
    return 0;
}

