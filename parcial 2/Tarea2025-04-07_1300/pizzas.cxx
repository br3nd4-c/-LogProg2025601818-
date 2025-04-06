# include<stdio.h> 
#include<string.h>

// string  se usa  para poder almacenar y manipular cadenas de caracteres / texto

int main () {
 
//se le agrega [10] o [20]   por que esta almacenando una palabra (string) y esto indica el espacio suficiente que necesita mas a parte un carcter nulo indicando en final del string. El Char sirve para almacenar caracteres, como letras, digitos, signos de puntuacion o espacios

    char pVegetariana [10];
    char ingrediente [20];
    char ingrediente2 [20];
    
    printf("Quiere una pizza vegetariana? (si/no): ");
    scanf("%s", pVegetariana);
    
//el strcmp sirve para comparar cadenas  strings (cadenas de texto)   
    
    if (strcmp (pVegetariana, "si")==0){
        printf("Muy bien, elija un solo ingrediente. ¿Pimiento o tofu?: ");
        scanf("%s", ingrediente);
     
     if (strcmp (ingrediente, "tofu")==0){
        printf("En seguida se le preparará su pizza vegetariana con tomate, mozzarella y tofu");
        scanf("%s", ingrediente);
     }else{
        printf("En seguida se le preparará su pizza vegetariana con tomate, mozzarella y pimiento");
     }
    }else{
      printf("Está bien, tenemos otros ingredientes no vegetarianos. Elija solo uno: ¿Peperoni, Jamón o Salmón: ");
        scanf("%s", ingrediente2);  
        
     if (strcmp (ingrediente2, "peperoni")==0){
        printf("En seguida se le preparará su pizza no vegetariana con tomate, mozzarella y Peperoni");
        
     }else if (strcmp (ingrediente2, "jamón")==0){
         printf("En seguida se le preparará su pizza no vegetariana con tomate, mozzarella y Jamón");
         
     }else{
         printf("En seguida se le preparará su pizza no vegetariana con tomate, mozzarella y Salmón");
    
     }
     
    }
    
    return 0;
    
}