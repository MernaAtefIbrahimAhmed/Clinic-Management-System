#include <stdio.h>
#include <string.h>
#include "headers.h"
int main(void) {
    int choose, password, op;
    int exit_system = 0;

    while (!exit_system) {
        printf("\nWelcome to Clinic Management System\n");
        printf("1 - Admin Mode\n2 - User Mode\n3 - Exit System\n> ");
        scanf("%d", &choose);

        switch (choose) {
            case 1: {  // Admin Mode
                int attempts = 0;
                int admin_exit = 0;
                
                while (attempts < 3 && !admin_exit) {
                    printf("Enter Admin Password (Attempt %d/3): ", attempts + 1);
                    scanf("%d", &password);
                    
                    if (password == 1234) {
                        while (!admin_exit) {
                            printf("\n--- Admin Menu ---\n");
                            printf("1. Add patient\n");
                            printf("2. Edit patient\n");
                            printf("3. Reserve slot\n");
                            printf("4. Cancel reservation\n");
                            printf("5. View all reservations\n");
                            printf("6. Save patients to file\n");
                            printf("7. Return to Main Menu\n");
                            printf("> ");
                            scanf("%d", &op);

                            switch (op) {
                                case 1: add_patient(); break;
                                case 2: edit_patient(); break;
                                case 3: reserve(); break;
                                case 4: cancelReservation(); break;
                                case 5: viewReservations(); break;
                                case 6: save_patients_to_file(); break;
                                case 7: admin_exit = 1; break;
                                default: printf("Invalid option.\n");
                            }
                        }
                    } else {
                        attempts++;
                        if (attempts < 3) {
                            printf("Incorrect password. ");
                        } else {
                            printf("Maximum attempts reached. Returning to main menu.\n");
                        }
                    }
                }
                break;
            }

            case 2: {  // User Mode
                int user_exit = 0;
                while (!user_exit) {
                    printf("\n--- User Menu ---\n");
                    printf("1. View all reservations\n");
                    printf("2. View patient details\n");
                    printf("3. Return to Main Menu\n");
                    printf("> ");
                    scanf("%d", &op);

                    switch (op) {
                        case 1: viewReservations(); break;
                        case 2: View_Patient(); break;
                        case 3: user_exit = 1; break;
                        default: printf("Invalid option.\n");
                    }
                }
                break;
            }

            case 3:  // Exit System
                exit_system = 1;
                printf("Exiting system...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}