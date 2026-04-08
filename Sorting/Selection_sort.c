<<<<<<< HEAD
/*
Problem: Selection Sort
Category: Sorting
Language: C

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp,min;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
       min =i ;
         for(j=i+1;j<n;j++)
         {
              if(a[j]<a[min])
              {
                min = j;
              }
         }
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
    }
    printf("sorted array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
=======
/*
Problem: Selection Sort
Category: Sorting
Language: C

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp,min;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
       min =i ;
         for(j=i+1;j<n;j++)
         {
              if(a[j]<a[min])
              {
                min = j;
              }
         }
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
    }
    printf("sorted array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
>>>>>>> be6c158c94aa6180f70fc7fb09e8cd3e1fd20361
