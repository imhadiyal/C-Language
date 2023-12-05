#include <stdio.h>

struct Product
{
    int productNo;
    char productName[50];
    float price;
    int quantity;
};

float calculateTotal(struct Product p)
{
    float total = p.price * p.quantity;
    return total + (total * 0.18);
}

int main()
{
    FILE *file;
    file = fopen("bill.txt", "w");

    int n, i;
    char custName[50], conNo[15];
    printf("Enter the number of products: ");
    scanf("%d", &n);

    struct Product products[n];

    printf("Enter customer name: ");
    scanf("%s", custName);

    printf("Enter contact number: ");
    scanf("%s", conNo);

    fprintf(file, "Customer Name: %s\nContact Number: %s\n\n", custName, conNo);
    fprintf(file, "Product No\tProduct Name\tPrice\tQuantity\tTotal\n");
    printf("Product No\tProduct Name\tPrice\tQuantity\tTotal\n");

    for (i = 0; i < n; i++)
    {
        printf("Enter details for Product %d:\n", i + 1);
        printf("Product Number: ");
        scanf("%d", &products[i].productNo);
        printf("Product Name: ");
        scanf("%s", products[i].productName);
        printf("Price: ");
        scanf("%f", &products[i].price);
        printf("Quantity: ");
        scanf("%d", &products[i].quantity);

        float total = calculateTotal(products[i]);

        fprintf(file, "%d\t\t%s\t\t%.2f\t%d\t\t%.2f\n", products[i].productNo, products[i].productName, products[i].price, products[i].quantity, total);
    }

    fclose(file);
    printf("Bill generated and stored in 'bill.txt' file.\n");
    return 0;
}