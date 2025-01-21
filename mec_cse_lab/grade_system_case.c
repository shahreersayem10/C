#include <stdio.h>
int main(){

int num ;
char grades;

printf("Enter the number");
scanf("%d", &num);

if (num >=90){
    grades = 'A';
} else if(num >=80){
    grades = 'B';
} else if(num >= 70)
{
    grades = 'C';
} else if (num>=60)
{
    grades = 'D';
} else if(num>=50){
    grades = 'E';}
 else {
    grades = 'F';
 }


switch (grades)
{
    case 'A':
    printf("Grade : A \n");
    break;

    case 'B':
    printf("Grade : B \n");

    case 'C':
    printf("Grade : C\n");
    break;
    
    case 'D':
    printf("Grade : D");
    break;

    case 'E':
    printf("Grade :E");
    break;

    case 'F':
    printf("Grade : F \n");
    break;

    default:
    printf("Invalid grade ! \n");

}



    return 0;
}