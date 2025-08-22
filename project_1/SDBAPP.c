#include <stdio.h>
#include "SDB.h"

void SDB_action(uint8 choice) {
    uint32 id;
    uint8 count;
    uint32 list[10];

    switch (choice) {
        case 1:
            SDB_AddEntry();
            break;
        case 2:
            printf("Used size: %u students\n", SDB_GetUsedSize());
            break;
        case 3:
            printf("Enter ID to read: ");
            scanf("%u", &id);
            SDB_ReadEntry(id);
            break;
        case 4:
            SDB_GetList(&count, list);
            printf("Total IDs: %u\n", count);
            for (uint8 i = 0; i < count; i++) {
                printf("ID[%u] = %u\n", i + 1, list[i]);
            }
            break;
        case 5:
            printf("Enter ID to check: ");
            scanf("%u", &id);
            if (SDB_IsIdExist(id))
                printf("ID exists.\n");
            else
                printf("ID does not exist.\n");
            break;
        case 6:
            printf("Enter ID to delete: ");
            scanf("%u", &id);
            SDB_DeletEntry(id);
            break;
        case 7:
            if (SDB_IsFull())
                printf("Database is full.\n");
            else
                printf("Database is not full.\n");
            break;
        case 0:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
}

void SDB_APP() {
    uint8 choice;
    do {
        printf("\n=== Student Database Menu ===\n");
        printf("1. Add entry\n");
        printf("2. Get used size\n");
        printf("3. Read student data\n");
        printf("4. Get list of all IDs\n");
        printf("5. Check if ID exists\n");
        printf("6. Delete student data\n");
        printf("7. Check if DB is full\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%hhu", &choice);
        SDB_action(choice);
    } while (choice != 0);
}
