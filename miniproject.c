#include <stdio.h>

int main()
{
    int bike, model;
    int choice;
    do
    {
        printf("enter which bike would you like to buy: 1-TVS,2-BAJAJ \n");
        scanf("%d", &bike);
        switch (bike)
        {
        case 1:
            printf("enter the model you woud like to buy: 1-platina,2-RTR 260\n");
            scanf("%d", &model);
            switch (model)
            {
            case 1:
                printf("TVS PLATINA:\n PRICE:120000\n MILEAGE:55\n ");
                break;
            case 2:
                printf("TVS RTR 260:\n PRICE:180000\n MILEAGE:40\n ");
                break;

            default:
                printf("invalid input");
            }
            break;
        case 2:
            printf("enter the model you woud like to buy: 1-PULSAR,2-DOMINAR\n");
            scanf("%d", &model);
            switch (model)
            {
            case 1:
                printf("BAJAJ PULSAR:\n PRICE:120000\n MILEAGE:55\n ");
                break;
            case 2:
                printf("BAJAJ DOMINAR:\n PRICE:250000\n MILEAGE:35\n ");
                break;

            default:
                printf("invalid input");
            }

            break;

        default:
            printf("invalid input");
            break;
        }
        printf("would you like to check again: 1-yes,0-no\n");
        scanf("%d",&choice);

    } while (choice==1);
}