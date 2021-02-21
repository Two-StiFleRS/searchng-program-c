include<stdio.h>
int main()
{   //binary search

    int i,l,h,m,marks[11]={10,24,27,35,39,42,48,50,51,100,110};
    int f;
    printf("enter the marks you want to check\n");
    scanf("%d",&f);
    for(int i=0,l=0,h=10;i<11;i++)
    {
        m=(l+h)/2;
        if(marks[m]==f)
        {
            printf("the array contains the entered number of marks and the index of array is %d",m);
            break;
        }
        else
        {
            if(f<marks[m])
            {
                h=m-1;
            }
            if(f>marks[m])
            {
                l=m+1;
            }
        }
        if(i==10 && marks[m]!=f)
        {

            printf("nhi mila yaar element ab kya kru m .... kuch or try kr le yaar");
        }
    }
    return 0;
}

