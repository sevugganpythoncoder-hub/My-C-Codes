#include <stdio.h>

int main() {
    int input;
    int choice;
    int new_value;
    int array[4] = {22, 60, 98, 111};

    printf("You have an array: [22, 60, 98, 111]\n");
    printf("Do you want to modify it? [1=Yes / 0=No]: ");
    scanf("%d", &input);

    if (input == 1) {
        
        printf("Change which position (1-4)?: ");
        scanf("%d", &choice);

        
        if (choice >= 1 && choice <= 4) {
            printf("Enter the new value: ");
            scanf("%d", &new_value);

            
            int target_index = choice - 1;
            array[target_index] = new_value;

            
            printf("Updated array: [");
            for (int i = 0; i < 4; i++) {
                printf("%d", array[i]);
                if (i < 3) {
                    printf(", "); 
                }
            }
            printf("]\n");

        } else {
            printf("Invalid position selection! Exiting...\n");
        }
    } else {
        printf("No changes made. Exiting...\n");
    }

    return 0;
}
