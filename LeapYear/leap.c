#include <stdio.h>

int main(){
    int year;

    // Input year
    printf("Enter year:");
    scanf("%d", &year);

    //check if year is divisible by 4
    //also check if is divisible by 100 and then it should be divisible by 400
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0 )){
        printf("%d is a leap year. \n", year);
    } else {
        printf("%d is not a leap year. \n", year);
    }
    return 0;
}