#include <stdio.h>
int main(){
    int arr1[5]={1, 23, 34,67,92,};
    int n;
    int i;
    printf("Enter number to be searched: ");
    scanf("%d",&n);
    if(n>arr1[4] || n<arr1[0])
    {
        printf("Not in array");
    }
    else{
        for (i = 1; i < 5;i++)
        {

            if (n == arr1[i]) {
                printf("found at %d", i);
                break;
            }
            if (n < arr1[i]) {

            }
        }printf("Not in array");
    }
}