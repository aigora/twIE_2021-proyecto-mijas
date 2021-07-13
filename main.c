#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


//Estructura cabecera

void cliente();
void proveedor();
void publicista();
void gobierno();


//Estructuras funciones principales

#define N 11


typedef struct{
char plato[30];
float precio;
int nCarta;
}carta;

int cartas();
float calculadora(int nP);


typedef struct
{
   int dd;
   int mm;
   int yy;
}fecha;

typedef struct
{
    char tipo[20];
    float importe;
    int tiempo;
}tcondicion;

int proveedort();




int compContrato(char nombre[],int contra);
int compSalario(char nombre[],char tipo,float saldo);
int compVacaciones(char nombre[],char tipo,int vacas);


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



//main PROGRAMA

int main(){
    char op1, op2, op3, op4;
    char finalizar;

        printf("\033[2J");
        printf("Desea comenzar o continuar la interactuacion, presione cualquier tecla:\n");
        printf("Si desea finalizar presione 'X'\t");
        scanf("%c",&finalizar);
        if((finalizar != 'x') && (finalizar!='X'))
        {
            do
                {
                    printf("\033[2J");
                    printf("Bienvenido al Restaurante Mijas\n\n");
                    printf("Con que identidad se relaciona?: \n");
                    printf("Cliente 'C',Proveedor 'P', Publicista 'U', Gobierno 'G', Salir 'S':");
                    scanf("%c", &op1);
                    switch (op1)
                    {
                        case 'C':
                        case 'c':
                            
                              cliente();
                              main();
                              break;
                            
                        case 'P':
                        case 'p':

                           proveedor();
                            main();
                            break;
                        
                        case 'u':
                        case 'U':
                            publicista();
                            main();
                            break;
                        case 'G':
                        case 'g':
                            gobierno();
                            main();
                            break;
                   }
                   printf("\n");
                }
                while ((op1!='C')  &&  (op1!='U') &&  (op1!='P') &&  (op1!='G') &&  (op1!='S') && (op1!='c')  &&  (op1!='u') &&  (op1!='p') &&  (op1!='g') &&  (op1!='s'));
        }
        else if((finalizar == 'x') || (finalizar == 'X'))
        {
           printf("Entendido:\n");
        }
           printf("Adios, esperemos que el servicio halla sido de su agrado\n");
           printf("Que vuelva pronto\n");
return 0;
}




//Funciones cabecera

void cliente()
{
char opCliente;
int nPersonas, contPersonas=0;

float cuenta;
     do{
        printf("\033[2J");
        printf("\n");
        printf("Bienvenido cliente, escriba que quiere consultar o realizar:\n");
        printf("- Consultar la carta, 'C';\n");
        printf("- Calculadora de precios/cuenta, 'P';\n");
        printf("- Consultar suplementos, 'S';\n");
        printf("- Localizacion del restaurante, 'L';\n");
        printf("- Informe de alergenos, 'A'\n");
        printf("En el momento que desee finalizar la opcion cliente presione exit 'X'");
scanf("%c", &opCliente);
     switch(opCliente)
            {
                case 'c':
                case 'C':
 do{
     printf("\033[2J");
         printf("Cuantas personas sois:\t");
         scanf("%i",&nPersonas);
         if(nPersonas == 0){

         printf("Numero de personas no valido, introduzca la cantidad de nuevo:");
         }else if(nPersonas == 1){
         printf("Entendido, tome asiento enseguida le traemos la carta.");
         }else if(nPersonas > 1){
         printf("Entendido, tomen asiento enseguida les traemos la carta.");
         
         }
   }while(nPersonas == 0);



//mesa=malloc(sizeof(int)* nPersonas);
//if (memoria == NULL) {
//printf("Error: memoria no disponible.\n");
//exit(-1);
//}
//for(contPersonas=0;contPersonas<nPersonas;contPersonas);
do{
    cartas();
    contPersonas++;

}while(contPersonas<nPersonas);


                    //printf("carta\n");
                    break;
                case 'p':
                case 'P':
                printf("\033[2J");
                     printf("Introduzca el numero de personas en la mesa:\t");
                     scanf("%d",&nPersonas);
                     cuenta=calculadora(nPersonas);
                     //pCuenta = &cuenta;
                   // printf("calculadora\n");
                    break;
            }


        }while (opCliente!='c'  &&  opCliente!='p' &&  opCliente!='s' &&  opCliente!='l' &&  opCliente!='a' && opCliente!='C'  &&  opCliente!='P' &&  opCliente!='S' &&  opCliente!='L' &&  opCliente!='A');
         //}while (c!='c'  &&  c!='p' &&  c!='s' &&  c!='l' &&  c!='a' && c!='C'  &&  c!='P' &&  c!='S' &&  c!='L' &&  c!='A');
        printf("Desea continuar con la opcion cliente\t");

}

void proveedor()
{
    char producto;
    printf("\033[2J");
    printf("Bienvenido proveedor\n!");
    printf("Abastece Tabaco?\n");
    printf("Si 's' / No 'N': \n");
    do
    {
       
        
        scanf("%c",&producto);

        if (producto=='s' || producto=='S'){

          proveedort();
         
        
       }
            
    }
    while (producto!='s' && producto!='S' && producto!='n' && producto!='N');


}

void gobierno()
{
char opGob;
printf("\033[2J");
printf("Bienvenido, quiere inspeccionar las condiciones de empleo? SI: 'S' / NO: 'N':\n");
do
{
    scanf("%c",opGob);
}while(opGob!='s' && opGob!='S' && opGob!='n' && opGob!='N');


}//fin funcion

void publicista(){


 printf("Dirigiendose a 'identificacion'\n");

    identificar();

    printf("Dirigiendose a 'contratacion'\n");

    contratacion();


}

//fin funciones cabecera


//CLIENTE


int cartas()
{


    //pedido1 = primero[N];
    // pedido2=segundo[N];
    //pedido3=ostre[N];
    FILE *elecFinal;
    FILE *pCalculadora;
    int eleccion1, eleccion2=0, eleccion3;
    carta primero[N], segundo[N],postre[N];
    char *pedido1,*pedido2,*pedido3;
    float *pedidoprecio1,*pedidoprecio2,*pedidoprecio3;
    int i;
    //primero preguntamos cuantas personas son el la mesa,
    //para repetir el proceso siguiente tantas veces



    FILE *pPrimeros,*pSegundos,*pPostres;
    pPrimeros = fopen("Primeros.txt", "r");
    pSegundos = fopen("Segundos.txt", "r");
    pPostres = fopen("Postres.txt", "r");
    if (pPrimeros == NULL)
    {
    printf("Error al abrir el fichero.\n");
    exit(1);
    }
    else
    {
        
            for(i=0;i<N;++i)
        {
            fscanf(pPrimeros, "%d:%s %f ",&primero[i].nCarta, primero[i].plato,&primero[i].precio);
        }
        
    fclose(pPrimeros);

   
            for(i=0;i<N;++i)
        {
            fscanf(pSegundos, "%d: %s %f ",&segundo[i].nCarta,segundo[i].plato,&segundo[i].precio);
        }
        
    fclose(pSegundos);

    
            for(i=0;i<N;++i)
        {
            fscanf(pPostres, "%d: %s %f ",&postre[i].nCarta,postre[i].plato,&postre[i].precio);
        
    fclose(pPostres);
    }

    printf("Que desea de primer plato, marque el numero de la izquierda:\n");
    printf("Si no desea primero marque (0):\n");

        for(i=0;i<N;++i)
            {
                printf("%i:%s %f\n",primero[i].nCarta, primero[i].plato,primero[i].precio);
            }
    scanf("%i",&eleccion1);
    if(eleccion2>0 && eleccion2<11)
    {
        switch(eleccion1)
        {
    case '1':
        pedido1 = &primero[0].plato;
        pedidoprecio1 = &primero[0].precio;


        break;
    case '2':
        pedido1 = &primero[1].plato;
        pedidoprecio1 = &primero[1].precio;
        break;
    case '3':
        pedido1 = &primero[2].plato;
        pedidoprecio1 = &primero[2].precio;
        break;
    case '4':
        pedido1 = &primero[3].plato;
        pedidoprecio1 = &primero[3].precio;
        break;
    case '5':
        pedido1 = &primero[4].plato;
        pedidoprecio1 = &primero[4].precio;
    case '6':
        pedido1 = &primero[5].plato;
        pedidoprecio1 = &primero[5].precio;
        break;
    case '7':
        pedido1 = &primero[6].plato;
        pedidoprecio1 = &primero[6].precio;
        break;
    case '8':
        pedido1 = &primero[7].plato;
        pedidoprecio1 = &primero[7].precio;
        break;
    case '9':
        pedido1 = &primero[8].plato;
        pedidoprecio1 = &primero[8].precio;
        break;
    case '10':
        pedido1 = &primero[9].plato;
        pedidoprecio1 = &primero[9].precio;
        break;
        }
    }

    else if(eleccion1 == 0)
    {
    printf("Vale, pasemos a los segundos.\n");
    }

    printf("Que desea de segundo plato, marque el numero de la izquierda:\n");
    printf("Si no desea segundo marque (0):\n");

        for(i=0;i<N;++i)
            {
                printf("%i:%s %f\n",segundo[i].nCarta, segundo[i].plato,segundo[i].precio);
            }
    scanf("%i",&eleccion2);
    if(eleccion2>0 && eleccion2<11)
    {
        switch(eleccion2)
        {
    case '1':
        pedido2 = &segundo[0].plato;
        pedidoprecio2 = &segundo[0].precio;

        break;
    case '2':
        pedido2 = &segundo[1].plato;
        pedidoprecio2 = &segundo[1].precio;
        break;
    case '3':
        pedido2 = &segundo[2].plato;
        pedidoprecio2 = &segundo[2].precio;
        break;
    case '4':
        pedido2 = &segundo[3].plato;
        pedidoprecio2 = &segundo[3].precio;
        break;
    case '5':
        pedido2 = &segundo[4].plato;
        pedidoprecio2 = &segundo[4].precio;
    case '6':
        pedido2 = &segundo[5].plato;
        pedidoprecio2 = &segundo[5].precio;
        break;
    case '7':
        pedido2 = &segundo[6].plato;
        pedidoprecio2 = &segundo[6].precio;
        break;
    case '8':
        pedido2 = &segundo[7].plato;
        pedidoprecio2 = &segundo[7].precio;
        break;
    case '9':
        pedido2 = &segundo[8].plato;
        pedidoprecio2 = &segundo[8].precio;
        break;
    case '10':
        pedido2 = &segundo[9].plato;
        pedidoprecio2 = &segundo[9].precio;
        break;
        }
    }

    else if(eleccion2 == 0)
    {
    printf("Vale, pasemos a los postres.\n");
    }


    printf("Que desea de postre, marque el numero de la izquierda:\n");
    printf("Si no desea postre marque (0):\n");

        for(i=0;i<N;++i)
            {
                printf("%i:%s %f\n",postre[i].nCarta, postre[i].plato,postre[i].precio);
            }
    scanf("%i",&eleccion2);
    if(eleccion2>0 && eleccion2<11)
    {
        switch(eleccion2)
        {
    case '1':
        pedido3 = &postre[0].plato;
        pedidoprecio3 = &postre[0].precio;
        break;
    case '2':
        pedido3 = &postre[1].plato;
        pedidoprecio2 = &segundo[1].precio;
        break;
    case '3':
        pedido3 = &postre[2].plato;
        pedidoprecio2 = &segundo[2].precio;
        break;
    case '4':
        pedido3 = &postre[3].plato;
        pedidoprecio2 = &segundo[3].precio;
        break;
    case '5':
        pedido3 = &postre[4].plato;
        pedidoprecio2 = &segundo[4].precio;
    case '6':
        pedido3 = &postre[5].plato;
        pedidoprecio2 = &segundo[5].precio;
        break;
    case '7':
        pedido3 = &postre[6].plato;
        pedidoprecio2 = &segundo[6].precio;
        break;
    case '8':
        pedido3 = &postre[7].plato;
        pedidoprecio2 = &segundo[7].precio;
        break;
    case '9':
        pedido3 = &postre[8].plato;
        pedidoprecio2 = &segundo[8].precio;
        break;
    case '10':
        pedido3 = &postre[9].plato;
        pedidoprecio2 = &segundo[9].precio;
        break;
        }
    }

    else if(eleccion3 == 0)
    {
    printf("Que disfrute de la comida.\n");
    }



    }

    //fichero con todo el menu elegigo

    elecFinal = fopen("Eleccion final.txt","a");

    fprintf(elecFinal,"Usted ha elegigo\n");
    fprintf(elecFinal,"Primero:%c\t", *pedido1);
    fprintf(elecFinal,"Segundo:%c\t",*pedido2);
    fprintf(elecFinal,"Postre:%c\n",*pedido3);

    pCalculadora = fopen("Cuenta.txt","a");
    fprintf(pCalculadora,"%f\t %f\t %f\n",*pedidoprecio1,*pedidoprecio2,*pedidoprecio3);
    fclose(elecFinal);
    fclose(pCalculadora);

      return 0;
    }



    float calculadora(int nP)
    {
    FILE *pPedido;
    float pri[nP],seg[nP],pos[nP],cuenta=0;
    int i=0;
    pPedido = fopen("Cuenta.txt","r");
    if (pPedido == NULL)
    {
    printf("Todavia no has pedido.\n");
    printf("Debes realizar un pedido.\n");
    return -1;
    }

    else
    {
    printf("Procedemos a mostrarle la cuenta.\n");
    pPedido = fopen("Cuenta.txt","r");

    while(fscanf(pPedido,"%f %f %f",&pri[i],&seg[i],&pos[i]) != EOF)
        ++i;

    fclose(pPedido);
    for(i=0;i<nP;++i)
    cuenta += pri[i] + seg[i] + pos[i];


    }//del else
    return cuenta;
    }

    //fin cliente

    //inspeccion


    int compContrato(char nombre[],int contra)
    {
        if(contra == 0)
    {
    printf("Se ha encontrado una irregularidad.\n");
    printf("No dispone de contrato o no esta en regla.\n");
    return 1;//el uno significa irregularidad
    }
    else if(contra == 1)
    {
    printf("Contrato exixtente\n");
    return 0;
    }


return 0;
}

int compSalario(char nombre[],char tipo,float saldo){
switch(tipo){

//{case 'L':
//printf("Para este tipo de contrato (libre) solo es necesario disponer de contrato en regla:\n");
//if(contra == 0)
//{
//printf("Se ha encontrado una irregularidad.\n");
//printf("No dispone de contrato o no esta en regla.\");
//return 1;//el uno significa irregularidad
//}
//else if(contra == 1)
//{
//printf("Contrato en regla\n");
//return 0;
//}

case 'N':
if(saldo < 1250)
{
printf("Irregularidad encontrada");
printf("El trabajador %s no cobra lo estipulado para su tipo de contrato.",nombre);
return 1;
}

else
printf("Salario correcto.\n");
return 0;

case 'R':
if(saldo < 750)
{
printf("Irregularidad encontrada");
printf("El trabajador %s no cobra lo estipulado para su tipo de contrato.",nombre);
return 1;

}

else
printf("Salario correcto.\n");
return 0;
}

return 0;
}


int compVacaciones(char nombre[],char tipo,int vacas){

switch(tipo)
{

//case 'L':
//if(contra == 0)
//printf("No se ha encomtrado ninguna irregularidad\n");
//return 0;//el cero significa correcto
// if(contra == 1)
//printf("Se ha encontrado una irregularidad.\n");
//printf("No dispone de contrato o no esta en regla.\");
//return 1;// el 1 significa irregularidad

case 'N':
if(vacas < 40)
{
printf("Irregularidad encontrada");
printf("El trabajador %s no dispone del numero de dias estipulado para su tipo de contrato.",nombre);
return 1;
}
else
printf("Vacaciones en regla.\n");
return 0;


case 'R':
if(vacas < 30)
{
printf("Irregularidad encontrada");
printf("El trabajador %s no dispone del numero de dias estipulado para su tipo de contrato.",nombre);
return 1;
}
else
printf("Vacaciones en regla.\n");

}
return 0;
}

//fin de inspeccion

//PROVEEDOR

//------------------------


int proveedort (){


    char elec[15];
    char *terminar;
    int marca,bloques;
    time_t rawtime = time(NULL);
    struct tm *now = localtime(&rawtime);
    fecha actual;
    actual.dd = now->tm_mday;
    actual.mm = now->tm_mon;
    actual.yy = now->tm_year+1900;
    fecha entrega,rango;
    int repetir;
    char * otraop;
    char salirseguir[15];
    int qc;
    int rango2;
    float impres;
    int cambio;
    char resp[15];
    char resp2[15];
    char resp3[15];


    printf("\033[2J");    
    printf("Quiere realizar una entrega de tabaco o consultar el contrato vigente?\n");
    printf("Si quiere realizar una entrega escriba: entrega;\n");
    printf("Si quiere consultar el contrato escriba: contrato.\n");
    do
    {
        printf("Asegurese de escribir ortograficamente bien la respuesta.\n");
        printf("Escriba:\t");
        scanf("%s",elec);
        if ((elec[15]=="Entrega") || (elec[15]=="entrega") || (elec[15]=="ENTREGA"))
        {

            char listatabaco[1000];
            FILE *t;
            t = fopen("listatabaco.txt","r");
            do
                {
                    printf("Le adjuntamos nuestras necesidades actuales de TABACO:\n");
                    if (t == NULL)
                        {
                            printf("Error al abrir el documento, int�ntelo de nuevo.\n");
                        }
                    else
                        {
                            while ((feof(t)) == 0)
                            {
                                fscanf(t,"%s",listatabaco);
                                printf("%s\n",listatabaco);
                            }
                            printf("\n\n");
                        }
                    fclose(t);
                }
            while (t == NULL);

            printf("Que cantidades de cada producto nos va a traer?");
            printf("Fijese que a cada producto le corresponde un numero (x),\n");
            printf("escriba dicho numero y a continuacion el numero de bloques\n");
            printf("que nos va a traer, separado por una coma los dos numeros, por ejemplo:\n");
            printf("si nos quiere traer 2 bloques de Marlboro, escriba: 11,2\n");

            do
                {
                    do
                    {
                       printf("Escriba los numeros requeridos:\t");
                       scanf("%i,%i\n",&marca,&bloques);
                       if ((marca=3) || (marca=5) || (marca=7) || (marca=8) || (marca=10) || (marca=13) || (marca=14) || (marca=15))
                        {
                            printf("No necesitamos de este tipo de tabaco,\n");
                            printf("lea la lista facilitada e intentelo de nuevo.\n");
                            terminar="n";
                        }
                        else
                        {
                            switch (marca)
                            {
                            case '1':
                                {
                                    if ((bloques=1) || (bloques=2))
                                    {
                                        printf("Perfecto.\n");
                                        terminar="s";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 bloques.\n");
                                        terminar="n";
                                    }
                                }
                            break;

                            case '2':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar="s";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 bloque.\n");
                                        terminar="n";
                                    }
                                }
                            break;

                            case '4':
                                {
                                    if ((bloques=1) || (bloques=2))
                                    {
                                        printf("Perfecto.\n");
                                        terminar="s";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 bloques.\n");
                                        terminar="n";
                                    }
                                }
                            break;

                            case '6':
                                {
                                    if (bloques==1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar="s";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 bloque.\n");
                                        terminar="n";
                                    }
                                }
                            break;

                            case '9':
                                {
                                    if ((bloques=1) || (bloques=2))
                                    {
                                        printf("Perfecto.\n");
                                        terminar="s";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 bloques.\n");
                                        terminar="n";
                                    }
                                }
                            break;

                            case '11':
                                {
                                    if ((bloques=1) || (bloques=2) || (bloques=3))
                                    {
                                        printf("Perfecto.\n");
                                        terminar="s";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 3 bloques.\n");
                                        terminar="n";
                                    }
                                }
                            break;

                            case '12':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar="s";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 bloque.\n");
                                        terminar="n";
                                    }
                                }
                            break;

                            case '16':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar="s";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 bloques.\n");
                                        terminar="n";
                                    }
                                }
                            break;
                            }
                        }
                    }
                    while(terminar="n");

                    printf("Ha terminado? Escriba si('s'), si quiere pasar a concretar la fecha de entrega;\n");
                    printf("o no ('n'), si aun nos va a entregar mas tipos de tabaco:\t");
                    do
                        {
                            scanf("%c",terminar);
                        }
                    while(terminar!="s" && terminar!="n");
                }
                while ((marca<1) || (marca>16) || (bloques<=0) || (terminar="n") || (terminar="N"));


            printf("Concretemos la fecha para el reabastecimiento.\n");
            printf("Rescuerde que la recogida de provisiones se realiza desde las 8:00h hasta las 11:00h.\n");
            printf("Introduzca cu�ndo nos entregar� las provisiones.\n");

            do
                {
                    printf("Escriba la fecha de la siguiente manera: dd/mm/yy (separado con barra):\t");
                    scanf("%i/%i/%i",&entrega.dd,&entrega.mm,&entrega.yy);
                    if (actual.dd>=entrega.dd)
                        rango.dd = actual.dd - entrega.dd;
                    else
                        {
                            actual.dd+=30;
                            actual.mm-=1;
                            rango.dd = actual.dd - entrega.dd;
                        }
                    if (actual.mm>=entrega.mm)
                        rango.mm = actual.mm - entrega.mm;
                    else
                        {
                            actual.mm+=12;
                            actual.yy-=1;
                            rango.mm = actual.mm - entrega.mm;
                        }
                    rango.yy = actual.yy-entrega.yy;

                    if (rango.dd<8 && rango.mm<1 && rango.yy<1)
                        {
                            printf("Perfecto.\n");
                            repetir=0;
                        }
                    else
                        {
                            printf("No podemos permitirmos tantos dias sin reponer tabaco.\n");
                            printf("Como maximo admitimos una semana por reabastecimiento.");
                            printf("Puede consultar las condiciones en el apartado de contrato.");
                            printf("Por favor, corrija la fecha de entrega:\t");
                            repetir=1;
                        }
                }
            while ((entrega.dd > 31) || (entrega.dd < 0) || (entrega.mm > 12) || (entrega.mm < 0) || (entrega.yy < actual.yy) || (repetir=1));

        printf("Gracias. Hemos registrado los datos de la entrega.");
        do
        {
          printf("Quiere realizar otra operacion como proveedor? (si 's' /no 'n'):\t");
          scanf("%c",otraop);
            if (( otraop="n") || (otraop="N"))
            {
              printf("Quiere volver al MENU PRINCIPAL o SALIR de nuestra plataforma?\n");

              do
              {
                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                  scanf("%s",salirseguir);
                if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                {
                    printf("Volviendo al menu principal...");
                    main();
                }
                else
                {
                    printf("Gracias por usar nuestra plataforma. Buen dia.");
                }

              }
              while(salirseguir!="principal"&& salirseguir!='salir');
            }
        }
        while(otraop!="n" && otraop!="N" && otraop!="s" && otraop!="S");

        }
        
        else//antepenultimo corchete
        {
            tcondicion condicion;
            char contratotabaco[1000];
            FILE *c = fopen("contratotabaco.txt","r");
            do
                {
                    printf("Le mostramos el contrato vigente con PROVEEDOR-TABACO:\n");
                    if (c == NULL)
                        {
                            printf("Error, int�ntelo de nuevo.\n");
                        }
                    else
                        {
                            while ((feof(c)) == 0)
                            {
                                fscanf(c,"%s",contratotabaco);
                                printf("%s\n",contratotabaco);
                            }
                            printf("\n\n");
                        }
                    fclose(c);
                }
            while (c == NULL);



            printf("Le exponemos a continuaci�n las opciones que tiene.\n");
            printf("A cada opci�n le corresponde un numero, escriba dicho\n");
            printf("n�mero cuando se le requiera elegir su opci�n.\n\n");
            printf("ESCRIBA:\n\n");
            printf("1: Si quiere consultar cu�ntos meses activos restan hasta\n");
            printf("posible renovaci�n o fin de contrato y consultar por tanto el\n");
            printf("importe restante a pagar (mensual).\n\n");
            printf("2: Si quiere solicitar alg�n cambio en las condiciones del contrato:\n");
            printf(" suprimir alguna condici�n, negociar precio de la actividad o consultar las\n");
            printf("condiciones para cancelar el contrato.\n\n");
            printf("3: Ampliar el contrato (a�adir plazo activo o nuevos tipos de tabaco\n");
            printf("de los que pueda abastecernos).\n\n");
            do
            {
              scanf("%i",&qc);
            }
            while ((qc>0)&&(qc<4));

            switch (qc)
            {
            case '1':
                {
                  rango2 = 12 - actual.mm;
                  if (rango2 = 0);
                  {
                      impres = 23.232;
                      if ((actual.mm=01) || (actual.mm=03) || (actual.mm=05) || (actual.mm=07) || (actual.mm=8) || (actual.mm=10) || (actual.mm=12))
                      {
                         printf("El contrato finaliza este mismo mes, el importe se pagar�\n");
                         printf("en %i d�a(s).\n",31-actual.dd);
                         printf("A final del mes recibir�n los %f � restantes.\n\n",impres);
                      }
                      else if ((actual.mm=04) || (actual.mm=06) || (actual.mm=9) || (actual.mm=11))
                      {
                         printf("El contrato finaliza este mismo mes, el importe se pagar�\n");
                         printf("en %i d�a(s).\n",30-actual.dd);
                         printf("A final del mes recibir�n los %f � restantes.\n\n",impres);
                      }
                      else
                      {
                          if (((actual.yy%4 == 0) && (actual.yy%100 != 0)) || (actual.yy%400 == 0))
                          {
                            printf("El contrato finaliza este mismo mes, el importe se pagar�\n");
                            printf("en %i d�a(s)\n.",29-actual.dd);
                            printf("A final del mes recibir�n los %f � restantes.\n\n",impres);
                          }
                          else
                          {
                            printf("El contrato finaliza este mismo mes, el importe se pagar�\n");
                            printf("en %i d�a(s)\n.",28-actual.dd);
                            printf("A final del mes recibir�n los %f � restantes.\n\n",impres);
                          }
                      }
                  }
                  if (rango2>0)
                  {
                      impres = 23.232 * rango2;
                      printf("El contrato finaliza en %i mes(es).\n",rango2);
                      printf("Se le pagar�n en total %f � al final de los %i mes(es) restantes.\n\n", impres,rango2);
                  }
                }
            case 2:
                {
                  printf("Escriba/a�ada m�s condiciones que sugiera seg�n cada punto, le explicamos c�mo hacerlo:\n\n");
                  printf("Primero escriba de a que tipo de condici�n se va a referir (abastecimiento, recogida o seguro).\n");
                  printf("Escriba despu�s el importe mensual que desea que tenga dicho servicio.\n");
                  printf("Por �ltimo, escriba cu�ntos meses activos desea que el servicio est� activo.\n\n");

                      FILE *e;
                      e = fopen("condicionestabaco.txt","ab");
                      if (e==NULL)
                        printf("Error.\n");
                      tcondicion condicion;
                      printf("Ingrese (literalmente) el tipo de condici�n (abastecimiento/recogida/seguro):\t");
                      do
                      {
                          scanf("%s",condicion.tipo);
                      }
                      while((condicion.tipo!='abastecimiento') && (condicion.tipo!='recogida') && (condicion.tipo!='seguro'));
                      fflush(stdin);
                      printf("Ingrese el importe mensual en � que sugiere del servicio:\t");
                      do
                      {
                        scanf("%f",&condicion.importe);
                      }
                      while(condicion.importe>0);
                      printf("Ingrese el tiempo mensual que sugiere que el servicio est� activo:\t");
                      do
                      {
                        scanf("%i",condicion.tiempo);
                      }
                      while(condicion.tiempo>0);
                      fwrite(&condicion, sizeof(tcondicion), 1, e);
                      fclose (e);


                  printf("Usted ha escrito:\n\n");
                  e=fopen("condicionestabaco.txt","rb");
                  if(e==NULL)
                    printf("Error.\n");
                  else
                  {
                      tcondicion condicion;
                      fread(&condicion,sizeof(tcondicion),1,e);
                      while(!feof(e));
                      {
                          printf("%s / %0.2f �/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                          fread(&condicion,sizeof(tcondicion),1,e);
                      }
                      fclose(e);
                  }
                  printf("�Quiere realizar algun cambio? (si/no):\t");
                  do
                  {
                    scanf("%s",resp);
                  }
                  while((resp!="si") && (resp!="no"));
                  if (resp[15]="si")
                  {
                      FILE *e;
                      e=fopen("condicionestabaco.txt","r+b");
                      if (e==NULL)
                        printf("Error.\n");
                      else
                      {
                         printf("�En qu� tipo de condici�n desea realizar un cambio?\n");
                         printf("abastecimiento/recogida/seguro\n");
                         do
                            {
                                scanf("%s",resp2);
                            }
                        while((resp2!='abastecimiento') && (resp2!='recogida') && (resp2!='seguro'));
                        tcondicion condicion;
                        int existe=0;
                        fread(&condicion,sizeof(tcondicion),1,e);
                        while (!feof(e))
                        {
                          if (resp2==condicion.tipo)
                            {
                          printf("Ingrese nuevo importe y tiempo activo separado por coma:\n");
                            do
                            {
                              scanf("%f,%i",&condicion.importe,&condicion.tiempo);
                            }
                            while ((condicion.importe<0) || (condicion.tiempo<0));
                            int pos=ftell(e)-sizeof(tcondicion);
                            fseek(e,pos,SEEK_SET);
                            fwrite(&condicion,sizeof(tcondicion),1,e);
                            printf("Se han realizado los cambios requeridos.\n");
                            existe=1;
                            break;
                            }
                          fread(&condicion,sizeof(tcondicion),1,e);
                        }
                        if(existe==0)
                            printf("Ese tipo de condici�n no existe.\n");
                        fclose(e);
                      }
                  }
                  printf("Examinemos sus sugerencias...");
                  if ((condicion.tipo=='abastecimiento')&&(condicion.importe>13.34))
                  {
                      printf("Creemos que %f � no es un precio que pagar�amos por %s...\n",condicion.importe,condicion.tipo);
                      printf("Otro proveedor podr�a facilitarnos el mismo servicio por un precio menor,\n");
                      printf("como por ejemplo 9 �, pero aceptar�amos un importe mensual de 11 � de su parte.\n",condicion.importe-4,condicion.importe-2);
                      printf("�Le parece bien? (si/no):\t");
                      do
                      {
                          scanf("%s",resp3);
                      }
                      while ((resp3[15]!="si") && (resp3[15]!="no"));
                      switch(resp3[15])
                      {
                      case 'si':
                        {
                        printf("Perfecto, corregiremos a continuaci�n el importe:\n\n");
                        condicion.importe=11.00;
                        FILE *e;
                        e=fopen("condicionestabaco.txt","rb");
                        if(e==NULL)
                            printf("Error.\n");
                        else
                            {
                                tcondicion condicion;
                                fread(&condicion,sizeof(tcondicion),1,e);
                                while(!feof(e));
                                      {
                                         printf("%s / %0.2f �/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                      }
                                fclose(e);
                            }
                        }
                      case 'no':
                        {
                          float nimp;
                          printf("No podemos ofrecerle tal cantidad de dinero.\n");
                          printf("Introduzca un importe m�s negociable:\t");
                          do
                          {
                              scanf("%f",&nimp);
                          }
                          while(nimp>13.34);
                          if(nimp<=9.56)
                            {
                              printf("Por supuesto que aceptamos su oferta, corregimos ahora mismo el importe:\n\n");
                              condicion.importe=nimp;
                              FILE *e;
                              e=fopen("condicionestabaco.txt","rb");
                              if(e==NULL)
                              printf("Error.\n");
                              else
                               {
                                  tcondicion condicion;
                                  fread(&condicion,sizeof(tcondicion),1,e);
                                  while(!feof(e));
                                      {
                                         printf("%s / %0.2f �/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                      }
                                  fclose(e);
                               }
                            }
                          if (nimp>9.56)
                            {
                                printf("Es un precio m�s asequible, pero tengamos en cuenta que le pagamos m�s servicios\n");
                                printf("�qu� le parece si lo dejamos en %f? (si/no)\t",nimp-1.34);
                                char resp4[15];
                                do
                                {
                                    scanf("%s",resp4);
                                }
                                while ((resp4[15]!="si")&&(resp4[15]!="no"));
                                switch(resp4[15])
                                   {
                                    case 'si':
                                    {
                                      printf("Perfecto, corregiremos a continuaci�n el importe:\n\n");
                                      condicion.importe=nimp-1.34;
                                      FILE *e;
                                      e=fopen("condicionestabaco.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f �/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                                    }
                                     case 'no':
                                         {
                                             printf("Le sugermos contactar por telefono y concretar una reuni�n para negociar el importe.\n");
                                             printf("�desea salir o volver al menu principal?\n");
                                             do
                                                {
                                                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                                                  scanf("%s",salirseguir);
                                                  if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                                                     {
                                                       printf("Volviendo al menu principal...");
                                                       main();
                                                     }
                                                  else
                                                     {
                                                       printf("Gracias por usar nuestra plataforma. Buen d�a.");
                                                       return 0;
                                                     }
                                                }
                                             while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
                                         }
                                   }
                            }
                          }
                        }
                      }

                  }
                  if((condicion.tipo=='abastecimiento')&&(condicion.importe<=13.34)&&(condicion.importe>10.13));
                  {
                      printf("Es un precio considerable, pero tengamos en cuenta que le pagamos m�s servicios\n");
                      printf("�qu� le parece si lo dejamos en %f? (si/no)\t",condicion.importe-1.13);
                      char resp5[15];
                                do
                                {
                                    scanf("%s",resp5);
                                }
                                while ((resp5[15]!="si")&&(resp5[15]!="no"));
                                switch(resp5[15])
                                   {
                                    case 'si':
                                    {
                                      printf("Perfecto, corregiremos a continuaci�n el importe:\n\n");
                                      condicion.importe=condicion.importe-1.13;
                                      FILE *e;
                                      e=fopen("condicionestabaco.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f �/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                                    }
                                     case 'no':
                                         {
                                             printf("Le sugermos contactar por telefono y concretar una reuni�n para negociar el importe.\n");
                                             printf("�desea salir o volver al menu principal?\n");
                                             do
                                                {
                                                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                                                  scanf("%s",salirseguir);
                                                  if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                                                     {
                                                       printf("Volviendo al menu principal...");
                                                       main();
                                                     }
                                                  else
                                                     {
                                                       printf("Gracias por usar nuestra plataforma. Buen d�a.");
                                                       return 0;
                                                     }
                                                }
                                             while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
                                         }
                                   }
                  }
                  if((condicion.tipo=='abastecimiento')&&(condicion.importe<=10.13))
                  {
                    printf("Por supuesto aceptaremos su oferta, ccorrijamos el cambio:\n\n");
                                      condicion.importe;
                                      FILE *e;
                                      e=fopen("condicionestabaco.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f �/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                  }
                  if((condicion.tipo=='recogida')&&(condicion.importe>13.34))
                  {
                    printf("Creemos que %f � no es un precio que pagar�amos por %s...\n",condicion.importe,condicion.tipo);
                    printf("Otro proveedor podr�a facilitarnos el mismo servicio por un precio menor,\n");
                    printf("como por ejemplo 9 �, pero aceptar�amos un importe mensual de 11 � de su parte.\n",condicion.importe-4,condicion.importe-2);
                    printf("�Le parece bien? (si/no):\t");
                    do
                      {
                          scanf("%s",resp3);
                      }
                    while ((resp3[15]!="si") && (resp3[15]!="no"));
                    switch(resp3[15])
                      {
                      case 'si':
                        {
                         printf("Perfecto, corregiremos a continuaci�n el importe:\n\n");
                         condicion.importe=11.00;
                         FILE *e;
                         e=fopen("condicionestabaco.txt","rb");
                         if(e==NULL)
                            printf("Error.\n");
                         else
                            {
                                tcondicion condicion;
                                fread(&condicion,sizeof(tcondicion),1,e);
                                while(!feof(e));
                                      {
                                         printf("%s / %0.2f �/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                      }
                                fclose(e);
                            }
                        }
                      case 'no':
                        {
                          float nimp;
                          printf("No podemos ofrecerle tal cantidad de dinero.\n");
                          printf("Introduzca un importe m�s negociable:\t");
                          do
                          {
                              scanf("%f",&nimp);
                          }
                          while(nimp>13.34);
                          if(nimp<=9.56)
                            {
                              printf("Por supuesto que aceptamos su oferta, corregimos ahora mismo el importe:\n\n");
                              condicion.importe=nimp;
                              FILE *e;
                              e=fopen("condicionestabaco.txt","rb");
                              if(e==NULL)
                              printf("Error.\n");
                              else
                               {
                                  tcondicion condicion;
                                  fread(&condicion,sizeof(tcondicion),1,e);
                                  while(!feof(e));
                                      {
                                         printf("%s / %0.2f �/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                      }
                                  fclose(e);
                               }
                            }
                          if(nimp>9.56)
                            {
                                printf("Es un precio m�s asequible, pero tengamos en cuenta que le pagamos m�s servicios\n");
                                printf("�qu� le parece si lo dejamos en %f? (si/no)\t",nimp-1.34);
                                char resp4[15];
                                do
                                {
                                    scanf("%s",resp4);
                                }
                                while ((resp4[15]!="si")&&(resp4[15]!="no"));
                                switch(resp4[15])
                                   {
                                    case 'si':
                                    {
                                      printf("Perfecto, corregiremos a continuaci�n el importe:\n\n");
                                      condicion.importe=nimp-1.34;
                                      FILE *e;
                                      e=fopen("condicionestabaco.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f �/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                                    }
                                     case 'no':
                                         {
                                             printf("Le sugermos contactar por telefono y concretar una reuni�n para negociar el importe.\n");
                                             printf("�desea salir o volver al menu principal?\n");
                                             do
                                                {
                                                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                                                  scanf("%s",salirseguir);
                                                  if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                                                     {
                                                       printf("Volviendo al menu principal...");
                                                       main();
                                                     }
                                                  else
                                                     {
                                                       printf("Gracias por usar nuestra plataforma. Buen d�a.");
                                                     }
                                                }
                                             while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
                                         }
                                   }
                            }
                          }
                        }
                      }
                  }
                  if((condicion.tipo=='recogida')&&(condicion.importe<=13.34)&&(condicion.importe>10.13));
                  {
                      printf("Es un precio considerable, pero tengamos en cuenta que le pagamos m�s servicios\n");
                      printf("�qu� le parece si lo dejamos en %f? (si/no)\t",condicion.importe-1.13);
                      char resp5[15];
                                do
                                {
                                    scanf("%s",resp5);
                                }
                                while ((resp5[15]!="si")&&(resp5[15]!="no"));
                                switch(resp5[15])
                                   {
                                    case 'si':
                                    {
                                      printf("Perfecto, corregiremos a continuaci�n el importe:\n\n");
                                      condicion.importe=condicion.importe-1.13;
                                      FILE *e;
                                      e=fopen("condicionestabaco.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f �/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                                    }
                                     case 'no':
                                         {
                                             printf("Le sugermos contactar por telefono y concretar una reuni�n para negociar el importe.\n");
                                             printf("�desea salir o volver al menu principal?\n");
                                             do
                                                {
                                                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                                                  scanf("%s",salirseguir);
                                                  if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                                                     {
                                                       printf("Volviendo al menu principal...");
                                                       main();
                                                     }
                                                  else
                                                     {
                                                       printf("Gracias por usar nuestra plataforma. Buen d�a.");
                                                       return 0;
                                                     }
                                                }
                                             while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
                                         }
                                   }
                  }
                  if((condicion.tipo=='recogida')&&(condicion.importe<=10.13))
                  {
                    printf("Por supuesto aceptaremos su oferta, corrijamos el cambio:\n\n");
                                      condicion.importe;
                                      FILE *e;
                                      e=fopen("condicionestabaco.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f �/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                  }
                  if (condicion.tipo[15]="seguro");
                  {
                      printf("Para negociar las caracter�sticas del seguro, es necesario\n");
                      printf("concretar una reuni�n junto a nuestro gestor, llame nuestro numero para\n");
                      printf("fechar la reuni�n. Gracias.\n\n");
                  }
                  printf("�desea salir o volver al menu principal?");
                  do
                    {
                        printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                        scanf("%s",salirseguir);
                        if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                            {
                               printf("Volviendo al menu principal...");
                               main();
                            }
                        else
                            {
                               printf("Gracias por usar nuestra plataforma. Buen d�a.");
                               return 0;
                            }
                    }
        
                  while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
    
    }

}
while(elec!="entrega" && elec!="contrato");

return 0;
}






//fin proovedor



//PUBLICISTA


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




 

