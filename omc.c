#include <stdio.h>


int main() {

    int days, startDays; 

    printf("Enter the number of days in the month: "); 
    scanf("%d", &days); 
    printf("Enter the starting day of the week: "); 
    scanf("%d", &startDays); 

    for (int i=0; i < startDays; i++) {
        printf("    "); // 5 whitespaces
    }

    // prevents the top of the calendar from getting cut off to the right 
    if (startDays == 7) { 
        printf("\n");
    }

    // display the days of the week
    for (int i = 1; i <= days; i++) {
        printf("%5d", i); 
        startDays++; 

        if (startDays % 7 == 0) {
            printf("\n");
        }
    }

    return 0;

}