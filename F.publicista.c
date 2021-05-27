#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void identificar();
void contratacion();
void vercontrato();
void nuevocontrato();
void cambio(char aux[]);

typedef struct{
    char agencia[20];
    char nombre[20];
    char apellido[20];

}identificacion;



int main(){



    printf("Dirigiendose a 'identificacion'\n");

    identificar();

    printf("Dirigiendose a 'contratacion'\n");

    contratacion();

    
    
    return 0;
}


void identificar(){

     identificacion publi;

    printf("\033[2J");

    FILE *f;

    f = fopen("identificacion_publicista.txt", "w");

    if (f == NULL){
        printf("identificacion_publicista.txt No se ha podido abrir.\n");
        exit(1);
    }

    printf("Bienvenido publicista\n\n");
    printf("Identifiquese: \n");
    printf("Introduzca su agencia: ");
    fgets(publi.agencia, 30, stdin);
    fflush(stdin);


    fprintf(f, "Agencia: %s", publi.agencia);
cambio(publi.agencia);
    printf("\n");

    printf("Introduzca su nombre: ");
    fgets(publi.nombre, 20, stdin);
    fflush(stdin);

    fprintf(f, "Nombre: %s", publi.nombre);
 cambio(publi.nombre);

    printf("\n");

    printf("Introduzca su apellido: ");
    fgets(publi.apellido, 20, stdin);
    fflush(stdin);

    fprintf(f, "Apellido: %s", publi.apellido);
 cambio(publi.apellido);


    fclose(f);




}


void contratacion(){
      char op1;
       identificacion publi;

    do{



    printf("\033[2J");
    printf("Bienvenido: ");

    printf("%s ", publi.nombre);

    printf("%s ", publi.apellido);

    printf("de %s", publi.agencia);
    printf("\n\n");
    printf("Selecione que accion quiere realizar\n");
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
    char opcion;

    printf("VER CONTRATO EXISTENTE: \n\n");

    FILE *f;

    f = fopen("contrato_publicista.txt", "r");

    if (f == NULL){
        printf("No hay ningun contrato aun.\n");
     printf("Volviendo al menu inicial.");
     sleep(2);
     contratacion();
     exit(1);
    }

    while(!feof(f)){
        fgets(aux, 500, f);
        printf("%s", aux);
    }


 fclose(f);
}

void nuevocontrato(){
    char aux[500];
    char acepto;
     identificacion contrato;
    printf("\033[2J");

    printf("NUEVO CONTRATO: \n\n");


FILE *f;

    f = fopen("contrato_publicista.txt", "w");

    if (f == NULL){
        printf("No se ha podido abrir.\n");
        exit(1);
    }
    fflush(stdin);
    printf("Bienvenido publicista\n\n");
    printf("Identifiquese: \n");
    printf("Introduzca su agencia: ");
    fgets(contrato.agencia, 10, stdin);
    fflush(stdin);
    cambio(contrato.agencia);
     printf("\n");

    printf("Introduzca su nombre: ");
    fgets(contrato.nombre, 10, stdin);
    fflush(stdin);
   cambio(contrato.nombre);


    printf("\n");

    printf("Introduzca su apellido: ");
    fgets(contrato.apellido, 10, stdin);
    fflush(stdin);
    cambio(contrato.apellido);


    fprintf(f, "CONTRATO DE PUBLICIDAD - RESTAURANTE MIJAS\n");
    fprintf(f, "-------------------------------------------\n");
fprintf(f, "CONTRATO DE SERVICIOS DE PUBLICIDAD QUE CELEBRAN POR UNA PARTE EL RESTAURANTE MIJAS, REPRESENTADO EN ESTE ACTO POR LOS DUENOS DEL MISMO,\n");
fprintf(f, "REPRESENTANTES LEGALES A QUIEN EN LO SUCESIVO Y PARA LOS EFECTOS DEL PRESENTE CONTRATO SE\n");
fprintf(f, "LE DENOMINARA RESTAURANTE Y POR LA OTRA PARTE LA AGENCIA PUBLICITARIA _%s_\n", contrato.agencia);
fprintf(f, "REPRESENTADA EN ESTE POR EL __%s_%s__ A QUIEN EN LO SUCESIVO Y PARA\n", contrato.nombre, contrato.apellido);
fprintf(f, "EFECTOS DEL PRESENTE CONTRATO SE LE DENOMINARA PUBLICISTA, DE ACUERDO A LAS\n");
fprintf(f, "SIGUIENTES DECLARACIONES Y CLAUSULAS:\n");
fprintf(f, "DECLARACIONES\n");
fprintf(f, "1. DECLARA __%s__ POR CONDUCTO DE SU REPRESENTANTE.\n", contrato.agencia);
fprintf(f, "1.1. Que es una agencia de publicidad constituida conforme a las Leyes Españolas según consta\n");
fprintf(f, "en lo dispuesto en la resolucion del Consejo General de Madrid,\n");
fprintf(f, "donde se otorga el registro definitivo como __%s s.l.:_%s_%s__ expedido en su\n", contrato.agencia, contrato.nombre, contrato.apellido);
fprintf(f, "sesion ordinaria.\n");
fprintf(f, "2. DECLARA EL PUBLICISTA\n");
fprintf(f, "2.1. Ser una Sociedad Civil constituida y validamente existente conforme a las Leyes Españolas.\n ");


   fclose(f);
  printf("\n");

 f = fopen("contrato_publicista.txt", "r");

    if (f == NULL){
        printf("contrato_publicista.txt No se ha podido abrir.\n");
        exit(1);
    }


while(!feof(f)){
        fgets(aux, 500, f);
        printf("%s", aux);
    }

    fclose(f);

printf("\n");

    printf("Acepta el nuevo contrato?: ('S': SI, 'N': NO) ");
    scanf("%c", &acepto);

    if(acepto=='s'||acepto=='S'){
        printf("Enhorabuena, bienvenido al Restaurant Mijas\n");
        sleep(2);
        printf("\033[2J");
        printf("Volviendo al menu inicial.");
     sleep(2);
     contratacion();
    }else{
        printf("Que lastima, esperemos que vuelva pronto.\n");
        printf("\033[2J");
        printf("Volviendo al menu inicial.");
        sleep(2);
     contratacion();
    }




}

void cambio(char aux[]){
    int i;

    for(i=0;i<50;i++){
        if(aux[i] == '\n'){
            aux[i] = '\0';
        }
    }

}

