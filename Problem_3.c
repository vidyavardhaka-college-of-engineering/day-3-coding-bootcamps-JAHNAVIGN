// Check whether an integer is odd or even

#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if(number%2==0)
    printf("%d is Even\n",number);
    else
    printf("%d is Odd\n",number);
    
   
    return 0;
}
