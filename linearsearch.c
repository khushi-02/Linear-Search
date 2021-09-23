#include<stdio.h>
int linearSearch(int arr[], int size, int element)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == element)
        {

           return i;
        }
    }
        return -1;
}
int main ()
{
    int arr[] = {23,54,63,21,67,43,78,91,32,67,76};
    int element = 54;
    int size = sizeof(arr)/sizeof(int);
    int search = linearSearch(arr, size, element);
    printf("The element to be searched is found at %d \n", search);
    return 0;
}
