#include <stdio.h>
#include <stdlib.h>

void identificar();
void contratacion();
void vercontrato();
void nuevocontrato();

typedef struct{
    char agencia[20];
    char nombre[20];
    char apellido[20];

}identificacion;

identificacion publi;

int main(){
  
    printf("Dirigiendose a 'identificacion'\n");

    identificar();

    printf("Dirigiendose a 'contratacion'\n");

    contratacion();


    return 0;
}


void identificar(){
    
    system("clear");

    FILE *f;

    f = fopen("identificacion.txt", "w");

    if (f == NULL){
        printf("No se ha podido abrir.\n");
        exit(1);
    }

    printf("Bienvenido publicista\n\n");
    printf("Identifiquese: \n");
    printf("Introduzca su agencia: ");
    fgets(publi.agencia, 30, stdin);

    fprintf(f, "Agencia: %s", publi.agencia);

    printf("\n");
    
    printf("Introduzca su nombre: ");
    fgets(publi.nombre, 20, stdin);
    fprintf(f, "Nombre: %s", publi.nombre);


    printf("\n");

    printf("Introduzca su apellido: ");
    fgets(publi.apellido, 20, stdin);
    fprintf(f, "Apellido: %s", publi.apellido);



    fclose(f);
    
    


}


void contratacion(){
      char op1;

    do{
        

    
    system("clear");
    printf("Bienvenido:\n");
    printf("%s", publi.nombre);
    printf("%s\n", publi.apellido);
    printf("Selecione que acción quiere realizar\n");
    printf("- Ver contrato existente 'E'\n");
    printf("- Realizar nuevo contrato 'N'\n");
    printf("- Salir\n");
    printf(" ");
    scanf("%c", &op1);

        switch (op1)
        {
        case 'e':
        case 'E':
            vercontrato();
            break;
        
        case 'N':
        case 'n':
            nuevocontrato();
            break;

        case 's':
        case 'S':

            break;
        
        default:
            break;
        }

    }while(op1 != 'e' && op1 != 'n' && op1 != 'E' && op1 != 'N' && op1 != 'S' && op1 != 's');

    
}

void vercontrato(){

    char aux[500];

    printf("VER CONTRATO EXISTENTE: \n\n");

    FILE *f;

    f = fopen("contrato_existente.txt", "r");

    if (f == NULL){
        printf("No se ha podido abrir.\n");
        exit(1);
    }

    while(!feof(f)){
        fgets(aux, 500, f);
        printf("%s", aux);
    }
    printf("\n");

    fclose(f);


}

void nuevocontrato(){
    char aux[500];
    char acepto;
    system("clear");

    printf("NUEVO CONTRATO: \n\n");

     FILE *f;

    f = fopen("nuevo_contrato.txt", "r");

    if (f == NULL){
        printf("No se ha podido abrir.\n");
        exit(1);
    }

    while(!feof(f)){
        fgets(aux, 500, f);
        printf("%s", aux);
    }
   

    fclose(f);

    printf("\n\n");

    printf("Acepta el nuevo contrato?: ('S': SI, 'N': NO) ");
    scanf("%c", &acepto);

    if(acepto=='S' && acepto=='s'){
        printf("Enhorabuena, bienvenido al Restaurant Mijas\n");
    }else{
        printf("Que lastima, esperemos que vuelva pronto. ");
    }



}