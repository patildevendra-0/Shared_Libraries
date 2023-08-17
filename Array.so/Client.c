#include<stdio.h>
#include<unistd.h>
#include<dlfcn.h>

int main()
{
    int iRet = 0;
    int *ptr = NULL;
    int (*fptr)(int[],int);

    int Arr[] = {10,20,30,40,50};

    ptr = dlopen("/home/user00032/Desktop/SHARED LIBRARIES/Array.so/Array.so",RTLD_LAZY);
    if(ptr == NULL)
    {
        printf("UNABLE TO LOAD LIBRARY...\n");
        return -1;
    }

    fptr =(int(*)(int[],int))dlsym(ptr,"Array_Summation");
    if(fptr == NULL)
    {
        printf("UNABLE TO FETCH FUNCTION...\n");
        return -1;
    }

    iRet = fptr(Arr,5);
    printf("Array_Summation : %d\n",iRet);

    return 0;
}