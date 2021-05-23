#include "cabeceras.h"

void cliente(void)
{
char opCliente
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
                    carta(void);
                    //printf("carta\n");
                    break;
                case 'p':
                case 'P':
                     cuenta=calculadora(void);
                     pCuenta = &cuenta
                   // printf("calculadora\n");
                    break;
                case 'S':
                case 's':
                    printf("Suplementos\n");
                    break;
                case 'L':
                case 'l':
                    printf("Localizacion\n");
                    break;
                case 'A':
                case 'a':
                    printf("Alergenos\n");
                    break;
            }


        }while (opCliente!='c'  &&  opCliente!='p' &&  opCliente!='s' &&  opCliente!='l' &&  opCliente!='a' && opCliente!='C'  &&  opCliente!='P' &&  opCliente!='S' &&  opCliente!='L' &&  opCliente!='A');
         //}while (c!='c'  &&  c!='p' &&  c!='s' &&  c!='l' &&  c!='a' && c!='C'  &&  c!='P' &&  c!='S' &&  c!='L' &&  c!='A');
        printf("Desea continuar con la opcion cliente\t")

}

void proveedor(char c)
{
    char respuesta,producto;
    printf("¡Bienvenido proveedor\a!")
    printf("¿Que clase de producto abastece? Escriba el producto del que nos provee de los siguientes:\n");
    printf("Tabaco ; Bebida ; Pescado ; Carnes ;\n");
    do
    {
       printf("¿Su producto se encuentra entre los anteriores? Responda sí o no:\t");
       scanf("%c",&respuesta);
    if (respuesta=='si' && respuesta=='sí' && respuesta=='Si' && respuesta=='Sí' && respuesta=='SI' && respuesta=='SÍ')
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
      while (producto!='tabaco' && producto!='Tabaco' && producto!='TABACO' && producto!='bebida' && producto!='Bebida' && producto!='BEBIDA' && producto!='pescado' && producto!='Pescado' && producto!='PESCADO' && producto!='carnes' && producto!='Carnes' && producto!='CARNES')
    }
    }
    else if (respuesta=='no' && respuesta=='NO' && respuesta=='No')
        printf("Si no es proveedor de ninguno de los productos anteriores, puede llamar al número facilitado en el menú principal.\n");
    }
    while (respuesta!='si' && respuesta!='sí' && respuesta!='Si' && respuesta!='Sí' && respuesta!='SI' && respuesta!='SÍ' && respuesta!='no' && respuesta!='NO' && respuesta!='No');
