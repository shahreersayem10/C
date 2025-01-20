#include <stdio.h>
int main()
{
int length, breadth, area, perimeter;

    
    printf("Enter the length of the rectanglur :");
    
    scanf("%d", &length);
    

    
    printf("Enter the breadth of the rectanglur :");            
    
    scanf("%d", &breadth);
    

    
    area = length * breadth ;
    
    printf("Toral area");
    printf("%d \n ", area);
    

    printf("Total perimeter");
    perimeter = (length + breadth);
    
    printf("%d \n", perimeter);

return 0;
}