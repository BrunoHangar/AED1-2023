#include <stdio.h>
#include <string.h>
#define MAX 100

// - Versão alternativa mais elegante e legível - //

// Recebe duas strings e faz uma combinação de seus caracteres,  alternando as letras de cada string, começando com a primeira letra da primeira string,
// seguido pela primeira letra da segunda string, em seguida pela segunda letra da primeira string, e assim sucessivamente. As letras restantes da cadeia 
// mais longa devem ser adicionadas ao fim da string resultante e retornada.
void Combinador(char str1[], char str2[]) {
    int i, tam_max;
    char strFinal[MAX];
    int tam_1 = strlen(str1);
    int tam_2 = strlen(str2);
    
    // Determina qual string é a maior
    if (tam_1 >= tam_2) 
        tam_max = tam_1;
    else 
        tam_max = tam_2;
    
    int k = 0;

    for (i = 0; i < tam_max; i++) {
        if (i < tam_1) {
            strFinal[k++] = str1[i];
        }

        if (i < tam_2) {
            strFinal[k++] = str2[i];
        }
    }

    strFinal[k] = '\0';  // Adiciona o caractere nulo de terminação

    printf("%s\n", strFinal);
}

int main() {
    char str1[MAX], str2[MAX];
    int i = 0, qtd;
    
    scanf("%d", &qtd);
    
    // Lê a entrada e executa a combinação "i" vezes
    while (i < qtd) {
        scanf("%s", str1);
        scanf("%s", str2);
        
        Combinador(str1, str2);
        i++;
    }

    return 0;
}