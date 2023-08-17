#include<stdio.h>
#include<unistd.h>
#include<stdbool.h>
#include"Array.h"


int Array_Summation(int *ptr,int iSize)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        iSum = iSum + ptr[iCnt];
        // printf("--------> %d\n",ptr[iCnt]);
    }
    return iSum;
}

/////////////////////////////////////////////////////////////////

int Array_Average(int *ptr ,int iSize)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        iSum = iSum + ptr[iCnt];
    }
    return (iSum/iSize);
}

/////////////////////////////////////////////////////////////////

int Even_Count_Array(int *ptr ,int iSize)
{
    int iCnt = 0;
    int iEvenCnt = 0;

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if((ptr[iCnt]%2)==0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
}

/////////////////////////////////////////////////////////////////

int Odd_Count_Array(int *ptr,int iSize)
{
    int iCnt = 0;
    int iOddCnt = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if((ptr[iCnt]%2)!=0)
        {
            iOddCnt++;
        }
    }
    return iOddCnt;
}

/////////////////////////////////////////////////////////////////

void Display_Even_Odd_Count(int *ptr,int iSize)
{
    int iCnt = 0;
    int iEvenCount = 0;
    int iOddCount = 0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((ptr[iCnt]%2)==0)
        {
            iEvenCount++;
        }
        else
        {
            iOddCount++;
        }
    }
    printf("EVEN NUMBER COUNT FROM ARRAY:  %d\n",iEvenCount);
    printf("ODD NUMBER COUNT FROM ARRAY:  %d\n",iOddCount);
}

/////////////////////////////////////////////////////////////////

void Display_Even_Odd_Summation(int *ptr,int iSize)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((ptr[iCnt]%2)==0)
        {
            iEvenSum = iEvenSum + ptr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + ptr[iCnt];
        }
    }
    printf("EVEN NUMBER SUM FROM ARRAY:  %d\n",iEvenSum);
    printf("ODD NUMBER SUM FROM ARRAY:  %d\n",iOddSum);
}

/////////////////////////////////////////////////////////////////

int Frequency_Array(int *ptr,int iSize,int Freq)
{
    int iCnt = 0 ;
    int iFreqCount = 0;

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(ptr[iCnt] == Freq)
        {
            iFreqCount++;
        }
    }
    return iFreqCount;
}

/////////////////////////////////////////////////////////////////

bool Check_Occurance(int *ptr ,int iSize,int iValue)
{
    int iCnt = 0;
    
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(ptr[iCnt] == iValue)
        {
            break;
        }
    }

    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

/////////////////////////////////////////////////////////////////

int Occurance_Index(int *ptr,int iSize,int iValue)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(ptr[iCnt] == iValue)
        {
            break;
        }
    }

    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        iCnt;
    }
}

/////////////////////////////////////////////////////////////////

int Max_Element_Array(int *ptr , int iSize)
{
    int iCnt = 0;
    int iMax = 0;

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(ptr[iCnt]>iMax)
        {
            iMax = ptr[iCnt];
        }
    }
    return iMax;
}

/////////////////////////////////////////////////////////////////

int Min_Element_Array(int *ptr ,int iSize)
{
    int iCnt = 0;
    int iMin = ptr[0];

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(ptr[iCnt] < iMin)
        {
            iMin = ptr[iCnt];
        }
    }
    return iMin;
}

/////////////////////////////////////////////////////////////////

void Display_Reverse_Array(int *ptr,int iSize)
{
    int iCnt = 0;

    for(iCnt = iSize-1;iCnt>=0;iCnt--)
    {
        printf("%d\n",ptr[iCnt]);
    }
}

/////////////////////////////////////////////////////////////////

int Last_Occurance_Index(int *ptr ,int iSize,int iValue)
{
    int iCnt = 0;
    for(iCnt = iSize-1;iCnt>=0;iCnt--)
    {
        if(ptr[iCnt] == iValue)
        {
            break;
        }
    }

    if(iCnt == -1)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

/////////////////////////////////////////////////////////////////

