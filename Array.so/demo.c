#include<stdio.h>
#include<unistd.h>

void Display(int *ptr ,int iSize)
{
    int iCnt = 0;
    for(iCnt = iSize-1;iCnt>=0;iCnt--)
    {
        printf("%d\n",ptr[iCnt]);
    }

}

int main()
{
    int Arr[] = {10,20,30,40,50};
    Display(Arr,5);


    return 0;
}