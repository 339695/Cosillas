#include <stdio.h>
#include <string.h>
#include <ctype.h>
const int TAM = 25;

void capturaCad(char  cadenaOrigen[TAM]);
void eliminaEsp(char cadOrigen[TAM], char cadSinEsp[TAM]);
void invertirCad(char cadSinEsp[TAM], char cadInv[TAM]);


int main(){
    char cadenaOrigen[TAM], cadenaSinEsp[TAM], cadenaInv[TAM];
    
    capturaCad(cadenaOrigen);
    eliminaEsp(cadenaOrigen, cadenaSinEsp);
    invertirCad(cadenaSinEsp, cadenaInv);
    
    if (strcmp(cadenaSinEsp, cadenaInv)==0)
    {
        printf("palindromo \n");
    }else
    {
        printf("La cadena no es palindromo");
    }
    
    

    return 0;
}
void capturaCad(char cadOrigen[TAM]){
    puts("Introduce una cadena: ");
    fflush(stdin);
    gets(cadOrigen);

}

void eliminaEsp(char cadOrigen[TAM], char cadSinEsp[TAM]){
    int tam, j=0;
    tam = strlen(cadOrigen);

    for (int i = 0; i < tam; i++)
    {
        if (cadOrigen[i] != ' ')
        {
            cadSinEsp[i] = cadOrigen[i];
            j++;
        }
        
    }
    
}

void invertirCad(char cadSinEsp[TAM], char cadenaInv[TAM]){
    int tam;
    tam = strlen(cadSinEsp);

    for (int i = tam-1; i >= 0; i--)
    {
        int j=0;
        cadenaInv[j] = cadSinEsp[i];
        j++;
    }
}