#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fclientes.h>

int main(){
    char op1, op2, op3, op4;
    char finalizar;

    do{
        printf("Desea comenzar o continuar la interactuacion, presione cualquier tecla:\n");
        printf("Si desea finalizar presione 'x'\t");
        scanf("%c",&finalizar);
        if(finalizar =! 'x')
        {
            do{

    system("cls");
    printf("Bienvenido al Restaurante Mijas\n\n");
    printf("Con que identidad se relaciona?: \n");
    printf("Cliente 'C',Proveedor 'P', Publicista 'U', Gobierno 'G', Salir 'S':");
    scanf("%c", &op1);

      switch (op1)
      {

      case 'C':
      case 'c':
            cliente(void);
            break;
      case 'P':
      case 'p':
          proveedor();
        break;

      case 'u':
      case 'U':
        publicista();
      break;

      case 'G':
      case 'g':
          gobierno();
     break;

        default:
          printf("\n");
      }

    printf("\n");
    }while (op1!='C'  &&  op1!='U' &&  op1!='P' &&  op1!='G' &&  op1!='S' && op1!='c'  &&  op1!='u' &&  op1!='p' &&  op1!='g' &&  op1!='s')
}
   else if((finalizar == 'x') || (finalizar == 'X'))
   printf("Entendido:\n")


  }while((finalizar != 'x')||(finalizar != 'X'))
  printf("Adios, esperemos que el servicio halla sido de su agrado\n")
  printf("Que vuelva pronto\n");

    return 0;
}
