//Reverse of each word in an string
#include <stdio.h>
#include <string.h>
void main()
{
    char str[50],temp;
    int  c=0,f=0,i,j,k;
    printf("enter string : ");
    gets(str);
    i=0;
    while(str[i]!='\0')
    {
        c=i;
        f=c;
        for(j=c ; str[j]!=' ' && str[j]!='\0' ; j++)
        {
            f=f+1;
        }
        for(k=c ; k<(c + f) / 2 ;  k++)
        {
            temp=str[k];
            str[k]=str[f-k-1];
            str[f-k-1]=temp;
        }
        i=f;
    }
    puts(str);
}
