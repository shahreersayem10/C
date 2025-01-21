#include <stdio.h>
int main(){

int n,i,sum = 0;

// taking input for array size

printf("Enter the number of elements :");
scanf("%d", &n);

int arr[n];

printf("Enter %d elements :  ",n);

for( i=0; i < n; i++){
    scanf("%d", &arr[i]);
    sum +=arr[i];   // adding each array in to sum
}

// printing the sum

printf("Sum of array elements : %d \n", sum);


    return 0;
}