#include <stdio.h>
int main()
{
    int array[10];
    int i, size, num1,num2, index_1,index_2;

    printf("Enter size of the array : ");
    scanf("%d", &size);

    /* Input elements in array */
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }

    /* Input new element and position to insert */
    printf("Enter new element's to insert : ");
    scanf("%d %d", &num1, &num2);
    printf("Enter the element's index(sequencially) : ");
    scanf("%d %d", &index_1,&index_2);
    printf("Array elements befor insertion : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    /* Make space for new array element by shifting to right */
    for(i=size-1; i>=index_1; i--) //as sequenciall index we do not need index_2
    {
        array[i+2] = array[i];
    }
    /* insert two element at given index*/
    array[index_1] = num1;
    array[index_1+1] = num2;

    /* Print array after insert operation */
    printf("\nArray elements after insertion : ");
    for(i=0; i<size+1; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}

