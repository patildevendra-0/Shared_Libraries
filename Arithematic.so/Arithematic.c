#include <stdio.h>
#include <unistd.h>
#include <stdbool.h> 
#include "Arithematic.h"

/////////////////////////////////////////////////////////////////

void Display()
{
    printf("SHREE GANESH...\n");
}

/////////////////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
{
    int iAns = iNo1 + iNo2;
    return iAns;
}

/////////////////////////////////////////////////////////////////

int Substraction(int iNo1, int iNo2)
{
    int iAns = 0;
    if (iNo1 < iNo2)
    {
        iAns = iNo2 - iNo1;
    }
    else
    {
        iAns = iNo1 - iNo2;
    }
    return iAns;
}

/////////////////////////////////////////////////////////////////

int Multiplication(int iNo1, int iNo2)
{
    int iAns = iNo1 * iNo2;
    return iAns;
}

/////////////////////////////////////////////////////////////////

int Division(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo1>iNo2)
    {
        iAns = iNo1/iNo2;
    }
    else
    {
        iAns = iNo2/iNo1;
    }
    return iAns;
}

/////////////////////////////////////////////////////////////////

int Summation(int iNo)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

/////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    for(iCnt = 0;iCnt<=iNo;iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

/////////////////////////////////////////////////////////////////

void Factors(int iNo)
{
    int iCnt = 0;
    printf("FACTORS OF : %d :\n",iNo);

    for(iCnt = 1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)== 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

/////////////////////////////////////////////////////////////////

void NonFactors(int iNo)
{
    int iCnt = 0;
    printf("NON FACTORS OF : %d :\n",iNo);

    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        if((iNo%iCnt)!= 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

/////////////////////////////////////////////////////////////////

int FactorsSum(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum = iSum+iCnt;
        }
    }
    return iSum;
}

/////////////////////////////////////////////////////////////////

bool CheckPrefect(int iNo)
{
    int iAns = 0;
    iAns = FactorsSum(iNo);
    if(iAns == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////

int NonFactorsSum(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            iSum = iSum+iCnt;
        }
    }
    return iSum;
}

//////////////////////////////////////////////////////////////////

void Display_Tables(int iNo)
{
    int iCnt = 0;

    printf("___________________________________");
    printf("TABLE OF : %d :\n ",iNo);
    printf("___________________________________");

    for(iCnt =1;iCnt<=10;iCnt++)
    {
        printf("%d\n",iNo*iCnt);
    }

}

//////////////////////////////////////////////////////////////////

void Display_Reverse(int iNo)
{
    int iCnt = 0 ;

        printf("___________________________________");
        for(iCnt=iNo;iCnt>=1;iCnt--)
        {
            printf("%d\n",iCnt);
        }
}

//////////////////////////////////////////////////////////////////

void Display_Even_Factors(int iNo)
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if(((iNo%iCnt)==0)&&(iCnt%2 == 0))
        {
            printf("%d\n",iCnt);
        }
    }
}

//////////////////////////////////////////////////////////////////

void Display_Odd_Factors(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo % iCnt == 0)&&(iCnt % 2 != 0))
        {
            printf("%d\n",iCnt);
        }
    }
}

//////////////////////////////////////////////////////////////////

int CountDigits(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    if(iNo == 0)
    {
        return 1;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo %10;
        iNo = iNo/10;
        iCount++;
    }
    return iCount;
}

//////////////////////////////////////////////////////////////////

int Digits_Sum(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    if(iNo == 0)
    {
        return 1;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo > 0)
    {
        iDigit = iNo%10;
        iSum = iSum +iDigit;
        iNo = iNo/10;
    }
    return iSum;
}

//////////////////////////////////////////////////////////////////

int Count_Even_Digits(int iNo)
{
    int iEvenCnt = 0;
    int iDigit = 0;

    if(iNo == 0)
    {
        return 1;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo>0)
    {
        iDigit = iNo%10;
        if((iDigit%2) == 0)
        {
            iEvenCnt++;
        }
        iNo = iNo/10;
    }
    return iEvenCnt;
}

//////////////////////////////////////////////////////////////////

int Count_Odd_Digits(int iNo)
{
    int iOddCnt = 0;
    int iDigit = 0;

    if(iNo == 0)
    {
        return 1;
    }
    
    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo>0)
    {
        iDigit = iNo%10;
        if((iDigit%2)!=0)
        {
            iOddCnt++;
        }
        iNo = iNo/10;
    }
    return iOddCnt;
}

//////////////////////////////////////////////////////////////////

int Reverse_Digit(int iNo)
{
   int iRev = 0;
   int iDigit = 0;

   if(iNo == 0)
   {
        return 1;
   }

   if(iNo<0)
   {
        iNo = -iNo;
   }

   while(iNo > 0)
   {
    iDigit  = iNo % 10;
    iRev    = (iRev * 10)+iDigit;
    iNo     = iNo/10;
   }
   return iRev;
}

//////////////////////////////////////////////////////////////////

bool Check_Pallindrome(int iNo)
{
    int iRev = 0;
    int iDigit = 0;
    int iTemp = iNo;

    if(iNo == 0)
    {
        return 1;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo%10;
        iRev = (iRev * 10)+ iDigit;
        iNo = iNo/10;
    }

    if(iRev == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//////////////////////////////////////////////////////////////////

int Max_Digit(int iNo)
{
    int iDigit = 0;
    int iMax = 0;

    if(iNo == 0)
    {
        return 1;
    }
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit>iMax)
        {
            iMax = iDigit;
        }
        if(iMax == 9)
        {
            break;
        }

        iNo = iNo/10;
    }
    return iMax;
}

//////////////////////////////////////////////////////////////////

int Min_Digit(int iNo)
{
    int iDigit = 0;
    int iMin = 9;

    if(iNo == 0)
    {
        return 1;
    }
    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo>0)
    {
        iDigit = iNo % 10;

        if(iDigit<iMin)
        {
            iMin = iDigit;
        }
        if(iMin == 0)
        {
            break;
        }

        iNo = iNo /10;
    }
    return iMin;
}

//////////////////////////////////////////////////////////////////

int Fibonacci_Number(int iValue)
{
    int iCurrent = 1;
    int iPrevious = 0;
    int iNext = 0;
    int iCnt = 0;

    for(iCnt = 0;iCnt<=iValue;iCnt++)
    {
        iNext = iCurrent + iPrevious;
        iPrevious = iCurrent;
        iCurrent = iNext;
        printf("-----> : %d\n",iCurrent);
    }
}

//////////////////////////////////////////////////////////////////
