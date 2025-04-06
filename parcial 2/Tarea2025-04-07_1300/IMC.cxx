#include <stdio.h> 
int main () {
float peso,estatura,imc;

    printf("¿Cuál es su peso? (kg):");
    scanf("%f", &peso);
    
    printf("¿Cuál es su estatura (m):");
    scanf("%f", &estatura);
    
    imc= peso/(estatura*estatura);
    printf("IMC=%.2f\n", imc);
    
    if (imc<18.4){
        printf("Bajo peso\n");
        
    } else if (imc>=18.5 && imc<=24.9) {
        printf("Normal\n");
        
    } else if (imc>=25.0 && imc<=29.9) {
        printf("Sobrepeso\n");
        
    } else if (imc>=30.0 && imc<=34.9) {
        printf("Obesidad clase 1\n");
        
      } else if (imc>35.0 && imc<=39.9) {
        printf("Obesidad clase 2\n");
        
       } else if (imc>35.0 && imc<=39.9) {
        printf("Obesidad clase 2\n");
        
       }else{
        printf("Obesidad clase 3\n");
        
       }
       
       return 0;
}