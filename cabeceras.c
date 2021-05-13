#include "cabeceras.h"

void cliente(char c)
{
char opCliente
     do{
        system ("cls");
        printf("Bienvenido cliente, escriba que quiere consultar o realizar:\n");
        printf("- Consultar la carta, 'C';\n");
        printf("- Calculadora de precios, 'P';\n");
        printf("- Consultar suplementos, 'S';\n");
        printf("- Localizacion del restaurante, 'L';\n");
        printf("- Informe de alergenos, 'A'\n\n");
scanf("%c", &opCliente);
     switch(opCliente)
            {
                case 'c':
                case 'C':
                    carta(opCliente);
                    //printf("carta\n");
                    break;
                case 'p':
                case 'P':
                    printf("calculadora\n");
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

                default:

                    break;
            }

<<<<<<< Updated upstream
        }while (op2!='c'  &&  op2!='p' &&  op2!='s' &&  op2!='l' &&  op2!='a' && op2!='C'  &&  op2!='P' &&  op2!='S' &&  op2!='L' &&  op2!='A');
=======
        }while (c!='c'  &&  c!='p' &&  c!='s' &&  c!='l' &&  c!='a' && c!='C'  &&  c!='P' &&  c!='S' &&  c!='L' &&  c!='A');


>>>>>>> Stashed changes
}

void proveedor(char c)
{
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
        scanf("%c",&opidentidad);
        switch (opidentidad)
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
          proveedorcarne ();
          break;
       }
      }
      while (opidentidad!='tabaco' && opidentidad!='Tabaco' && opidentidad!='TABACO' && opidentidad!='bebida' && opidentidad!='Bebida' && opidentidad!='BEBIDA' && opidentidad!='pescado' && opidentidad!='Pescado' && opidentidad!='PESCADO' && opidentidad!='carnes' && opidentidad!='Carnes' && opidentidad!='CARNES')
    }
    }
    else if (respuesta=='no' && respuesta=='NO' && respuesta=='No')
        printf("Si no es proveedor de ninguno de los productos anteriores, puede llamar al número facilitado en el menú principal.\n");
    }
    while (respuesta!='si' && respuesta!='sí' && respuesta!='Si' && respuesta!='Sí' && respuesta!='SI' && respuesta!='SÍ' && respuesta!='no' && respuesta!='NO' && respuesta!='No');
