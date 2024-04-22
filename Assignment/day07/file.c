/*
sort the array element in assending order using ptr 
*/

#include <stdio.h>
 
int asort(int *arr,int n)
{
int i,j,temp=0;
for(j=0;j<n;j++)
{
    for(i=0;i<n-1;i++)
    {
        if(*(arr+i) > *(arr+i+1))
        {
            temp = *(arr+i+1);
            *(arr+i+1) = *(arr+i);
            *(arr+i) = temp;
        }
    }
}
    for(i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
    return 0;
}

int main()
{
    int a[]={9,8,7,6,5,4,3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    
    asort(a,n);
    return 0;
}
/*Output we got is
1 2 3 4 5 6 7 8 9 
*/