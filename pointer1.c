#include <stdio.h>

int main()
{
    int a =7;
    int *aPtr = &a;
    printf("a:%p\naPtr:%p",&a,aPtr);
    printf("a:%d\naPtr:%d",a,*aPtr);
    printf("a:%d\naPtr:%p",a,*aPtr);
    return 0;
}