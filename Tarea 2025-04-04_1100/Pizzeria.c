#include <stdio.h>

int main()
{
    int tipoPizza, ingredientes;
    printf("¿Deseas una pizza vegetariana?\n");
    printf("1-Si, 2-No: ");
    scanf("%d", &tipoPizza);
    printf("Todas las pizzas llevan mozzarella y tomate.\n\n");

    if (tipoPizza == 1)
    {
        printf("Ingredientes vegetarianos disponibles:\n");
        printf("1. Pimiento\n");
        printf("2. Tofu\n\n");
    }
    else
    {
        printf("Ingredientes no vegetarianos disponibles:\n");
        printf("1. Peperoni\n");
        printf("2. Jamon\n");
        printf("3. Salmon\n\n");
    }

    printf("Puede elegir un ingrediente adicional:\n");
    scanf("%d", &ingredientes);
    printf("\nUsted a elegido una pizza %s con mozzarella, tomate y ", tipoPizza == 1 ? "vegetariana" : "no vegetariana");

    switch(ingredientes)
    {
        case 1:
            printf("%s.\n", tipoPizza == 1 ? "Pimiento" : "Peperoni");
            break;

        case 2:
            printf("%s.\n", tipoPizza == 1 ? "Tofu" : "Jamon");
            break;

        case 3:
            if(tipoPizza == 2)
            {
                printf("Salmon.\n");
            }
            break;
        default:
            printf("Opcion invalida.\n");
    }

    return 0;
}
