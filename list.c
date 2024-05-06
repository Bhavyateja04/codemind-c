#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// structure to represent an item in the cart
typedef struct Item {
    char name[50];
    float price;
    int quantity;
    struct Item* next;
} Item;
 //function to create a new item node
Item* createItem(const char* name, float price, int quantity) {
    Item* newItem = (Item*)malloc(sizeof(Item));
    if (newItem == NULL) {
        printf("Memory allocation failed!\n");
    }
    strncpy(newItem->name, name, sizeof(newItem->name));
    newItem->price = price;
    newItem->quantity = quantity;
    newItem->next = NULL;
    return newItem;
}
// funtion to add a new item to the cart
void addItem(Item** cart, const char* name, float price, int quantity) {
    Item* newItem = createItem(name, price, quantity);
    if (*cart == NULL) {
        *cart = newItem;
    } else {
        newItem->next = *cart;
        *cart = newItem;
    }
}
// function to display the items in the shopping cart
void displayCart(Item* cart) {
    if (cart == NULL) {
        printf("Your shopping cart is empty.\n");
    } else {
        printf("Your shopping cart:\n");
        int totalItems = 0;
        float totalPrice = 0.0;
        while (cart!= NULL) {
            printf("Item: %s, Price: %.2f, Quantity: %d\n", cart->name, cart->price, cart->quantity);
            totalItems += cart->quantity;
            totalPrice += cart->price * cart->quantity;
            cart = cart->next;
        }
        printf("Total items: %d, Total price: %.2f\n", totalItems, totalPrice);
    }
}
// function to remove the complete item from the cart
void removeItem(Item** cart, const char* name) {
    Item* current = *cart;
    Item* prev = NULL;

    while (current != NULL) {
        if (strcmp(current->name, name) == 0) {
            if (prev == NULL) {
                *cart = current->next;
            } else {
                prev->next = current->next;
            }
            
            printf("%s removed from the cart.\n", name);
            return;
        }
        prev = current;
        current = current->next;
    }
    printf("%s not found in the cart.\n", name);
}
//function to update the cart as increment or decrement given by user
void Update_quantity(struct Item** cart, char* name, int newquantity) {
    struct Item* temp = *cart;
    struct Item* prev = NULL;
    if (temp!= NULL && temp->quantity == newquantity) {
        temp->quantity = newquantity;
        return;
    }
    while (temp!= NULL && strcmp(temp->name, name)!= 0) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
        return;
    temp->quantity = newquantity;
}

int main() {
    Item* shoppingCart = NULL;
    int choice;
    char name[50];
    float price;
    int quantity, newquantity;
    // loop to run the functions using switch case
    do {
    	printf("Welcome\n");
        printf("  Menu:\n");
        printf("1. Add item to cart\n");
        printf("2. Remove item from cart\n");
        printf("3. Bill\n");
        printf("4. Update Item\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1://add the item
                printf("Enter item details:\n");
                printf("Name: ");
                scanf("%s", name);
                printf("Price: ");
                scanf("%f", &price);
                printf("Quantity: ");
                scanf("%d", &quantity);
                addItem(&shoppingCart, name, price, quantity);
                break;
            case 2://remove the item
                printf("Enter the name of the item to remove: ");
                scanf("%s", name);
                removeItem(&shoppingCart, name);
                break;
            case 3://display the cart
                displayCart(shoppingCart);
                break;
            case 4: //update the item
                printf("Enter the name of the item to update: ");
                scanf("%s", name);
                printf("Enter the new quantity: ");
                scanf("%d", &newquantity);
                Update_quantity(&shoppingCart, name, newquantity);
                break;
            case 5://in regards
                printf("Thankyou\n");
                break;

            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    } while (choice!= 5);
    return 0;
}
