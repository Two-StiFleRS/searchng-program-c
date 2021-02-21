#include <stdio.h>

//linear search program

int main()
{
    int arr[16]={3,5,45,6,8,9,0,3,43,11,1,4,22,32,47,98};
    int i,j;
    printf("enter the element you want to search\n");
    scanf("%d",&j);
    for(i=0;i<16;i++)
    {
        if(arr[i]==j)
        {
            printf("the index of array that contains your element is %d",i);
            break;
        }

        if(i==15)
        {

        if(arr[i]!=j)
        printf("nhi mila yaar tera element m to thak gya search krta krta ... \nab chla ja yaar mood kharab mt kr ");
        }
    }

return 0;
}
