
Where, n= Total no of Monkeys
        k= Number of eatable Bananas by Single Monkey (Monkey that jumped down last may get less than k Bananas)
        j = Number of eatable Peanuts by single Monkey(Monkey that jumped down last may get less than j Peanuts)
        m = Total number of Bananas
        p  = Total number of Peanuts
Remember that the Monkeys always eat Bananas and Peanuts, so there is no possibility of k and j having a value zero

#include<stdio.h>
int main()
{
    int n,k,j,m,p;
    scanf("%d",&n);
    scanf("%d",&k);
    scanf("%d",&j);
    scanf("%d",&m);
    scanf("%d",&p);
    int y,z;
    if(k!=0 && j!=0)
    {
        y=m/k;
        z=p/j;
    }
    int ans=n-y;
    int res=ans-z;
    printf("%d",res);
    return 0;
}
