#include "cabeceras.h"


void cliente(void)
{
char opCliente;
int nPersonas, contPersonas=0;
int *mesa;
float cuenta,*pCuenta;
     do{
        system ("cls");
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
         printf("Cuantas personas sois:\t");
         scanf("%i",&nPersonas);
         if(nPersonas == 0)
         printf("Numero de personas no valido, introduzca la cantidad de nuevo:");
         else if(nPersonas == 1)
         printf("Entendido, tome asiento enseguida le traemos la carta.");
         else if(nPersonas > 1)
         printf("Entendido, tomen asiento enseguida les traemos la carta.");
   }while(nPersonas == 0);


//mesa=malloc(sizeof(int)* nPersonas);
//if (memoria == NULL) {
//printf("Error: memoria no disponible.\n");
//exit(-1);
//}
//for(contPersonas=0;contPersonas<nPersonas;contPersonas);
do{
    carta();
    contPersonas++;

}while(contPersonas<nPersonas);


                    //printf("carta\n");
                    break;
                case 'p':
                case 'P':
                     printf("Introduzca el numero de personas en la mesa:\t");
                     scanf("%f",&nPersonas);
                     cuenta=calculadora(nPersonas);
                     //pCuenta = &cuenta;
                   // printf("calculadora\n");
                    break;
            }


        }while (opCliente!='c'  &&  opCliente!='p' &&  opCliente!='s' &&  opCliente!='l' &&  opCliente!='a' && opCliente!='C'  &&  opCliente!='P' &&  opCliente!='S' &&  opCliente!='L' &&  opCliente!='A');
         //}while (c!='c'  &&  c!='p' &&  c!='s' &&  c!='l' &&  c!='a' && c!='C'  &&  c!='P' &&  c!='S' &&  c!='L' &&  c!='A');
        printf("Desea continuar con la opcion cliente\t");

}

void proveedor(char c)
{
    char respuesta,producto;
    printf("�Bienvenido proveedor\a!");
    printf("�Que clase de producto abastece? Escriba el producto del que nos provee de los siguientes:\n");
    printf("Tabaco ; Bebida ; Pescado ; Carnes ;\n");
    do
    {
       printf("�Su producto se encuentra entre los anteriores? Responda s� o no:\t");
       scanf("%c",&respuesta);
    if (respuesta=='si' && respuesta=='s�' && respuesta=='Si' && respuesta=='S�' && respuesta=='SI' && respuesta=='S�')
    {
      do
      {
        printf("Escriba el producto del que nos abastece de los presentados tal y como se indican:\t");
        scanf("%c",&producto);
        switch (producto)
       {
        case 'tabaco':
        case 'Tabaco':
        case 'TABACO':
          proveedortabaco();
          break;
        case 'bebida':
        case 'Bebida':
        case 'BEBIDA':
          proveedorbebida();
          break;
        case 'pescado':
        case 'Pescado':
        case 'PESCADO':
          proveedorpescado();
          break;
        case 'carnes':
        case 'Carnes':
        case 'CARNES':
          proveedorcarne();
          break;
       }
      }
      while (producto!='tabaco' && producto!='Tabaco' && producto!='TABACO' && producto!='bebida' && producto!='Bebida' && producto!='BEBIDA' && producto!='pescado' && producto!='Pescado' && producto!='PESCADO' && producto!='carnes' && producto!='Carnes' && producto!='CARNES');
    }
    }
    else if (respuesta=='no' && respuesta=='NO' && respuesta=='No')
        printf("Si no es proveedor de ninguno de los productos anteriores, puede llamar al n�mero facilitado en el men� principal.\n");
    }
    while (respuesta!='si' && respuesta!='s�' && respuesta!='Si' && respuesta!='S�' && respuesta!='SI' && respuesta!='S�' && respuesta!='no' && respuesta!='NO' && respuesta!='No')



void gobierno(void)
{
char opGob[2];

printf("Bienvenido, �quiere inspeccionar las condiciones de empleo? (si/no):\n");
do
{
    scanf("%s",opGob);
}while(opGob)
inspecTrabajo();

}//fin funcion

