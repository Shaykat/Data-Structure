#include<stdio.h>
#include<conio.h>

void main()

{

    int a[5],n,i,p,s=0;

    printf("n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("position: ");
    scanf("%d",&p);

    for(i=n;i>p;i--)
    {
        s=a[i];
        a[i-1]=s;

    }

    for(i=1;i<=n-1;i++)
    {
         printf("%d ",a[i]);

    }


    getch();
}

