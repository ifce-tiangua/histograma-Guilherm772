#include <stdio.h>
#include <stdlib.h>

void preenche_histrograma(char *h[], int valor, int categoria)
{
    for (int i = 0; i < valor; i++)
    {
        h[categoria][i] = '*';
    }
}

void imprimir_histograma(char *h[], int valores[], int categorias)
{
    for (int i = 0; i < categorias; i++)
    {
        printf("%d ", valores[i]);

        for (int j = 0; j < valores[i]; j++)
        {
            printf("%c", h[i][j]);
        }

        printf("\n");
    }
}

int main()
{

    int categorias;
    scanf("%d", &categorias);

    int valores[categorias];
    char *histrograma[categorias];

    for (int i = 0; i < categorias; i++)
    {
        scanf("%d", &valores[i]);
        if (valores[i] == 0)
        {
            histrograma[i] = NULL;
        }
        else
        {
            histrograma[i] = (char *)malloc(valores[i] * sizeof(char));
            preenche_histrograma(histrograma, valores[i], i);
        }
    }

    imprimir_histograma(histrograma, valores, categorias);

    for(i=0;i<categorias;i++){
        free(histrograma[i])
            ;
    } 
    
    return 0;
}
