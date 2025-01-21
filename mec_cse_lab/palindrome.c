#include <stdio.h>
int main(){

int num , reversed = 0, original, remainder;



printf("Enter the number :");
 scanf("%d", &num);

original = num;

// reverse the number
while ( num !=0){
    remainder = num % 10;  // get the last digit
    reversed = reversed * 10 + remainder ;  // build the reversed number
    num /= 10; // remove the last digit from num
}


// check if the number is a palindrome

if(original == reversed){
    printf("%d is a palindrome number . \n", original);

} else {
    printf(" %d d is not a palindrome number . \n", original);
}


return 0;

}