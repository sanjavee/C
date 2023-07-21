#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int n=strlen(str);
    int i;
    int count=0;
    for(i=0;i<n;i++)
    {
        if(str[i]=='`'||str[i]=='~'||str[i]=='!'||str[i]=='@'||str[i]=='#'||str[i]=='$'||str[i]=='%'||str[i]=='^'||str[i]=='&'||str[i]=='*'||str[i]=='('||str[i]==')'||str[i]=='-'||str[i]=='_'||str[i]=='+'||str[i]=='=')
        {
            count++;
        }
    }
    printf("%d",count);
}
