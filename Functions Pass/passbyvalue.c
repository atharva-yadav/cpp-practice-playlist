#include <stdio.h>

int swapnum(int var1, int var2){
    
    int temp;
    temp = var1;
    var1 = var2;
    var2 = temp;
}

int main(){
    int num1 = 35;
    int num2 = 45;

    printf("\nBefore %d, %d", num1, num2);

    swapnum(num1, num2);

    printf("\nAfter %d, %d", num1, num2);
}
