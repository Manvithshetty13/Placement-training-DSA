#include <stdio.h>

int main() {
    int Time;
    int Bill_Amount = 0;
    char week[10];
    
    printf("Enter the duration: ");
    scanf("%d", &Time);
    
    if (Time == 1) {
        Bill_Amount = (Time * 50);
    } else if (Time > 1 && Time <= 5) {
        Bill_Amount = 50 + ((Time - 1) * 40);
    } else if (Time > 5) {
        Bill_Amount = 50 + (4 * 40) + ((Time - 5) * 30);
    } else {
        printf("Invalid entry!!\n");
        return 1; 
    }
    
    printf("Is it a weekend today? (yes/no): ");
    scanf("%s", week);
    
    if (strcmp(week, "yes") == 0) {
        Bill_Amount = Bill_Amount - (Bill_Amount * 0.05);
    }
    
    printf("The bill amount is: %d\n", Bill_Amount);
    
    return 0;
}
