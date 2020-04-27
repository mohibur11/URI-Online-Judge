#include<stdio.h>
int main()
{
    int i,j=0,k=0,n,l;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(i=0;i<n;i++)
    scanf("%d", &a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
    }
    for(i=0;i<j;i++)
    {
        for(l=i;l<j;l++)
        {
            if(b[i]>b[l])
            {
                b[i]=b[i]+b[l];
                b[l]=b[i]-b[l];
                b[i]=b[i]-b[l];
            }
        }
    }
    for(i=0;i<k;i++)
    {
        for(l=i;l<k;l++)
        {
            if(c[i]<c[l])
            {
                c[i]=c[i]+c[l];
                c[l]=c[i]-c[l];
                c[i]=c[i]-c[l];
            }
        }
    }
    for(i=0;i<j;i++)
        printf("%d\n",b[i]);
    for(i=0;i<k;i++)
        printf("%d\n",c[i]);
    return 0;
}
