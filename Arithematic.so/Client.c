#include<stdio.h>
#include<unistd.h>
#include<dlfcn.h>

int main()
{
    int *ptr = NULL;
    int (*fptr1)();
    int (*fptr2)(int);
    int (*fptr3)(int,int);
    int iRet = 0;


    ptr = dlopen("/home/user00032/Desktop/SHARED LIBRARIES/Arithematic.so/Arithematic.so",RTLD_LAZY);
    if(ptr == NULL)
    {
        printf("Unable to Load Library..\n");
        return -1;
    }

    fptr1 = dlsym(ptr,"Display");
    if(fptr1 == NULL)
    {
        printf("UNABLE TO FETCH THE FUNCTION.. \n");
        return -1;
    }
    fptr1();

    ///////////////////////////////////////////////////////////

    fptr2 =(int(*)(int)) dlsym(ptr,"Summation");
    if(fptr2 == NULL)
    {
        printf("UNABLE TO FETCH THE FUNCTION ..\n");
        return -1;
    }
    iRet = fptr2(11);
    printf("Summation is: %d\n",iRet);
    
    ////////////////////////////////////////////////////////////

    fptr3 =(int(*)(int,int)) dlsym(ptr,"Addition");
    if(fptr3 == NULL)
    {
        printf("UNABLE TO FETCH THE FUNCTION ..\n");
        return -1;
    }
    iRet = fptr3(11,21);
    printf("Addition is: %d\n",iRet);

    ////////////////////////////////////////////////////////////
    

    return 0;
}