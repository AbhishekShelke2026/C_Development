//take input as a number and displat the factors of that number


#include<stdio.h>

//Time Complexity : O(N/2)

int  DisplayFactors(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    printf("factors of %d are : \n",iNo);

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt)==0)
        {
            printf("%d\n",iCnt);

        }
        iMult = iMult * iNo;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number  :\n");
    scanf("%d",&iValue);

    iRet = DisplayFactors(iValue);

    printf("mult is %d",iRet);
    
    return 0;
}