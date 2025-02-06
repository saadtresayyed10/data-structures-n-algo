#include <stdio.h>
#include <stdlib.h>

struct myArray
{
    int totalSize;
    int usedSize;
    int *ptr;
};

void createArray(struct myArray *a, int tSize, int uSize)
{
    a->totalSize = tSize;
    a->usedSize = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}

void setArray(struct myArray *a)
{
    for (int i = 0; i < a->usedSize; i++)
    {
        scanf("%d", &(a->ptr)[i]);
    }
}

void getArray(struct myArray *a)
{
    for (int i = 0; i < a->usedSize; i++)
    {
        printf("%d ", (a->ptr)[i]);
    }
}

int main()
{
    struct myArray marks;

    createArray(&marks, 10, 4);
    printf("Enter Elements:\n");
    setArray(&marks);
    printf("\nArray values:\n");
    getArray(&marks);
    return 0;
}