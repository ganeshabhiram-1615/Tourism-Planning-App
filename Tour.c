#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure
struct Destination {
    char name[50];
    char best_time[20];
    char attractions[200];
    char food[100];
    int min_days;
    char itinerary[200];
    char travel[150];
    char hotel[100];
    int budget;

    struct Destination *next;
};

struct Destination *head = NULL;

// CREATE
void addNode() {
    struct Destination *newNode;
    newNode = (struct Destination*)malloc(sizeof(struct Destination));

    printf("\nEnter Destination Name: ");
    scanf(" %[^\n]", newNode->name);

    printf("Best time to visit (summer/winter/etc): ");
    scanf(" %[^\n]", newNode->best_time);

    printf("Famous Attractions: ");
    scanf(" %[^\n]", newNode->attractions);

    printf("Famous Food: ");
    scanf(" %[^\n]", newNode->food);

    printf("Minimum days to stay: ");
    scanf("%d", &newNode->min_days);

    printf("Daily Plan (morning-evening): ");
    scanf(" %[^\n]", newNode->itinerary);

    printf("Travel Suggestions (bus/train/flight): ");
    scanf(" %[^\n]", newNode->travel);

    printf("Budget Hotels: ");
    scanf(" %[^\n]", newNode->hotel);

    printf("Approx Budget (INR): ");
    scanf("%d", &newNode->budget);

    newNode->next = head;
    head = newNode;

    printf("\n✅ Destination Added Successfully!\n");
}

// READ (Display)
void display() {
    struct Destination *temp = head;

    if (temp == NULL) {
        printf("\nNo destinations available!\n");
        return;
    }

    while (temp != NULL) {
        printf("\n----------------------------\n");
        printf("Destination: %s\n", temp->name);
        printf("Best Time: %s\n", temp->best_time);
        printf("Attractions: %s\n", temp->attractions);
        printf("Food: %s\n", temp->food);
        printf("Min Days: %d\n", temp->min_days);
        printf("Itinerary: %s\n", temp->itinerary);
        printf("Travel: %s\n", temp->travel);
        printf("Hotel: %s\n", temp->hotel);
        printf("Budget: ₹%d\n", temp->budget);

        temp = temp->next;
    }
}

// SEARCH
void search() {
    char name[50];
    struct Destination *temp = head;

    printf("\nEnter destination to search: ");
    scanf(" %[^\n]", name);

    while (temp != NULL) {
        if (strcmp(temp->name, name) == 0) {
            printf("\n✅ Found Destination!\n");
            printf("Best Time: %s\n", temp->best_time);
            printf("Attractions: %s\n", temp->attractions);
            printf("Food: %s\n", temp->food);
            printf("Min Days: %d\n", temp->min_days);
            printf("Budget: ₹%d\n", temp->budget);
            return;
        }
        temp = temp->next;
    }

    printf("\n❌ Destination not found!\n");
}

// UPDATE
void update() {
    char name[50];
    struct Destination *temp = head;

    printf("\nEnter destination to update: ");
    scanf(" %[^\n]", name);

    while (temp != NULL) {
        if (strcmp(temp->name, name) == 0) {

            printf("Enter new attractions: ");
            scanf(" %[^\n]", temp->attractions);

            printf("Enter new food: ");
            scanf(" %[^\n]", temp->food);

            printf("Enter new budget: ");
            scanf("%d", &temp->budget);

            printf("\n✅ Updated Successfully!\n");
            return;
        }
        temp = temp->next;
    }

    printf("\n❌ Destination not found!\n");
}

// DELETE
void deleteNode() {
    char name[50];
    struct Destination *temp = head, *prev = NULL;

    printf("\nEnter destination to delete: ");
    scanf(" %[^\n]", name);

    while (temp != NULL && strcmp(temp->name, name) != 0) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("\n❌ Not found!\n");
        return;
    }

    if (prev == NULL) {
        head = temp->next;
    } else {
        prev->next = temp->next;
    }

    free(temp);
    printf("\n🗑️ Destination Deleted!\n");
}

// EXTRA: Suggest based on season
void suggestDestination() {
    char season[20];

    printf("\nEnter season (summer/winter/monsoon): ");
    scanf(" %[^\n]", season);

    if (strcmp(season, "summer") == 0)
        printf("👉 Suggested: Ooty, Manali\n");
    else if (strcmp(season, "winter") == 0)
        printf("👉 Suggested: Goa, Jaipur\n");
    else if (strcmp(season, "monsoon") == 0)
        printf("👉 Suggested: Munnar, Coorg\n");
    else
        printf("No suggestions available.\n");
}

// MENU
int main() {
    int choice;

    while (1) {
        printf("\n====== TOURISM APP ======\n");
        printf("1. Add Node\n");
        printf("2. Delete Node\n");
        printf("3. Update Node\n");
        printf("4. Search\n");
        printf("5. Display\n");
        printf("6. Suggest Destination\n");
        printf("7. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addNode(); break;
            case 2: deleteNode(); break;
            case 3: update(); break;
            case 4: search(); break;
            case 5: display(); break;
            case 6: suggestDestination(); break;
            case 7: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
}