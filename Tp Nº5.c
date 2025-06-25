/*****************************************
Maximo A. Toranzo    1R1     legajo:418617

*****************************************/


#include <stdio.h>

int cantAlu;
float calif;
float califBaja = 100;
float califAlta = 0;

float suma;
float prom;

int main()
{
    do
    {
        printf("Ingresa la cantidad de alumnos(mayor a 0): ");
        scanf("%d", &cantAlu);
        if(cantAlu <= 0)
        printf("Error. ");
    }while(cantAlu <= 0);
    
    for(int x=1; x<(cantAlu+1); x++)
    {
        do
        {
            printf("Ingrese la calificacion alumno(%d): ",x);
            scanf("%f", &calif);
            if(calif <0 || calif >100)
            printf("Error. ");
        }while(calif <0 || calif >100);
        
        if(califBaja > calif)
        califBaja = calif;
        if(califAlta < calif)
        califAlta = calif;
        
        suma = calif + suma;
    }
    
    prom = suma/cantAlu;
    
    printf("\nPromedio: %2.f \n\n",prom);
    printf("Calificacion mas baja: %2.f \n",califBaja);
    printf("Calificacion mas alta: %2.f \n",califAlta);
    
    return 0;
}
