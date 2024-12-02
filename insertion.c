#include<stdio.h>
#include<stdlib.h>
void insertion(int *arr,int *length, int position);
void display(int *arr, int length);
int main(){
    int length, *arr, position;
    printf("enter the size of array :");
    scanf("%d",&length);
    arr=(int*)malloc(length*sizeof(int));
    printf("enter the array element :\n");
    for(int i=0;i<length;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the position where you want insert the element :");
    scanf("%d",&position);
    insertion(arr, &length, position);
    display(arr, length);

return 0;
}
void insertion(int *arr, int *length, int position)
{
    (*length)++;
    int element;
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    for (int i = *length; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    
}

void display(int *arr, int length){
    for(int i=0;i<length;i++){
        printf("%d ",arr[i]);
    }
}