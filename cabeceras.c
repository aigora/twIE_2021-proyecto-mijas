#include "cabeceras.h"

void cliente(char c)
{

     do{
        system ("cls");
        printf("Bienvenido cliente, escriba que quiere consultar o realizar:\n");
        printf("- Consultar la carta, 'C';\n");
        printf("- Calculadora de precios, 'P';\n");
        printf("- Consultar suplementos, 'S';\n");
        printf("- Localizacion del restaurante, 'L';\n");
        printf("- Informe de alergenos, 'A'\n\n");

     switch (c)
            {
                case 'c':
                case 'C':
                    printf("carta\n");
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

        }while (op2!='c'  &&  op2!='p' &&  op2!='s' &&  op2!='l' &&  op2!='a' && op2!='C'  &&  op2!='P' &&  op2!='S' &&  op2!='L' &&  op2!='A');


}

void proveedor(char c)
{
    do{


        system("cls");
        printf("Bienvenido Proveedor\n");
        printf("Identificarse por tipo de producto: ");
        printf("- Bebida, 'M'\n");
        printf("- Comida, 'C'\n");
        printf("- Tabaco, 'T'\n");
        printf("- Otro, 'O'\n");


            scanf("%c", &op3);
            proveedor(op3);
                switch (c)
            {
                case 'm':
                case 'M':
                    printf("Bebida\n");
                    break;
                case 'c':
                case 'C':
                    printf("Comida\n");
                    break;
                case 't':
                case 'T':
                    printf("Tabaco\n");
                    break;
                case 'o':
                case 'O':
                    printf("Otro\n");
                    break;
                default:

                    break;
            }

      }while(op3!='m'  &&  op3!='M' &&  op3!='c' &&  op3!='C' &&  op3!='t' && op3!='T'  &&  op3!='O' &&  op3!='o');

        break;
}

void publicista()

void gobierno(char c)
{
     do{

        system("cls");
        printf("¿Pertenece a Sanidad o Policia (Sanidad 'S', Policia 'P')?: ");
        scanf("%c", );
        printf("\n");

     }while(op4 !='P' && op4!= 'p' && op4!= 's' && op4!= 'S');
       if(op4 == 's' || op4 == 'S'){
            printf("Bienvenido Sanidad\n");
        }else{
            printf("Bienvenido Policia\n");
        }

}
