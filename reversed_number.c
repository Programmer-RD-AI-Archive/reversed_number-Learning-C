#include <stdio.h>

int main(){
    int number, number_reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    // >>> 2345%10
    // 5
    // >>> 234.5%10
    // 4.5
    // >>> 23.45%10
    // 3.4499999999999993
    // >>> 2.345%10
    // 2.345
    // Because the datatype is int the decimal values a removed
    for (int i = 0; i <= number; i++){
        number_reversed = number % 10;
        number = number / 10;
        printf("%d ", number_reversed);
    }
}
