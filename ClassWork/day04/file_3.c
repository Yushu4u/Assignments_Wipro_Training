#include <stdio.h>
#define CAP 10
int main()
{
    int g_Num;
    int arr[CAP];
    int it, flag=0;
    
    //store the elements of array
    printf("\nEnter %d element values of array\n",CAP);
    for(it=0;it<CAP;it++)
        scanf("%d",&arr[it]);
    printf("\nEnter the number to be searched in the list: ");
    scanf("%d",&g_Num);

    //linear search is performed find the given number
    for(it=0;it<CAP;it++)
    {
        if(arr[it]==g_Num)
        {
            printf("\nFound");
            flag=1;
            break;
        }
        //printf("\n%d",it);
    }

    printf("\nit=%d",it);
    //if(flag==0)
    if(it>CAP-1)
        printf("\nNot Found");

    printf("\n\n");
    return 0;

}
